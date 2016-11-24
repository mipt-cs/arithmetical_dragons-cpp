#ifndef UNIT_H_INCLUDED
#define UNIT_H_INCLUDED

#include <string>

using namespace std;

class Unit {
protected:
    int health_;
    int attackForce_;
    std::string name_;


public:
    Unit(int health,
         int attackForce,
         std::string name);

    int getHealth() const;

    int getAttackForce() const;

    string getName() const;

    void attack(Unit* target) const;

    void setHealth(int health);

    bool isAlive() const;
};

#endif // UNIT_H_INCLUDED