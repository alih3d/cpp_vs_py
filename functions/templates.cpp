// a variation of overloaded function is the use of Template function. 
// here we dont need to specify every special case of the overloaded function .
// we define a generic function that can accept different return and parameter types.


#include<iostream>

template <typename T1, typename T2>    // allows for different input types
T1 area ( T1 height, T2 width )
{
   return height * width;
}

template <typename T1 = std::uint32_t , typename T2  = float> // default types
T2 area_triangle ( T1 base, T2 height)
{
   return 0.5 * base * height;
}

int main ()
{

double a = area<double> (3 , 6.5) ;     

std::cout << " the area of the rectangle is :  " << a << "\n";

float b = area_triangle<int, float> ( 3, 5 );  // returns float as T2 is defined float
float c = area_triangle ( 3 , 5.f ) ;   // alternative 1  -- returns float as 5. is floating point
float d = area_triangle ( 3. , 5 );    // alternative 2  -- returns int as 5 is read as integer
float e = area_triangle<float,int>  ( 3 , 5 ) ;    // alternative 3  -- returns int as T2 is defined int

std::cout << " area of the triangle is: " << b << " \t" << c << "\t" << d << "\t" << e << "\n";

}