#include <iostream>  // I/O data stream
#include <iomanip>   // I/O formatting
#include <vector>    // vector methods
int main()
{
  std::vector<std::string> names;
  std::vector<double> prices;
  std::vector<int> quantities;
  std::cout << "How many products do you want to enter? ";
  int numProducts; // number of products
  std::cin >> numProducts; puts(""); // get number, add newline
  
  // for each product: enter name, price, quantity
  for (int cnt=0; cnt < numProducts; cnt++)
    {
      std::string tempName;  // temporary name 
      std::cout << "Enter name of product #" << (cnt + 1) << ": ";
      std::cin >> tempName; // get temp product name
      names.push_back(tempName); // append it to `names` vector (+ newline)
      puts("");
  
      std::string tempPrice;  // temporary price
      std::cout << "Enter price of product #" << (cnt + 1) << ": ";
      std::cin >> tempPrice; // get temp product price
      prices.push_back(tempPrice); // append it to `names` vector (+ newline)
      puts("");
  
      std::string tempQuantity;  // temporary quantity
      std::cout << "Enter quantity of product #" << (cnt + 1) << ": ";
      std::cin >> tempQuantity; // get temp product quantity
      quantities.push_back(tempQuantity); // append it to `names` vector (+ newline)
      puts("");
    }
  std::cout << "\nInventory:\n;
  for (int cnt=0; cnt < numProducts; cnt++) // for each product
    {
      std::cout << std::fixed << std::showpoint << std::setprecision(2);
      std::cout << names[cnt] << " " // product name
                << prices[cnt] << " " // product price
                << quantities[cnt] << " " // product quantity
                << quantities[cnt] * prices[cnt] // total product value
                << std::endl;
    }
  // remove last product
  std::cout << "\nRemoving last product...\n";
  names.pop_back();
  prices.pop_back();
  quantities.pop_back();
  
  // print number of products remaining
  std::cout << "Number of products now: "
  << names.size() << std::endl;
  
  // clear product data vectors (check if empty)
  if (!names.empty() || !prices.empty() || !quantities.empty())
    {
      std::cout << "\nClearing all vectors...\n";
      names.clear();
      prices.clear();
      quantities.clear();
    }
  
  // check if inventory is empty
  std::cout << std::boolalpha << "Inventory empty? "
  << names.empty() && prices.empty() && quantities.empty();
  return 0;
}
