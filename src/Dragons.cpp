#include "Dragons.h"


/***********AdditionDragon*****************************************************/

static const string  AdditionDragon::default_name = "AdditionDragon";
static const int     AdditionDragon::default_health = 100;
static const int     AdditionDragon::default_attackForce = 10;
static const int     AdditionDragon::default_attackTime = 100;
static const int     AdditionDragon::default_killPoints = 10;

AdditionDragon::AdditionDragon()
        : Enemy(AdditionDragon::default_name,
                AdditionDragon::default_health,
                AdditionDragon::default_attackForce,
                AdditionDragon::default_attackTime,
                AdditionDragon::default_killPoints) {}

std::string AdditionDragon::generateQuestion() {
    return std::__cxx11::string();
}


/***********SubtractionDragon**************************************************/

static const string  SubtractionDragon::default_name = "SubtractionDragon";
static const int     SubtractionDragon::default_health = 100;
static const int     SubtractionDragon::default_attackForce = 10;
static const int     SubtractionDragon::default_attackTime = 100;
static const int     SubtractionDragon::default_killPoints = 10;

SubtractionDragon::SubtractionDragon()
        : Enemy(SubtractionDragon::default_name,
                SubtractionDragon::default_health,
                SubtractionDragon::default_attackForce,
                SubtractionDragon::default_attackTime,
                SubtractionDragon::default_killPoints) {}

std::string SubtractionDragon::generateQuestion() {
    return std::__cxx11::string();
}


/***********MultiplicationDragon***********************************************/

static const string  MultiplicationDragon::default_name = "MultiplicationDragon";
static const int     MultiplicationDragon::default_health = 100;
static const int     MultiplicationDragon::default_attackForce = 10;
static const int     MultiplicationDragon::default_attackTime = 150;
static const int     MultiplicationDragon::default_killPoints = 20;

MultiplicationDragon::MultiplicationDragon()
        : Enemy(MultiplicationDragon::default_name,
                MultiplicationDragon::default_health,
                MultiplicationDragon::default_attackForce,
                MultiplicationDragon::default_attackTime,
                MultiplicationDragon::default_killPoints) {}

std::string MultiplicationDragon::generateQuestion() {
    return std::__cxx11::string();
}
