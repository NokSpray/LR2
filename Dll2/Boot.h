// Boot.h
#ifndef BOOT_H
#define BOOT_H

#include "Shoe.h"
#include <iostream>

class Boot : public Shoe {
public:
    void wear() override {
        std::cout << "Wearing boots." << std::endl;
    }
};

#endif
