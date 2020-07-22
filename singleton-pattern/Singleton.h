//
// Created by Matan on 7/20/20.
//

#ifndef SINGLETON_PATTERN_SINGLETON_H
#define SINGLETON_PATTERN_SINGLETON_H

#include <string>

class Singleton {
public:

    static Singleton& instance();

    int get() const{
        return value;
    }

    int value;

    Singleton(const Singleton&) = delete;
    Singleton& operator=(const Singleton&) = delete;
    Singleton(Singleton&&) = delete;
    Singleton& operator=(Singleton&&) = delete;

private:
    Singleton(int _value): value(_value){}

};

#endif //SINGLETON_PATTERN_SINGLETON_H
