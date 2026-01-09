#include "Harl.hpp"

int main()
{
    Harl harl;

    std::cout << "{  DEBUG  }\n";
    harl.complain("DEBUG");
    std::cout << "{  INFO  }\n";
    harl.complain("INFO");
    std::cout << "{  WARNING  }\n";
    harl.complain("WARNING");
    std::cout << "{  ERROR  }\n";
    harl.complain("ERROR");
    std::cout << "{  UNEXPECTED INPUT  }\n";
    harl.complain("oiwjdoji");
    
    return 0;
}