// simple demonstration of typecasting.
// example: (char)65 --> 'A' // c-style cast
//          char(65) --> 'A' // function-style cast
//          static_cast<char> ( 65 ) --> 'A'
// or when devision is made with two integers...could be handy to type cast..

#include <iostream>

using namespace std;

int main()
{
  for ( int x = 65; x < 85; x++ ) {
    cout<< x <<". "<< (char)x <<" ";
    // Note the use of the int version of x to
    // output a number and the use of (char) to
    // typecast the x into a character
    // which outputs the ASCII character that
    // corresponds to the current number
  }

  cout<<endl;

  int age = 50;
  int visits = 5;
  float visits_per_year = static_cast<float>(visits) / age;

  cout<<"visits per year: " << visits_per_year;

  cin.get();
}
