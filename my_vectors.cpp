// Created by Papa Gucci on 1/21/24
#include <iostream>
#include <vector>

extern void print_myVector(std::vector <int> a){
    for (int i {0}; i < a.capacity(); i++){
        a.shrink_to_fit();
        std::cout << a.at(i) << std::endl;
    }
}