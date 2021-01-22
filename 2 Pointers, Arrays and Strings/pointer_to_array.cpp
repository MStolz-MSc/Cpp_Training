// pointer to array
// default pointing direction is to the address of the first array element
// no ampersand operator (&) needed
// if it should point to another position in the array --> &array[index]

#include <iostream>

using namespace std;
const int MAX = 3;

int main () {
   int  var[MAX] = {10, 100, 200};
   int  *ptr;

   // let us have address of the last element in pointer.
   // ampersand & as usual.
   ptr = &var[MAX-1];
   
   for (int i = MAX; i > 0; i--) {
      cout << "Address of var[" << i << "] = ";
      cout << ptr << endl;

      cout << "Value of var[" << i << "] = ";
      cout << *ptr << endl;

      // point to the previous location
      ptr--;
   }
   
   return 0;
}