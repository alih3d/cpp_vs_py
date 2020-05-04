#include <iostream>

// scope & storage :  global vs local declarations

int x ;                 // global scope :   valid anywhere in the code that follows
int y = 100 ;     // global variables also have static storage  i.e are parmanent through the entire code
int z = 10 ;       // static storage variables , if not initialized, will get value zero.


// namespace is used to define a narrower scope of what is elsewhere defined
// this will help avoid name collisions

namespace  my     
{                          
   int y = 22 ;        // local  scope declaration:  only valid within this block.  called with my::y
   int z = 36 ;       // local variables have automatic storage, i.e. are temporary  and within the block 
                           // automatic storage variables if not initialized can get a random value

   int add(int a , int b )    // functions can also be declared with namespace
       { return a + b ;}    
}

int main () 
{

   int y = 6 ;    // non-compliant redeclaration of y as it hides the value of the globally defined y above

      {
         int z  ;                 // z is now re-declared as part of this inner block  ( i.e. locally)
         z = 66 ; 
         y = 19 ;             // NOTE : y is not re-declared locally; just has a new value

         std::cout << "\nz is : " << z << "\n" ;
         std::cout << "y is locally set to be :  " << y << "\n" ;
         std::cout << "inner scope :  my::add ( z , y) : " <<  my::add ( z , y ) << "\n\n";
      }

   std::cout << "we are now up one scope and  z , y  have the values: " << z << " , " << y << "\n" ;
   std::cout << "x is at global scope and automatically initialized at 0 ( static storage): " << x << "\n" ;
   std::cout << "my::y was declared locally and retains the given value 22:  " << my::y << "\n" ;
   std::cout << "our scope ;  my::add (z , y) : " << my::add( z, y) << "\n\n" ;

   // using 

   using namespace std ;
   using my::z ;                 // z is now referring to the declared value in 'my' block 
   cout << "using my::z gives z : " << z << "\n\n" ;   
   {
      using namespace my;    
      cout <<  z << "\n";
   }

}


