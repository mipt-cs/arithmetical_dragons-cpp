#ifndef UNIT_H_INCLUDED
#define UNIT_H_INCLUDED

#include <string>

using std::string;

class Unit {
protected:
    string name_;
    int health_;
    int attackForce_;

public:
    Unit(string name,
         int health,
         int attackForce);

    virtual void refresh() = 0;

    void attack(Unit *target) const;

    bool isAlive() const;
};

#endif