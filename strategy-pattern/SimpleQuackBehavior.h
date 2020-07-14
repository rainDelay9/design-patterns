//
// Created by Matan on 7/15/20.
//

#ifndef STRATEGY_PATTERN_SIMPLEQUACKBEHAVIOR_H
#define STRATEGY_PATTERN_SIMPLEQUACKBEHAVIOR_H


#include "IQuackBehavior.h"

class SimpleQuackBehavior : public IQuackBehavior {
    void quack();
};


#endif //STRATEGY_PATTERN_SIMPLEQUACKBEHAVIOR_H
