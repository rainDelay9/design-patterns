#include <iostream>
#include "Duck.h"
#include "SimpleFlyingBehavior.h"
#include "SimpleQuackBehavior.h"
#include "CityDuck.h"

int main() {
    Duck simpleDuck{std::make_shared<SimpleQuackBehavior>(), std::make_shared<SimpleFlyingBehavior>()};
    simpleDuck.quack();
    simpleDuck.fly();

    CityDuck cityDuck{};
    cityDuck.quack();
    cityDuck.fly();
    return 0;
}
