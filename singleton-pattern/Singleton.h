//
// Created by Matan on 7/20/20.
//

#ifndef SINGLETON_PATTERN_SINGLETON_H
#define SINGLETON_PATTERN_SINGLETON_H

#include <string>

class Singleton {
public:

    static Singleton* instance(int value = 0);

    int get() const{
        return value;
    }

    int value;


private:
    Singleton(int _value): value(_value){}

    static Singleton* singleton;
};

#endif //SINGLETON_PATTERN_SINGLETON_H
