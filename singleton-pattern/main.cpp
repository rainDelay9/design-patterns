#include <iostream>
#include <thread>
#include "Singleton.h"

void f1() {
    auto singleton = Singleton::instance();
    singleton->value += 2;
}

void f2() {
    auto singleton = Singleton::instance();
    singleton->value += 3;
}

int main() {
    std::thread t1(f1);
    std::thread t2(f2);
    t1.join();
    t2.join();

    auto singleton = Singleton::instance();
    std::cout << singleton->get() << std::endl;

    return 0;
}
