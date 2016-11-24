#ifndef ARITHMETICAL_DRAGONS_DRAGONS_H
#define ARITHMETICAL_DRAGONS_DRAGONS_H

#include "Enemy.h"

class AdditionDragon : public Enemy {
private:
    int default_health_;
    int default_attackForce_;
    std::string default_name_;
    int default_killPoints_;

public:
    AdditionDragon(int health, int attackForce, std::string name, int killPoints);
};


class SubtractionDragon : public Enemy {
public:
    SubtractionDragon();
};


class MultiplicationDragon : public Enemy {
public:
    MultiplicationDragon();
};


#endif //ARITHMETICAL_DRAGONS_DRAGONS_H
