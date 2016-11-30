#include "MultiplicationDragon.h"


string   MultiplicationDragon::default_name = "AdditionDragon";
int      MultiplicationDragon::default_health = 100;
int      MultiplicationDragon::default_attackForce = 10;
int      MultiplicationDragon::default_attackTime = 100;
int      MultiplicationDragon::default_killPoints = 10;


bool MultiplicationDragon::checkAnswer(int answer) {
    return answer == answer_;
}


void MultiplicationDragon::refresh() {
    generateQuestion();
    name_ = default_name;
    health_ = default_health;
    attackForce_ = default_attackForce;
    attackTime_ = default_attackTime;
    killPoints_ = default_killPoints;
}


MultiplicationDragon::MultiplicationDragon() : Enemy(MultiplicationDragon::default_name,
                                               MultiplicationDragon::default_health,
                                               MultiplicationDragon::default_attackForce,
                                               MultiplicationDragon::default_attackTime,
                                               MultiplicationDragon::default_killPoints) {
    generateQuestion();
}