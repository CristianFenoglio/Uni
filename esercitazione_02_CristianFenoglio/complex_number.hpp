#pragma once
#include <iostream>
#include <math.h>

template<typename T> 
//requires  std::floating_point<T>
class complex {
    T a, b;

    public:
    complex()
        : a(0), b(1)
        {}

    explicit complex(T a, T b)
        : a(a), b(b)
        {}

    T getRe(void) const{ 
        return a;
    }
    T getIm(void) const{
        return b;
    }
    
    
    
    complex& operator+=(const complex& n2)
    {
        a+=n2.getRe();
        b+=n2.getIM();
        return  *this;
    }
    complex& operator+=(const T& n2)
    {
        a+=n2;
        return  *this;
    }


    
    complex operator+(const complex& n2) const
    {
        complex n1=*this;
        complex toret= complex(n1.getRe()+n2.getRe(), n1.getIm()+n2.getIm());
        return  toret;
    }
    complex operator+(const T& n2) const
    {
        complex n1=*this;
        complex toret= complex(n1.getRe()+n2, n1.getIm());
        return  toret;
    }


    complex& operator*=(const complex& n2)
    {
        a= a * n2.getRe() - b * n2.getIm();
        b= a * n2.getIm() +  b * n2.getRe();
        return  *this;
    }
    complex& operator*=(const T& n2)
    {
        a= a * n2;
        b= b * n2;
        return  *this;
    }
    
    complex operator*(const complex& n2) const
    {
        complex n1=*this;
        complex toret= complex(n1.getRe()*n2.getRe() - n1.getIm()*n2.getIm(), n1.getIm()+n2.getRe() + n1.getRe()+n2.getIm());
    return  toret;
    }
    complex operator*(const T& n2) const
    {
        complex n1=*this;
        complex toret= complex(n1.getRe()*n2, n1.getIm()+n2);
    return  toret;
    }
    
    complex<T> cogn(void){
        return complex(a, -b);
    }

};


template<typename T>
std::ostream&
operator<<(std::ostream& os, const complex<T>& c) {
    if (c.getIm()>0)
        os << c.getRe() << "+" << fabs(c.getIm()) << "i";
    else
        os << c.getRe() << "-" << fabs(c.getIm()) << "i";
    return os;
}

