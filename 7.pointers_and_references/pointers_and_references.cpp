#include <iostream>

int main() {
   
	int  p = 123;
	int  q = 136;
	int* pointer = &p; // the '*' is used to define a pointer.  A pointer is initialized with the address it points to. 
	int* q_pointer = &q;  // q_pointer is a variable that stores the address of another variable 
                        // * is called deference operator

	std::cout << "pointer :  "<< pointer  << "    *pointer:  "<< *(pointer) <<\
  "     &p:  " << &p << "  q_pointer: " << q_pointer << "  &q:  "<< &q << std::endl;

	int i = 6;

	int* ptr = &i;   // the pointer 'ptr' is referring to the address (&) of 'i'

	std::cout << i << "  " << *ptr << "   " << &ptr << "   " << *ptr + 2 << std::endl;

                          //    &  is the address operator  , gives the memory address where value is saved
                          //    *  is the dereference operator , gives back the value 


  int firstvalue = 5;
  int secondvalue = 15;
  int* p1;
  int* p2;

  p1 = &firstvalue;  // p1 = address of firstvalue
  p2 = &secondvalue; // p2 = address of secondvalue

  *p1 = 10;          // value pointed to by p1 = 10
  *p2 = *p1;         // value pointed to by p2 = value pointed to by p1  --> p1 = 10, p2 = 10
  p1 = p2;           // p1 is set to point to address of secondvalue which is p2
  *p1 = 20;          // value pointed to by p1 = 20
  
  std::cout << "firstvalue is " << firstvalue << '\n';   // gives 10 since firstvalue was set to 10
  std::cout << "secondvalue is " << secondvalue << '\n'; // gives 20 since p1 was set to the address of secondvalue and set to 20

 
 // pointer arithmetics
  int w = 100;
  int* z = &w;
  short t;
  long g;
  short* s = &t;
  long* l = &g; 

  std::cout << "z: " << z << " ++z: " << ++z << '\n';   // 1 byte diff
  std::cout << "s: " << s << " ++s: " << ++s << '\n';  // 2 bytes diff
  std::cout << "l: " << l << " ++l: " << ++l << '\n';  // 4 bytes diff

  std::cout << "*z++: " << *z++ <<'\n';   // same as *(z++) increment pointer , dereference the unincremented address
  std::cout << "*++z: " << *++z <<'\n';   // same as *(++z), dereference incremented address
  std::cout << "++*z: " << ++*z <<'\n';   // same as ++(*z) , first dereference pointer then increment the value it points to
  std::cout << "(*z)++: " << (*z)++ <<'\n';   // first dereference the pointer , then increment the value

 int numbers[5];

    int* p3;         // p3 is a pointer
    p3  = numbers;   // p3 now points to first element of numbers-array
    *p3 = 10;        // setting first value to 10     
    p3++;            // second element of numbers
    *p3 = 20;
    p3 = &numbers[2];  // p3 now points to the address of 3rd element
    *p3 = 30;
    p3 = numbers +3 ; // p3 points to 4th element of numbers
    *p3 = 40;
    *(p3+1) = 50;     // point to 5th element
    for(int n = 0; n < 5 ; n++)
    std::cout << numbers[n] << std::endl;

}