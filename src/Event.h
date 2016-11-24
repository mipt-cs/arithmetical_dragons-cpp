#ifndef ARITHMETICAL_DRAGONS_EVENT_H
#define ARITHMETICAL_DRAGONS_EVENT_H

#include <list>

class Event {
private:
    Hero hero;
    std::list<Enemy *> enemiesList;


public:
    int complexity;



};


#endif //ARITHMETICAL_DRAGONS_EVENT_H
