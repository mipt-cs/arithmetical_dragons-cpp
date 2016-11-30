#include "AdditionDragon.h"


string   AdditionDragon::default_name = "AdditionDragon";
int      AdditionDragon::default_health = 100;
int      AdditionDragon::default_attackForce = 10;
int      AdditionDragon::default_attackTime = 100;
int      AdditionDragon::default_killPoints = 10;


bool AdditionDragon::checkAnswer(int answer) {
    return answer == answer_;
}


void AdditionDragon::refresh() {
    generateQuestion();
    name_ = default_name;
    health_ = default_health;
    attackForce_ = default_attackForce;
    attackTime_ = default_attackTime;
    killPoints_ = default_killPoints;
}


AdditionDragon::AdditionDragon() : Enemy(AdditionDragon::default_name,
                                         AdditionDragon::default_health,
                                         AdditionDragon::default_attackForce,
                                         AdditionDragon::default_attackTime,
                                         AdditionDragon::default_killPoints) {
    generateQuestion();
}