#include <iostream>
#include <cmath>
#include <limits>
#include <iomanip>

int main()
{
    int a=-1;
    unsigned int b = 2;
    bool c= true;
    double d=3.14;
    char e= 'a';
    std::string str="ciao bello, da recup";
    std::cout << sizeof(int) << std::endl;
    std::cout << -pow(2, 31) << " "<< pow(2, 31) -1 << std::endl;
    std::cout << std::numeric_limits<int>::min()<<" "<<std::numeric_limits<int>::max()<< std::endl;

    std::string s1= str + std::to_string(d);
    std::cout << "s1= " << s1 << std::endl;

    return 0;
}
