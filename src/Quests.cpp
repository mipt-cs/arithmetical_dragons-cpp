#include "Quests.h"

namespace rand {
#include <random>

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dist(1, 100);
}


Addition::Addition() {
    int left = rand::dist(rand::gen);
    int right = rand::dist(rand::gen);

    std::stringstream question;
    question << left << " + " << right << ": ";
    my_answer = left + right;
    return question.str();
}

string Addition::getQuestion() {
    return std::__cxx11::string();
}
