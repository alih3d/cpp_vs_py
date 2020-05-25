#include <iostream>


 // pointers and const  :  to allow access to read pointer but not to modify itthe value or the pointer or both 

int x;
int y = 10;
const int* j = &y;  // j is a pointer to address of y and cannot be changed
//  x = *j;  // x is set to *j which is y-value
  //*j = x;  // cannot be set since j is set to be constant and point to &y.

const int*  const k = &y;  // constant pointer to constant int
void print_all (const int* start, const int* stop)  // the parameters start / stop are pointers to constant ints.
  {
    const int* current = start;                    
    while(current != stop)
    {
      std::cout << *current << "\n";
      ++current;
    }
  }


// pointers and string literals

const char* cpp = "c++";  // cpp is a pointer to the address of first character of 'c++'

// null pointer: pointing to nothing
int* nptr = nullptr;

int main()
{
  

  int numbs[] = {10, 20, 30};
  print_all (numbs, numbs+3);
  std::cout << "cpp : " << cpp << std::endl;
  std::cout << "null pointer: " << nptr << std::endl;

}