#include <iostream>
using namespace std;

// Function prototype
int linearSearch(const int [], int, int);

// Main program
int main() {
  const int SIZE = 5;
  int tests[SIZE] = { 87, 75, 98, 100, 82};
  int results;

  // Search the array for 100.
  results = linearSearch(tests, SIZE, 100);

  // If linearSearch returned -1, then 100 was not found.
  if (results == -1)
    cout << "You did not earn 100 points on any test.";
  else {
    // Otherwise results contains the subscript of the first 100 in
    // the array.
    cout << "You earned 100 points on test " << (results + 1);
    
  return 0;
}
  
// Function definition
//*******************************************************************
// linearSearch takes a constant integer array of length size and a *
// search value as arguments & returns its array position, or -1    *
//*******************************************************************    
int linearSearch(const int arr[], int size, int value) {
  bool found = false;
  int position = -1;
  int index = 0;
  while (index < size && !found) {
    if (arr[index] == value) { // search value found
      found = true;
      position = index;
    }
    index++;
  }
  return position;
}
//int main() {
//  return 0;
//}
