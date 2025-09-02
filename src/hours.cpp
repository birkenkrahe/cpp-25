// Program asks for number of hours worked by six employees to be
// entered on the command-line. Values are stored in an array and
// printed separated by one space. Use for loops.
// Author: Marcus Birkenkrahe (pledged)    
// include header file
#include <iostream>
// use std namespace
using namespace std;
// main program
int main()
{
  // define array size declarator
  const int NUM_EMPLOYEES = 6;
  // define array
  int hours[NUM_EMPLOYEES];
  // ask user for keyboard input
  cout << "Enter the hours worked by "
       << NUM_EMPLOYEES << " employees: ";
  // get array input from keyboard with a loop
  for (int i=0; i<NUM_EMPLOYEES; i++) cin >> hours[i];
  // print output
  cout << "\nThe hours you entered were:";
  for (int i=0; i<NUM_EMPLOYEES; i++) cout << " " << hours[i];
  cout << endl;
  return 0;
}
