// pointers.cpp

// created by MStolz-MSc

/*
Simple script using pointers.
Pointers can make some things easier, help improve program's efficiency
and allow to handle (nearly) unlimited amounts of data.
You do not need to know how much memory you need, when writing the program.
*/

// HEADER
#include <iostream>

using namespace std;

int main()
{
  int x;            // A normal integer
  int *p;           // A pointer to an integer

  p = &x;           // Read it, "assign the address of x to p"
  cin>> x;          // Put a value in x, we could also use *p here
  cin.ignore();
  cout<< *p <<"\n"; // Note the use of the * to get the value (dereferencing)

  cin.get();
}
