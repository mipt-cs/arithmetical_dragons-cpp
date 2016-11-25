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

    int getHealth() const;

    int getAttackForce() const;

    string getName() const;

    void attack(Unit *target) const;

    void setHealth(int health);

    bool isAlive() const;
};


#endif // UNIT_H_INCLUDED