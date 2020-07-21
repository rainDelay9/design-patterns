#include <iostream>

#include "AirConditioner.h"
#include "ACRemote.h"

int main() {
    auto ac = std::make_shared<AirConditioner>();
    ACRemote remote{ac};

    remote.pressOnOff();
    remote.pressOnOff();
    remote.pressTempUp();
    remote.pressOnOff();
    remote.pressTempDown();
    remote.pressTempDown();
    remote.pressTempDown();
    remote.pressOnOff();
    remote.pressTempDown();
    remote.pressOnOff();
    remote.pressTempUp();

    return 0;
}
