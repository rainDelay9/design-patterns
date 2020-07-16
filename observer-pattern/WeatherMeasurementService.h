//
// Created by Matan on 7/16/20.
//

#ifndef OBSERVER_PATTERN_WEATHERMEASUREMENTSERVICE_H
#define OBSERVER_PATTERN_WEATHERMEASUREMENTSERVICE_H

#include "IObservable.h"
#include <unordered_set>

class WeatherMeasurementService : public IObservable<double> {
public:
    WeatherMeasurementService() :temperature(0) {}

    void add(std::shared_ptr<IObserver<double>> observer);

    void remove(std::shared_ptr<IObserver<double>> observer);

    void addTemp(double delta);

    void change(double _temperature);

private:
    void notify();

    double temperature;
    std::unordered_set<std::shared_ptr<IObserver<double>>> observers;
};

#endif //OBSERVER_PATTERN_WEATHERMEASUREMENTSERVICE_H
