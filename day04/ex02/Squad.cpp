#include "Squad.hpp"

Squad::Squad(): _units(NULL), _length(0){

}

Squad::Squad(Squad const &sqd){
    t_unit *tmp = sqd._units;

    for (int i = 0; i < sqd.getCount(); i++)
    {
        this->push(tmp->unit->clone());
        tmp = tmp->next;
    }
}

Squad &Squad::operator=(Squad const &sqd){
    if (this != &sqd)
    {
        this->_length = sqd.getCount();
        if (this->_units != NULL)
            this->clearUnits();
        this->_units = sqd._units; 
    }
    return (*this);
}

Squad::~Squad(){
    t_unit *del;

    for(int i = 0 ; i < this->getCount(); i++)
    {
        del = this->_units->next;
        delete this->_units->unit;
        delete this->_units;
        this->_units = del;
    }
}

void Squad::clearUnits(){
    t_unit *del;

    for(int i =0; i < this->getCount(); i++)
    {
        del = this->_units->next;
        delete this->_units->unit;
        delete this->_units;
        this->_units = del;
    }
}

int Squad::getCount() const{
    return this->_length;
}

ISpaceMarine* Squad::getUnit(int i) const{
    if (i > this->getCount() || i < 0)
        return NULL;
    t_unit *tmp = this->_units;
    for (int j = 0; j < i; j++)
        tmp = tmp->next;
    return tmp->unit;
}

int Squad::unit_exist(ISpaceMarine* unit)
{
    t_unit *tmp = this->_units;
    if (!this->_units)
        return(0);
    for(int i = 0; i < this->getCount(); i++)
    {
        if (tmp->unit == unit)
            return 1;
        tmp = tmp->next;
    }
    return 0;
}

int Squad::push(ISpaceMarine* unit){
    if (!unit || unit_exist(unit))
        return(this->getCount());
    this->_length++;
    t_unit *tmp = this->_units;
    t_unit *n = new t_unit;
    n->unit = unit;
    n->next = NULL;
    if (!this->_units)
    {
        this->_units = n;
        n->prev = NULL;
        return (this->getCount());
    }
    while(tmp->next)
        tmp = tmp->next;
    tmp->next = n;
    n->prev = tmp;
    return(this->getCount());
}