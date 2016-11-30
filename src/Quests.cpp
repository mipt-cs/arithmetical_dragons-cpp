#include "Quests.h"





void Addition::generateQuestion() {
    int left = rand::dist(rand::gen);
    int right = rand::dist(rand::gen);
    std::stringstream question;
    question << left << " + " << right << ": ";
    answer_ = left + right;
    question_ = question.str();
}
