/*
 Siddharth Rajan
 CSC 21200
 
 FILE: complex2.cpp
 CLASS IMPLEMENTED: complex (see complex2.h for documentation)
 */

#include "complex2.h"
#include <iostream>
using std::cout;
using std::endl;

namespace sid_raj_hw2 {
    
    complex::complex(double r, double i) {
        real = r;
        imaginary = i;
    }
    
    void complex::print() const {
        if (imaginary >= 0)
            cout << real << " + " << imaginary << "i" << endl;
        else if (imaginary < 0)
            cout << real << " - " << -imaginary << "i" << endl;
    }
    
    double complex::get_real() const {
        return real;
    }
    
    double complex::get_imaginary() const {
        return imaginary;
    }
    
    complex operator +(const complex& c1, const complex& c2) {
        double real_sum = c1.get_real() + c2.get_real();
        double imaginary_sum = c1.get_imaginary() + c2.get_imaginary();
        complex sum(real_sum, imaginary_sum);
        return sum;
    }
    
    complex operator -(const complex& c1, const complex& c2) {
        double real_difference = c1.get_real() - c2.get_real();
        double imaginary_difference = c1.get_imaginary() - c2.get_imaginary();
        complex difference(real_difference, imaginary_difference);
        return difference;
    }
    
    // New overloaded operator functions implemented below
    
    complex operator *(const complex& c1, const complex& c2) {
        int temp1 = c1.get_real() * c2.get_real();
        int temp2 = c1.get_real() * c2.get_imaginary();
        int temp3 = c1.get_imaginary() * c2.get_real();
        int temp4 = c1.get_imaginary() * c2.get_imaginary() * -1;
        complex product(temp1 + temp4, temp2 + temp3);
        return product;
    }
    
    complex operator /(const complex& c1, const complex& c2) {
        complex conjugate(c2.get_real(), c2.get_imaginary() * -1);
        complex numerator(c1 * conjugate);
        complex denominator(c2 * conjugate);
        complex quotient(numerator.get_real() / denominator.get_real(), numerator.get_imaginary() / denominator.get_real());
        return quotient;
    }
    
    std::ostream& operator <<(std::ostream& output, const complex& c1) {
        if (c1.get_imaginary() >= 0)
            output << c1.get_real() << " + " << c1.get_imaginary() << "i" << endl;
        else if (c1.get_imaginary() < 0)
            output << c1.get_real() << " - " << -c1.get_imaginary() << "i" << endl;
        
        return output;
    }
    
    std::istream& operator >>(std::istream& input, complex& c1) {
        
        input >> c1.real >> c1.imaginary;
        
        return input;
    }
    
    void complex::operator =(const complex& c2) {
        real = c2.real;
        imaginary = c2.imaginary;
    }
    
    bool operator ==(const complex& c1, const complex& c2) {
        return (c1.get_real() == c2.get_real()) && (c1.get_imaginary() == c2.get_imaginary());
    }
    
    void complex::operator +=(const complex& c2) {
        real += c2.real;
        imaginary += c2.imaginary;
    }
    
    void complex::operator -=(const complex& c2) {
        real -= c2.real;
        imaginary -= c2.imaginary;
    }
    
}
