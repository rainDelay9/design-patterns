//
// Created by Matan on 7/16/20.
//

#include <iostream>
#include "WeatherMeasurementService.h"

void WeatherMeasurementService::add(std::shared_ptr<IObserver<double>> observer) {
    std::cout << "ADDING WEATHER STATION" << std::endl;
    this->observers.insert(observer);
    observer->update(this->temperature);
}
void WeatherMeasurementService::remove(std::shared_ptr<IObserver<double>> observer) {
    std::cout << "REMOVING WEATHER STATION" << std::endl;
    this->observers.erase(this->observers.find(observer));
};

void WeatherMeasurementService::addTemp(double delta){
    this->temperature += delta;
    this->notify();
}

void WeatherMeasurementService::change(double _temperature){
    this->temperature = _temperature;
    this->notify();
}

void WeatherMeasurementService::notify() {
    for(auto observer : this->observers){
        observer->update(this->temperature);
    }
};
