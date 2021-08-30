#pragma once
#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource: public IMateriaSource
{
    private:
        AMateria *_materia[4];
        void getCopy(MateriaSource const &s);

    public:
        MateriaSource();
        MateriaSource(MateriaSource const &s);
        MateriaSource &operator=(MateriaSource const &s);
        virtual ~MateriaSource();
        
        virtual void learnMateria(AMateria* m);
        virtual AMateria* createMateria(std::string const & type);
};