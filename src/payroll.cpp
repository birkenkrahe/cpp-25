// Compute grossPay for NUM_EMPLOYEES employees who work a certain
// number of hours (input) at the same payRate.
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  const int NUM_EMPLOYEES = 5;// Number of employees
  int hours[NUM_EMPLOYEES]; // Array to hold hours
  double payrate; // Hourly pay rate
  double grossPay; // To hold gross pay

  // Input hours worked
  cout << "Enter hours worked by " << NUM_EMPLOYEES
       << " employees who all earn the same hourly rate.\n" << endl;
  for (int index = 0; index < NUM_EMPLOYEES; index++) {
    cout << "Employee #" << (index + 1) << ": ";
    cin >> hours[index];
    cout << hours[index] << endl;
  }

  // Input the hourly rate for all employees
  cout << "\nEnter the hourly pay rate for all the employees: ";
  cin  >> payrate;
  cout << payrate;

  // Display each employee's gross pay
  cout << "\nHere is the gross pay for each employee:\n";
  cout << fixed << showpoint << setprecision(2);
  for (int index = 0; index < NUM_EMPLOYEES; index++) {
    grossPay = hours[index] * payrate;
    cout << "Employee #" << (index + 1);
    cout << ": $" << grossPay << endl;
  }
  return 0;
}
