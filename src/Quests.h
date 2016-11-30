#ifndef ARITHMETICAL_DRAGONS_QUESTS_H
#define ARITHMETICAL_DRAGONS_QUESTS_H


#include <string>
#include <sstream>

namespace rand {
#include <random>

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dist(1, 100);
}

using std::string;


class Addition : public Quest {
protected:
    int answer_;
    string question_;

public:
    void generateQuestion();
};


//
//class Subtraction {
//
//};
//
//class Multiplication {
//
//};

#endif
