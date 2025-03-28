#include <iostream>
#include "complex_number.hpp"

int main(void){
    //parte di complessi, testata nel file "rational.cpp"
    using com = complex<float>;
    com x1(1, 1);
    com x2= com(); 
    std::cout << x1 << " + " << x2 << " = " << x1+x2 << std::endl;
    com x3 = x1+x2;
    std::cout << "The cognugate of " << x3 << " is " << x3.cogn() << "; ";
    
    return 0;
}