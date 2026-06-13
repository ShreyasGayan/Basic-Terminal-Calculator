#include <iostream>
#include <cmath>

namespace inp {
    double x;
    double y;
}
namespace op {
    char x;
}

int main() {
    std::cout << "*****************CALCULATOR*****************\n";
    std::cout << "Enter first number: ";
    std::cin >> inp::x;
    
    std::cout << "Enter Operator: ";
    std::cin >> op::x;
    
    std::cout << "Enter second number: ";
    std::cin >> inp::y;


    switch (op::x)
    {
        case '+':
        std::cout << inp::x + inp ::y;
        break;
        
        case '-' :
        std::cout << inp::x - inp ::y;
        break;
        
        case '*' :
        std::cout << inp::x * inp ::y;
        break;
        
        case '/' :
        std::cout << inp::x / inp ::y;
        break;
        
        case '%' :
        std::cout << (int)inp::x % (int)inp ::y;
        break;
        
        default: std::cout << "Not a valid operation";
    }
        
    return 0;
}

