// single line comment
/*
    multi line comment
    multi line comment
    multi line comment
*/

// #include <stdio.h>  --> C header file

#include<iostream>  // C++ header file
// iostream : input output stream
using namespace std; // using namespace std
// // using namespace std; : to use standard library functions without std:: prefix


// input 
int main() // main function
{
    // cout : console output
    // cout << "Hello World";

    int a;

    cout << "Enter a number: ";
    // take input from user we user cin;
    // cin -> console input
    // >>
    cin >> a;

    cout << "You entered: " << a ; // output the number entered by user

}