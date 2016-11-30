#include "SubtractionDragon.h"


string   SubtractionDragon::default_name = "AdditionDragon";
int      SubtractionDragon::default_health = 100;
int      SubtractionDragon::default_attackForce = 10;
int      SubtractionDragon::default_attackTime = 100;
int      SubtractionDragon::default_killPoints = 10;


bool SubtractionDragon::checkAnswer(int answer) {
    return answer == answer_;
}


void SubtractionDragon::refresh() {
    generateQuestion();
    name_ = default_name;
    health_ = default_health;
    attackForce_ = default_attackForce;
    attackTime_ = default_attackTime;
    killPoints_ = default_killPoints;
}


SubtractionDragon::SubtractionDragon() : Enemy(SubtractionDragon::default_name,
                                         SubtractionDragon::default_health,
                                         SubtractionDragon::default_attackForce,
                                         SubtractionDragon::default_attackTime,
                                         SubtractionDragon::default_killPoints) {
    generateQuestion();
}