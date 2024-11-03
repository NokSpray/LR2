// Sandal.h
#ifndef SANDAL_H
#define SANDAL_H

#include "Shoe.h"
#include <iostream>

class Sandal : public Shoe {
public:
    void wear() override {
        std::cout << "Wearing sandals." << std::endl;
    }
};

#endif
