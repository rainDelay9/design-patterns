//
// Created by Matan on 7/16/20.
//

#ifndef OBSERVER_PATTERN_WEATHERSTATION1_H
#define OBSERVER_PATTERN_WEATHERSTATION1_H

#include "IObserver.h"

class WeatherStation1 : public IObserver<double> {
public:

    WeatherStation1(int _id): id(_id) {}

    void update(double val) {
        std::cout << "WEATHER STATION V1 (" << this->id << "): " << val << std::endl;
    }

private:
    int id;
};

#endif //OBSERVER_PATTERN_WEATHERSTATION1_H
