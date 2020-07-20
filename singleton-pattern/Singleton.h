//
// Created by Matan on 7/20/20.
//

#ifndef SINGLETON_PATTERN_SINGLETON_H
#define SINGLETON_PATTERN_SINGLETON_H

#include <string>

class Singleton
{
public:

    static Singleton* instance(int value);

    int get() const{
        return value;
    }

    int value;


protected:
    Singleton(int _value): value(_value){}

    static Singleton* singleton;

};

Singleton* Singleton::singleton= nullptr;;

Singleton* Singleton::instance(int value = 0) {
    if(singleton==nullptr){
        singleton = new Singleton(value);
    }
    return singleton;
}

#endif //SINGLETON_PATTERN_SINGLETON_H
