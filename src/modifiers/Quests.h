#ifndef ARITHMETICAL_DRAGONS_QUESTS_H
#define ARITHMETICAL_DRAGONS_QUESTS_H

#include <string>

using std::string;


class Addition {
protected:
    int answer_;
    string question_;
public:
    void generateQuestion();
};


class Subtraction {
protected:
    int answer_;
    string question_;
public:
    void generateQuestion();
};


class Multiplication {
protected:
    int answer_;
    string question_;
public:
    void generateQuestion();
};


#endif
