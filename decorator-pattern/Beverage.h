//
// Created by Matan on 7/18/20.
//

#ifndef DECORATOR_PATTERN_BEVERAGE_H
#define DECORATOR_PATTERN_BEVERAGE_H

#include <string>

class Beverage {
public:
    virtual std::string description() = 0;
    virtual double cost() = 0;
};

#endif //DECORATOR_PATTERN_BEVERAGE_H
