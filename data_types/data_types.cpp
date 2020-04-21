#include <iostream>
#include <complex>

using namespace std;

int main(){

   int a = 65540;

// int
   cout << "int a = 65540 \n";
   cout << "short (a): " <<  short (a) << endl;
   cout << "int (a): "<< int (a) << endl;;

// float
   cout << "float (a): " << float (a)/10. << endl;

// double
   cout << "size of double (a)in bytes: " << sizeof (double (a)) << endl;

// long double - note the brackets around 'long double'
   cout << "size of long double (a)in bytes: " << sizeof  ((long double) (a)) << endl;

// size of a byte in bits
   cout << "size of a byte in bits on computer using 'CHAR_BIT': " << CHAR_BIT << endl;

// complex numbers - must include <complex> library
   cout << "complex (a): " << complex<float> (a) << endl;

// octal and hex 


// char vs string


// boolean


// type


// float operations


}