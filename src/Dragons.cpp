#include "Dragons.h"


/***********AdditionDragon*****************************************************/

static const string  AdditionDragon::default_name = "AdditionDragon";
static const int     AdditionDragon::default_health = 100;
static const int     AdditionDragon::default_attackForce = 10;
static const int     AdditionDragon::default_attackTime = 100;
static const int     AdditionDragon::default_killPoints = 10;

AdditionDragon::AdditionDragon(string name,
                               int health,
                               int attackForce,
                               int killPoints,
                               int attackTime)
        : Enemy(name = AdditionDragon::default_name,
                health = AdditionDragon::default_health,
                attackForce = AdditionDragon::default_attackForce,
                attackTime = AdditionDragon::default_attackTime,
                killPoints = AdditionDragon::default_killPoints) {}

std::string AdditionDragon::generateQuestion() {
    return std::__cxx11::string();
}


/***********SubtractionDragon**************************************************/

static const string  SubtractionDragon::default_name = "SubtractionDragon";
static const int     SubtractionDragon::default_health = 100;
static const int     SubtractionDragon::default_attackForce = 10;
static const int     SubtractionDragon::default_attackTime = 100;
static const int     SubtractionDragon::default_killPoints = 10;

SubtractionDragon::SubtractionDragon(string name,
                                     int health,
                                     int attackForce,
                                     int killPoints,
                                     int attackTime)
        : Enemy(name = SubtractionDragon::default_name,
                health = SubtractionDragon::default_health,
                attackForce = SubtractionDragon::default_attackForce,
                attackTime = SubtractionDragon::default_attackTime,
                killPoints = SubtractionDragon::default_killPoints) {}


std::string SubtractionDragon::generateQuestion() {
    return std::__cxx11::string();
}


/***********MultiplicationDragon***********************************************/

static const string  MultiplicationDragon::default_name = "MultiplicationDragon";
static const int     MultiplicationDragon::default_health = 100;
static const int     MultiplicationDragon::default_attackForce = 10;
static const int     MultiplicationDragon::default_attackTime = 150;
static const int     MultiplicationDragon::default_killPoints = 20;

MultiplicationDragon::MultiplicationDragon(string name,
                                           int health,
                                           int attackForce,
                                           int killPoints,
                                           int attackTime)
        : Enemy(name = MultiplicationDragon::default_name,
                health = MultiplicationDragon::default_health,
                attackForce = MultiplicationDragon::default_attackForce,
                attackTime = MultiplicationDragon::default_attackTime,
                killPoints = MultiplicationDragon::default_killPoints,) {}


std::string MultiplicationDragon::generateQuestion() {
    return std::__cxx11::string();
}
