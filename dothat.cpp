#include "dothat.h"

extern "C" {
void printThis(int printerThing) {
    std::cout << "Printing --> " << printerThing << std::cout;
}
}
