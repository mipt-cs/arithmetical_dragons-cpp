#include <iostream>
#include <sstream>
#include <cstdlib>
#include <list>
#include <time.h>
#include <zconf.h>
#include <rpc.h>


#include "Unit.h"
#include "Units/Hero.h"
#include "Units/Enemy.h"
#include "units/enemies/AdditionDragon.h"
#include "units/enemies/SubtractionDragon.h"
#include "units/enemies/MultiplicationDragon.h"

using std::list;


list<Enemy *> generateEnemiesList() {
    list<Enemy *> enemies;
    enemies.push_back(new AdditionDragon());
    enemies.push_back(new SubtractionDragon());
    enemies.push_back(new MultiplicationDragon());
    return enemies;
}


void showScreen(Hero &hero, Enemy &enemy) {
    std::cout << "You have met a new " << enemy.getName()
              << " dragon. Fight!" << "\n"
              << "Your score: "
              << hero.getScore() << "\n\n\n"
              << "Your health: " << hero.getHealth() << ".             "
              << "Enemy health: " << enemy.getHealth() << ".\n\n\n\n"
              << "Question: " << enemy.getQuestion() << "\n\n";
              //<< "Time: " << enemy.getAttackTime() << "\n\n.";
}


bool playGame(Hero &hero, list<Enemy *> &enemies) {
    bool gameOver = false;

    for (list<Enemy *>::iterator enemy = enemies.begin();
         enemy != enemies.end();
         enemy++) {


        while ((*enemy)->isAlive() && hero.isAlive()) {
            showScreen(hero, **enemy);
            int answer;
            std::cin >> answer;
            if ((*enemy)->checkAnswer(answer)) {
                hero.attack(*enemy);
            } else {
                (*enemy)->attack(&hero);
            }
            //(*enemy)->setAttackTime((*enemy)->getAttackTime() - 1);
            (*enemy)->refresh();
        }


        if (!hero.isAlive()) {
            gameOver = true;
            break;
        } else {
            hero.updateScore((*enemy)->getKillPoints());
            std::cout << "Ough! You have killed a dragon!" << std::endl;
        }
    }
    return gameOver;


}


int main() {
    Hero hero;
    std::list<Enemy *> dragons = generateEnemiesList();
    bool gameResult = playGame(hero, dragons);

    if (gameResult) {
        std::cout << "Game over! Your score is: "
                  << hero.getScore() << std::endl;
    } else {
        std::cout << "You win! Your score is: "
                  << hero.getScore() << std::endl;
    }
    for (list<Enemy *>::iterator dragon = dragons.begin();
         dragon != dragons.end(); dragon++)
        delete *dragon;
    return 0;
}
