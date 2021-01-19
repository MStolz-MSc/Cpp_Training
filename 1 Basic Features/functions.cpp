// functions.cpp

// created by MStolz-MSc

/*
Declaration of functions with and without return value.
Simple program that calculates the sum and product of two integer numbers.
*/

// HEADER
#include <iostream>

using namespace std;

// FUNCTIONS
// some functions with return values
int sum(int a, int b){

    return a + b;
}

int mult(int a, int b){

    return a * b;
}

void funcHello(){
    cout << "Hello" << "\n";
    cout << "Functions without a return value are from type 'void'" << endl;
    cout << endl;
} // return command is valid but redundant


// MAIN
int main(){

    funcHello();

    int number1, number2;
    cout << "But now we are going to use functions with return values, they have the type int" << endl;
    cout << "\nLet's do some calculations with two numbers" << endl;
    cout << "Please enter two numbers" << endl;
    cin >> number1 >> number2;
    // sum
    cout << "Their sum: " << sum(number1, number2) << endl;
    // multiplication
    cout << "Their multiplication: " << mult(number1,number2) << endl;

    return 0;
}
