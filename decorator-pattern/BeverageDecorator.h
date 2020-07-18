//
// Created by Matan on 7/18/20.
//

#ifndef DECORATOR_PATTERN_BEVERAGEDECORATOR_H
#define DECORATOR_PATTERN_BEVERAGEDECORATOR_H

#include "Beverage.h"

class BeverageDecorator : public Beverage {
public:
    BeverageDecorator(std::shared_ptr<Beverage> bev): beverage(bev) {}

protected:
    std::shared_ptr<Beverage> beverage;
};

#endif //DECORATOR_PATTERN_BEVERAGEDECORATOR_H
