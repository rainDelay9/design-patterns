#include <iostream>
#include "Soy.h"
#include "Espresso.h"
#include "Caramel.h"
#include "Cinnamon.h"
#include "EspressoShot.h"
#include "Mocha.h"

int main() {
    auto order1 = std::make_shared<Soy>(std::make_shared<Caramel>(std::make_shared<Espresso>()));
    auto order2 = std::make_shared<Caramel>(std::make_shared<Cinnamon>(std::make_shared<EspressoShot>(std::make_shared<Soy>(std::make_shared<Mocha>()))));
    std::cout << "Order 1: " << order1->description() << " : " << order1->cost() << std::endl;
    std::cout << "Order 2: " << order2->description() << " : " << order2->cost() << std::endl;
    return 0;
}
