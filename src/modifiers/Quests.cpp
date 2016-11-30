#include "Quests.h"
#include <sstream>
#include <random>


void Addition::generateQuestion() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dist(1, 100);

    int left = dist(gen);
    int right = dist(gen);

    std::stringstream question;
    question << left << " + " << right << ": ";

    answer_ = left + right;
    question_ = question.str();
}


void Subtraction::generateQuestion() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dist(1, 100);

    int left = dist(gen);
    int right = dist(gen);

    std::stringstream question;
    question << left << " - " << right << ": ";

    answer_ = left - right;
    question_ = question.str();
}

void Multiplication::generateQuestion() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dist(2, 9);

    int left = dist(gen);
    int right = dist(gen);

    std::stringstream question;
    question << left << " x " << right << ": ";

    answer_ = left * right;
    question_ = question.str();
}