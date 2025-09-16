#include <iostream>

using namespace std;




int main() {
// Change value of an array using a range-based loop
int values[] = {12};
for (int value : values)
  {
    cout << "Enter value: ";
    cin >> value;
  }
cout << '\n' << values[0] << endl;
return 0;
}
