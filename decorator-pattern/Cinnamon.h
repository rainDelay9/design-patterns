//
// Created by Matan on 7/18/20.
//

#ifndef DECORATOR_PATTERN_CINNAMON_H
#define DECORATOR_PATTERN_CINNAMON_H


#include "BeverageDecorator.h"

class Cinnamon : public BeverageDecorator {
public:
    Cinnamon(std::shared_ptr<Beverage> bev) : BeverageDecorator(bev) {}

    std::string description();
    double cost();
};


#endif //DECORATOR_PATTERN_CINNAMON_H
