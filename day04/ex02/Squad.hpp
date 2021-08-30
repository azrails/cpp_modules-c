#pragma once
#include " ISquad.hpp"

typedef struct s_unit{
    ISpaceMarine*   unit;
    struct s_unit*  next;
    struct s_unit*  prev;
}t_unit;

class Squad : public ISquad
{
    private:
        t_unit *_units;
        int _length;
        int unit_exist(ISpaceMarine* unit);
        void clearUnits();

    public:
        Squad();
        Squad(Squad const &sqd);
        Squad &operator=(Squad const &sqd);
        virtual ~Squad();

        virtual int getCount() const;
        virtual ISpaceMarine* getUnit(int) const;

        virtual int push(ISpaceMarine*);
};