#ifndef DRAGON_H_INCLUDED
#define DRAGON_H_INCLUDED

#include <string>
#include <sstream>

class Enemy : public Unit {
protected:
    int my_answer;
    std::string my_color;

public:
    static const int c_killScores = 100;

    Enemy(std::string color, int start_health, int _attackForce);

    virtual std::string generateQuestion() = 0;

    virtual bool checkAnswer(int answer) const;

    std::string color() const;
};


/**********************************************************************************************************************/
Enemy::Enemy(std::string color, int start_health, int _attackForce)
        : Unit(start_health, _attackForce), my_color(color) {}


bool Enemy::checkAnswer(int answer) const {
    return answer == my_answer;
}


std::string Enemy::color() const {
    return my_color;
}
/**********************************************************************************************************************/


#endif // DRAGON_H_INCLUDED
