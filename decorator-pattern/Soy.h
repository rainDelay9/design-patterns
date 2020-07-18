//
// Created by Matan on 7/18/20.
//

#ifndef DECORATOR_PATTERN_SOY_H
#define DECORATOR_PATTERN_SOY_H


#include "BeverageDecorator.h"

class Soy : public BeverageDecorator {
public:
    Soy(std::shared_ptr<Beverage> bev) : BeverageDecorator(bev) {}

    std::string description();
    double cost();
};


#endif //DECORATOR_PATTERN_SOY_H
