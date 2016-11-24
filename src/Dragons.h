#ifndef ARITHMETICAL_DRAGONS_DRAGONS_H
#define ARITHMETICAL_DRAGONS_DRAGONS_H

#include "Enemy.h"

class AdditionDragon : public Enemy {
public:
    AdditionDragon(int health,
                   int attackForce,
                   std::string name,
                   int killPoints);

    std::string generateQuestion();
};


class SubtractionDragon : public Enemy {
public:
    SubtractionDragon(int health,
                      int attackForce,
                      std::string name,
                      int killPoints);

    std::string generateQuestion();
};


class MultiplicationDragon : public Enemy {
public:
    MultiplicationDragon(int health,
                         int attackForce,
                         std::string name,
                         int killPoints);

    std::string generateQuestion();
};

#endif //ARITHMETICAL_DRAGONS_DRAGONS_H
