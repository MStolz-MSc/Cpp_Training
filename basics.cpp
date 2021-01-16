// basics.cpp

// created by MStolz-MSc

#include <iostream> // #include -> preprocessor, header
using namespace std; // header, using of a standard library

// function called "main" that returns an integer (int)
int main()
{
    int age;
    cout << "Hello World\n";                        // "<<" are insertion operators
    cout << "Pls enter your age: ";
    cin >> age;
    cin.ignore();                                   // ignores enter key at the end of the input
    cout << "Your input was: " << age << "\n";      // multiple insertion operator are used
    if (age < 100){                                 // if-statement, code inside brackets will be executed if (statement is true)
        cout << "You are pretty young!";
    }
    else if (age == 100){
        cout << "A hundred? kinda old my friend!";
    }
    else{                                           // code will be executed when if-statement is false
        cout << "Nooo way, congratulations!!";
    }

   //cin.get(); // asking for an input to have time to see the result

   return 0; //return 0 (an integer since main() is of typ int)
}



