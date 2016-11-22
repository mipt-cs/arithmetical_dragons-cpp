#ifndef UNIT_H_INCLUDED
#define UNIT_H_INCLUDED

class Unit {
protected:
    int health;

public:
    int attackForce;

    Unit(int start_health, int _attackForce);

    virtual void getDamage(int damage);

    virtual int getHealth() const;

    virtual bool isAlive() const;
};


/**********************************************************************************************************************/
Unit::Unit(int start_health, int _attackForce) : health(start_health),
                                                 attackForce(_attackForce) {}

void Unit::getDamage(int damage) {
    health -= damage;
}

int Unit::getHealth() const {
    return health;
}

bool Unit::isAlive() const {
    return (health > 0);
}
/**********************************************************************************************************************/


#endif // UNIT_H_INCLUDED
