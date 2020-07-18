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
    //it would probably be best to hold some weak_ptr data structure here
    //but it is ill-advised to have a set of weak_ptrs because of hashing (if lock() fails what do you hash to?)
    //so shared_ptr it is, and some sort of reference counting should be in effect (don't notify if I'm the only
    //holding this pointer). This creates some other problems: what if this pointer is held by a different service?
    //The best solution AFAIK is having the observer hold a weak_ptr to the observable and unregister from all
    //services on destruction (perhaps for another version...?).
    std::unordered_set<std::shared_ptr<IObserver<double>>> observers;
};

#endif //OBSERVER_PATTERN_WEATHERMEASUREMENTSERVICE_H
