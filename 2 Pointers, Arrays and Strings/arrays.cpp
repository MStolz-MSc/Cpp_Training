// Simple examples of arrays
// Passing a 2D-array to a function

#include <iostream>

using namespace std;

// FUNCTIONS
void printarray (int arg[][3], int rows, int cols){ // column size is required, when passing a 2D-array
    for (int n=0; n<rows; n++){
        for (int m=0; m<cols; m++){
            cout << arg[n][m] << " ";
        }
        cout << endl;
    }
}

// MAIN
int main(){

    int array[10][3]; // 10x3 matrix
    int i;
    int j;

    // creating the elements, printing the values
    for (i = 0; i < 10-1; i++){
        for (j = 0; j < 3; j++){
            array[i][j] = (i+1)*10 + j+1;
            //cout << array1[i][j] << " ";
            cout<<"["<<i<<"]["<<j<<"]="<< array[i][j] <<" ";
        }
        cout << endl;
    }

    cout<< endl;
    cout<< "let's define another array: \n";

    // creating 2D-array, declaring the elements
    int foo[2][3] = {{11,12,13},{21,22,23}};

    // passing 2D array to function
    printarray(foo,2,3);

    cin.get();
}
