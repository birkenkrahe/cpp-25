#include "Rectangle.h"

// main function
int main()
{
  Rectangle box1;
  box1.setWidth(12.7);
  box1.setLength(14.5);
  cout << "Box 1: "
       << box1.getWidth() << " x " << box1.getLength()
       << endl;
  Rectangle box2;
  box2.setWidth(8.5);
  box2.setLength(29.3);
  cout << "Box 2: "
       << box2.getWidth() << " x " << box2.getLength() 
       << endl;
  // Test getArea()
  if (box1.getArea() < box2.getArea())
    cout << "Box 1 is smaller.\n";
  else
    cout << "Box 2 is smaller.\n";		 
  return 0;
}
