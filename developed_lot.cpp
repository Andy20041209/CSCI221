#include <iostream>
#include <cassert>
#include "developed_lot.hpp"

void developed_lot_test() {
    DevelopedLot dlot1 = DevelopedLot(18.776, 108.5, 122.8, 19.1, 0, 0);
    DevelopedLot dlot2 = DevelopedLot(-90.909090, 180.364, 6.8, 4.4, 60.1, 10);

    double val1 = dlot1.value();
    double val2 = dlot2.value();
    
    std::cout << std::fixed;
    std::cout.precision(2);

    std::cout << "DevelopedLot 1 value: $" << val1 << std::endl;
    std::cout << "DevelopedLot 2 value: $" << val2 << std::endl;

    assert(val1 == 37527.68);
    assert(val2 == 60578.72);

}

int main() {
    developed_lot_test();
}