// sometimes it is neccessary to have multiple versions of a function because it is essentially
// performing the same operation but on different input parameters and parameter types.
// this feature is called function-overloading.


#include<iostream>

int area ( int height );
float area ( float radius);
int area ( int height, int width);
float area ( float base , int ht );

int main ()
{

float radius = 2.5f;   
int height ;
int width  ;
float base    ;
float ht  ;

std::cout << "area of a squarewith side 3: " << area (3) << "\n";
std::cout << "area of a circle: " << area (radius) << "\n";
std::cout << "area of a 3 x 4 rectangle:  " << area (3, 4) << "\n";
std::cout << "area of a triangle with base 2.5  and height 15: " << area (2.5f , 15 ) << "\n";
                                                                  // compiler treats all floating point numbers as double
                                                                  // unless we specify them as float by prividng a 'f' suffix.
                                                                  // without the 'f' we get 'ambiguous overloading' error.
}

int area ( int a)  { return a*a ; }
float area ( float radius ) { return 3.141 * radius * radius ; }
int  area ( int height, int width ) { return height * width ; }
float area ( float  base, int ht) {return 0.5 * base * ht ; }


