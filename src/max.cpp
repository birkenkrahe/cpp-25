#include <iostream>

using namespace std;




int main() {
const int SIZE {8};
int values[SIZE] {0};

// get array values
for (int &val : values) {
  cin >> val;
  cout << val << " ";
 }
int max = values[0];

for (int i=1;i<SIZE;i++)
  if (values[i] > max) max = values[i];

cout << "\nMax value = " << max;
return 0;
}
