#ifndef RULES_H
#define RULES_H
#include "board.h"
#include "userinput.h"
#include <iostream>
using std::cout;
using std::endl;




class Rules
{

    private:
        bool playersTurn;

    public:
        bool thisTurn( bool whosTurn, Board opponentsBoard);
        void attackPrompt();
        bool hitDetection(AttackCoordinates playersAttack, Board opponentsBoard);
};


#endif
