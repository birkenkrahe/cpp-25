#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;




int main() {
const int SIZE {100};
int numbers[SIZE];
int count = 0;
int num;

// fetch first number
cout << "Enter a number or -1 to quit: ";
cin >> num;
// fetch next numbers (until full or quit)
while (num != -1 && count < SIZE) {
  count ++; // increase sentinel value
  numbers[count-1] = num;
  cout << "\nEnter a number or -1 to quit: ";
  cin >> num;
 }
// display valid array items
for (int index=0; index < count; index++)
  cout << numbers[index] << " ";
return 0;
}
