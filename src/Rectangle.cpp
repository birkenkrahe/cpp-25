#include "Rectangle.h"

// Member function definitions
//****************************************************************
// setWidth assigns its argument to the private member width     *
//****************************************************************
void Rectangle::setWidth (double w)
{
  width = w;
}
//****************************************************************
// setLength assigns its argument to the private member length   *
//****************************************************************
void Rectangle::setLength (double l)
{
  length = l;
}
//****************************************************************
// getWidth returns the value in the private member width        *
//****************************************************************
double Rectangle::getWidth() const
{
  return width;
}
//****************************************************************
// getLength returns the value in the private member length      *
//****************************************************************
double Rectangle::getLength() const
{
  return length;
}
//****************************************************************
// getArea computes and returns the area from private data       *
//****************************************************************
double Rectangle::getArea() const
{
  return (width * length);
}
