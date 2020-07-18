//
// Created by Matan on 7/18/20.
//

#include "Cinnamon.h"

std::string Cinnamon::description() {
    return "Cinnamon, " + this->beverage->description();
}

double Cinnamon::cost() {
    return 0.25 + this->beverage->cost();
}