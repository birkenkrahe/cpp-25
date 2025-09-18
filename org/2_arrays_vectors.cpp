// Two types of initialization

// 1) Traditional C-style copy syntax: =value[2]={100,200};=

// 2) C++ direct list initialization: =value[2] {100,200};=

// The C++ version is safer: It avoids "narrow conversions", which means
// e.g. to implicitly turn a ~float~ value into a ~int~ value.


// [[file:2_arrays_vectors.org::*Two types of initialization][Two types of initialization:1]]
#include <iostream>






int main() {
double arr[2] = {100,200};
int arr2[2] {100.,200.};
return 0;
}
// Two types of initialization:1 ends here
