// File I/O
// reading from files (ifstream) // handles file input
// writing to files (ofstream) // handles file output

// helpful extensions:
/* ios::app   -- Append to the file
   ios::ate   -- Set the current position to the end
   ios::trunc -- Delete everything in the file

   example:
   ofstream c_file ( "test.txt", ios::app ); // appends content to test.txt
*/


#include <fstream>
#include <iostream>

using namespace std;

int main()
{
  char str[10];

  cout<<"creating example.txt"<<endl;
  //Creates an instance of ofstream, and opens example.txt
  ofstream a_file ( "example.txt" );
  // Outputs to example.txt through a_file
  a_file<<"0 This text will now be inside of example.txt\n";
  a_file<<"1 This text will now be inside of example.txt\n";
  // Close the file stream explicitly
  a_file.close();

  cout<<"creating test.txt"<<endl;
  ofstream b_file ( "test.txt" );
  if (!b_file.is_open() )
    cout << "file could not be opened";
  else{
    cout << "file could be opened and content will be stored"<<endl;
    b_file<<"Another txt file with text";
    b_file.close();
  }

  ofstream c_file ( "example.txt", ios::app ); // adding content to example.txt
  c_file<<"This content should be added to example.txt";
  c_file.close();

  cout<<"let's read in data from a file:\n";
  //Opens for reading the file
  ifstream d_file ( "example.txt" );
  //Reads one string from the file
  d_file>> str;
  //Should output 'this'
  cout<< str <<"\n";

  cin.get();    // wait for a keypress
  // d_file is closed implicitly here
}
