/*
 Siddharth Rajan
 CSC 21200
 
 FILE: main.cpp
 This file serves as a way to test the functionality of the new overloaded operator functions of the complex class.
 */

#include <iostream>
#include "complex2.h"
using std::cout;
using std::cin;
using std::endl;
using namespace sid_raj_hw2;

int main() {
    
    complex one(3, 4);
    cout << "One:" << "\n";
    cout << one << endl;
    
    complex two(5, -2);
    cout << "Two:" << "\n";
    cout << two << endl;
    
    complex product_1_2 = one * two;
    cout << "Product of One and Two:" << "\n";
    cout << product_1_2 << endl;
    
    complex quotient_1_2 = one / two;
    cout << "Quotient of One and Two:" << "\n";
    cout << quotient_1_2 << endl;

    complex three(0, 0);
    cout << "Type two separated numbers to assign the real and imaginary parts, respectively, of a complex number:" << endl;
    cin >> three;
    cout << "You made complex number three: " << three << endl;
    
    cout << "Are One and Two equal? (1 = Yes, 0 = No)" << "\n";
    cout << (one == two) << "\n" << endl;
    
    complex four = two;
    cout << "Four:" << "\n";
    cout << four << endl;
    
    cout << "Are Two and Four equal? (1 = Yes, 0 = No)" << "\n";
    cout << (two == four) << "\n" << endl;
    
    one += two;
    cout << "One += Two is " << one << endl;
    
    three -= four;
    cout << "Three -= Four is " << three << endl;
    
    cout << "\n";
    return 0;
}
