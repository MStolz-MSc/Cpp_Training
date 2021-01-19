// Simple examples of structures

// to access the information stored in the structure
// using pointers, use the operator -> in place of the . operator

#include <iostream>

using namespace std;

// STRUCTURES
struct database {
  int id_number;
  int age;
  float salary;
};

struct vectors {
  int x; // x-coordinate
  int y; // y-coordinate
  int z; // z-coordinate
};

// MAIN
int main()
{
  // example of a structure
  cout << "example of a structure" << endl;

  database employee;  //There is now an employee variable that has modifiable
                      // variables inside it.
  employee.age = 22;
  employee.id_number = 1;
  employee.salary = 12000.21;

  cout << "age: " << employee.age << endl;

  // example of a structure, access on structure via pointers

  cout << "another example of a structure.." << endl;

  vectors vector1;              // variable vector1 of type structure named vectors
  vectors *ptr_vector1;         // pointer to a structure (points to a variable of type struct)

  vector1.x = 1;                // declaring values to variables inside the structure
  vector1.y = 2;
  vector1.z = 3;

  ptr_vector1 = &vector1;       // assign the address of number to ptr_vector1
                                // and using pointers to them
  cout<< ptr_vector1->x << endl;// The -> acts somewhat like the * when used with pointers
  cout<< ptr_vector1->y << endl;
  cout<< ptr_vector1->z << endl;
                                //  It says, get whatever is at that memory address
  cin.get();
}
