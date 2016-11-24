#include "Dragons.h"




/***********AdditionDragon*****************************************************/
std::string AdditionDragon::generateQuestion() {
    return std::__cxx11::string();
}

AdditionDragon::AdditionDragon(int health,
                               int attackForce,
                               std::string name,
                               int killPoints)
        : Enemy(health, attackForce, name, killPoints) {

}




/***********SubtractionDragon**************************************************/
std::string SubtractionDragon::generateQuestion() {
    return std::__cxx11::string();
}

SubtractionDragon::SubtractionDragon(int health,
                                     int attackForce,
                                     std::string name,
                                     int killPoints)
        : Enemy(health, attackForce, name, killPoints) {

}




/***********MultiplicationDragon***********************************************/
std::string MultiplicationDragon::generateQuestion() {
    return std::__cxx11::string();
}

MultiplicationDragon::MultiplicationDragon(int health,
                                           int attackForce,
                                           std::string name,
                                           int killPoints)
        : Enemy(health, attackForce, name, killPoints) {

}
