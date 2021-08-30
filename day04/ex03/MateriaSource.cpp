#include "MateriaSource.hpp"

MateriaSource::MateriaSource(){
    for(int i = 0; i < 4; i++)
        this->_materia[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const &s){
    *this = s;
}

MateriaSource &MateriaSource::operator=(MateriaSource const &s){
    if (this != &s)
    {
        for (int i = 0; i < 4; i++)
        {
            if(this->_materia[i] != NULL)
                delete this->_materia[i];
                this->_materia[i] = NULL;
        }
        this->getCopy(s);
    }
    return *this;
}

void MateriaSource::getCopy(MateriaSource const &s)
{
    for (int i = 0; i < 4; i++)
    {
        if (s._materia[i] != NULL)
            this->_materia[i] = s._materia[i]->clone();
        else
            this->_materia[i] = NULL;
    }
}

MateriaSource::~MateriaSource(){
    for (int i = 0; i < 4; i++)
    {
        if(this->_materia[i] != NULL)
            delete this->_materia[i];
            this->_materia[i] = NULL;
    }
}
        
void MateriaSource::learnMateria(AMateria* m){
    int i;
    for (i = 0; i < 4 && this->_materia[i] != NULL; i++);
    if (i < 4)
        this->_materia[i] = m;
}

AMateria* MateriaSource::createMateria(std::string const & type){
     for (int i = 0; i < 4; i++){
         if(this->_materia[i] != NULL && this->_materia[i]->getType() == type)
            return this->_materia[i]->clone();
     }
    return NULL;
}