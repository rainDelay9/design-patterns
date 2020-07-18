//
// Created by Matan on 7/18/20.
//

#ifndef DECORATOR_PATTERN_ESPRESSOSHOT_H
#define DECORATOR_PATTERN_ESPRESSOSHOT_H


#include "BeverageDecorator.h"

class EspressoShot : public BeverageDecorator {
public:
    EspressoShot(std::shared_ptr<Beverage> bev) : BeverageDecorator(bev) {}

    std::string description();
    double cost();
};


#endif //DECORATOR_PATTERN_ESPRESSOSHOT_H
