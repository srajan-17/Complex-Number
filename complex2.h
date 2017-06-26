/*
 Siddharth Rajan
 CSC 21200
 
 Assignment 2
 
 FILE: complex2.h
 CLASS PROVIDED: complex (a class for a complex number with a real and imaginary part, now with new overloaded operator functions)
 
 CONSTRUCTOR for the complex class:
    complex(double r, double i)
        Postcondition: The complex number has real part = r and imaginary part = i.
 
 ASSIGNMENT OPERATOR for the complex class:
 // New function below
    void operator =(const complex& c2)
        Postcondition: The real and imaginary parts of a complex number c1 are set to be equal to the corrresponding values in c2.
 
 CONSTANT MEMBER FUNCTIONS for the complex class:
    void print() const
        Postcondition: The real and imaginary parts of the complex number are printed.
    double get_real() const
        Postcondition: The value returned is the real part of the complex number.
    double get_imaginary() const
        Postcondition: The value returned is the imaginary part of the complex number.
 
 MODIFICATION MEMBER FUNCTIONS for the complex class:
 // New functions below
    void operator +=(const complex& c2)
        Postcondition: The real and imaginary parts of a complex number c1 are incremented by the corresponding values in c2.
    void operator -=(const complex& c2)
        Postcondition: The real and imaginary parts of a complex number c1 are decremented by the corresponding values in c2.
 
 NONMEMBER FUNCTIONS for the complex class:
    complex operator +(const complex& c1, const complex& c2)
        Postcondition: The sum of c1 and c2 is returned.
    complex operator -(const complex& c1, const complex& c2)
        Postcondition: The difference of c1 and c2 is returned.
 // New functions below
    complex operator *(const complex& c1, const complex& c2)
        Postcondition: The product of c1 and c2 is returned.
    complex operator /(const complex& c1, const complex& c2)
        Postcondition: The quotient of c1 and c2 is returned.
    ostream& operator <<(ostream& output, const complex& c1)
        Postcondition: The real and imaginary parts of c1 are written to output, and output is the ostream that is returned.
    istream& operator >>(istream& input, complex& c1)
        Postcondition: The real and imaginary parts of c1 are read from input, and input is the istream that is returned.
    bool operator ==(const complex& c1, const complex& c2)
        Postcondition: The return value is true if c1 and c2 are identical.
 
 
 I should not have a default constructor for the class because for this class, the user must supply a value for the real and imaginary parts of the complex number. There are no default values that would make sense for the two variables. Also, having the user supply the values brings greater functionality to the nonmember functions where two complex numbers are added and subtracted. In addition, I should not have an automatic default constructor (which is made by the compiler) for the class because if I do, each variable of the complex class that I declare will have a greater chance of being uninitialized. As a result, they may contain random "garbage" values.
 */


#ifndef complex2_h
#define complex2_h

#include <iostream>

namespace sid_raj_hw2 {
    
    class complex {
    public:
        // CONSTRUCTOR
        complex(double r, double i);
        // ASSIGNMENT OPERATOR - New
        void operator =(const complex& c2);
        // CONSTANT MEMBER FUNCTIONS
        void print() const;
        double get_real() const;
        double get_imaginary() const;
        // MODIFICATION MEMBER FUNCTIONS - New
        void operator +=(const complex& c2);
        void operator -=(const complex& c2);
        // FRIEND FUNCTION - New
        friend std::istream& operator >>(std::istream& input, complex& c1);
    private:
        double real;
        double imaginary;
    };
    
    // NONMEMBER FUNCTIONS for the complex class
    complex operator +(const complex& c1, const complex& c2);
    complex operator -(const complex& c1, const complex& c2);
    // New functions below
    complex operator *(const complex& c1, const complex& c2);
    complex operator /(const complex& c1, const complex& c2);
    std::ostream& operator <<(std::ostream& output, const complex& c1);
    bool operator ==(const complex& c1, const complex& c2);
}

#endif /* complex2_h */
