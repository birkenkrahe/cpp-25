#include <iostream>

using namespace std;




int main() {
// Change value of an array using a range-based loop
// Input: 5
// Output: 17
int values[] {12};
for (int &value : values)
  {
    cout << "Enter a value: ";
    std::cin >> value;
  }
cout << '\n' << values[0] << endl;
return 0;
}
