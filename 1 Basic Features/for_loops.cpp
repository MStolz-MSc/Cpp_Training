// for_loops.cpp

// created by MStolz-MSc

#include <iostream>

using namespace std;

int main(){
    cout << "let's do a for loop" << endl;
// The loop goes while x < 10, and x increases by one every loop
    for ( int i = 0; i < 10; i++ ) {
        cout << i << endl;
    }

    cout << "let's do a while-loop" << endl;

    int x = 0;
    while ( x < 10 ) {      // condition is checked at the beginning of the loop
        cout << x << endl;
        x++;                // add 1 to x every loop
    }

    cout << "lets do a do-while-loop" << endl;

    x = 15;
    do {
        cout << x << endl;
        x++;
    }while(x<25); // condition is checked at the end of the loop

    //cin.get();

    return 0;
}
