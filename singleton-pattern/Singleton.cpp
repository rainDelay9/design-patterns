//
// Created by Matan on 7/20/20.
//

#include "Singleton.h"

Singleton& Singleton::instance(int value) {
    static Singleton instance{value};
    return instance;
}