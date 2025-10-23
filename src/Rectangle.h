#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <iostream>
// Namespace declaration
using namespace std;

// Class declaration
class Rectangle {
  // private member data
private:
  double width; // rectangle widtho
  double length;  // rectangle length
  // public member functions
public:
  void setWidth (double );  // set rectangle width
  void setLength (double ); // set rectangle length
  double getWidth() const;  // get rectangle width
  double getLength() const; // get rectangle length
  double getArea() const;   // compute and get rectangle area
};
#endif
