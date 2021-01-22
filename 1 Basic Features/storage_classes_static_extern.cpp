// Storage classes
// static
// extern

/* Example of static */

#include <iostream>

// Function declaration
void func(void);

static int count = 10; /* Global variable */

main() {
   while(count--) {
      func();
   }

   return 0;
}

// Function definition
void func( void ) {
   static int i = 5; // local static variable
   i++;
   std::cout << "i is " << i ;
   std::cout << " and count is " << count << std::endl;
}

/* Example of extern */
// usually used if variables or functions are shared with two or more files.
/*

// first file main.cpp

#include <iostream>
int count ;
extern void write_extern();

main() {
   count = 5;
   write_extern();
}

// second file support.cpp

#include <iostream>

extern int count;

void write_extern(void) {
   std::cout << "Count is " << count << std::endl;
}

*/
