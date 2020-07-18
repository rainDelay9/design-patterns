//
// Created by Matan on 7/18/20.
//

#ifndef DECORATOR_PATTERN_CARAMEL_H
#define DECORATOR_PATTERN_CARAMEL_H


#include "BeverageDecorator.h"

class Caramel : public BeverageDecorator {
public:
    Caramel(std::shared_ptr<Beverage> bev) : BeverageDecorator(bev) {}

    std::string description();
    double cost();
};


#endif //DECORATOR_PATTERN_CARAMEL_H
