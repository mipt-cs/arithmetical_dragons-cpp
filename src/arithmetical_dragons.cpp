#include <iostream>
#include <sstream>
#include <cstdlib>
#include <list>

#include "unit.h"
#include "hero.h"
#include "enemy.h"




void showHealth(const Hero &hero, const Enemy &dragon) {
    std::cout << "Hero health: " << hero.getHealth()
         << ", Enemy health: " << dragon.getHealth() << std::endl;
}

std::list<Enemy *> generateDragonList() {
    std::list<Enemy *> competitors;
    competitors.push_back(new GreenDragon());


    return competitors;
}


bool playGame(Hero &hero, std::list<Enemy *> &dragons) {
    bool gameOver = false;

    for (std::list<Enemy *>::iterator dragon = dragons.begin();
         dragon != dragons.end(); dragon++) {
        std::cout << "You have met a new " << (*dragon)->color() << " dragon. Fight!" << std::endl;

        while ((*dragon)->isAlive() && hero.isAlive()) {
            hero.attack(**dragon);
        }
        if (!hero.isAlive()) {
            gameOver = true;
            break;
        } else // dragon was killed!
        {
            hero.addScores(Enemy::c_killScores);
            std::cout << "Ough! You have killed a dragon!" << std::endl;
        }
    }
    return gameOver;


}


int main()
{
    Hero hero;
    std::list<Enemy*> dragons = generateDragonList();
    bool gameResult = playGame(hero, dragons);

    if (gameResult)
    {
        cout << "Game over! Your score is: " << hero.getScores() << endl;
    }
    else
    {
        cout << "You win! Your score is: " << hero.getScores() << endl;
    }
    for (list<Enemy*>::iterator dragon = dragons.begin();
            dragon != dragons.end(); dragon++)
        delete *dragon;
    return 0;
}
