#include <iostream>
#include "calc.hpp"
#include "wifi.hpp"
#include "defaultconfig.h"

int main() {
    #ifdef DEBUGINFO
        std::cout << DEBUGINFO << std::endl;
    #endif
    std::cout << "Software version is " << APP1_VERSION_MAJOR << "." << APP1_VERSION_MINOR << std::endl;
    wifi_init();
    // std::cout << X << std::endl;
    // std:: cout << sum(1, 2) << std::endl;
    // std:: cout << "Product type is " << PRODUCT_TYPE << std::endl;
    // std::cout << "Product year is " << PRODUCT_YEAR << std::endl;
    // std::cout << STD_CXX << std::endl;
    return 0;
}