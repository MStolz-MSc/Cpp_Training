// switch_and_break.cpp

// created by MStolz-MSc

/*
Simple program using switch statement.
Selecting an option of a given menu.
Each option is calling a function.
*/

// HEADER
#include <iostream>

using namespace std;

// FUNCTIONS
void playgame()
{
    cout << "Play game called";
}
void loadgame()
{
    cout << "Load game called";
}
void playmultiplayer()
{
    cout << "Play multiplayer game called";
}

// MAIN
int main(){

  cout<<"1. Play game\n";
  cout<<"2. Load game\n";
  cout<<"3. Play multiplayer\n";
  cout<<"4. Exit\n";
  cout<<"Selection (Number): ";

  int input;
  cin>> input;

  switch ( input ) {
  case 1:               // --> case <constant integral expression>:
    playgame();
    break;
  case 2:
    loadgame();
    break;
  case 3:
    playmultiplayer();
    break;
  case 4:
    cout<<"Thank you for playing!\n";
    break;
  default:
    cout<<"Error, bad input, quitting\n";
    break;
  }
  cin.get();

  return 0;
}



