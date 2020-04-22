#include <iostream>
#include <complex>
#include <string>
#include <cassert>


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
   cout << "size of double (a)in bytes: " << sizeof(double (a)) << endl;

// long double - note the brackets around 'long double'
   cout << "size of long double (a)in bytes: " << sizeof((long double) (a)) << endl;

// size of a byte in bits
   cout << "size of a byte in bits on computer using 'CHAR_BIT': " << CHAR_BIT << endl;

// complex numbers - must include <complex> library
   cout << "complex (a): " << complex<float> (a) << endl;

// octal and hex 
   cout << "oct (65): " << oct << 65 << endl;
   cout << "hex (65): " << hex << 65 << endl;


// char vs string
   char b = 'a';
  
   const string c = "Hello";
   char d[] = "    ";

   cout << " 'a': " << b << "   '    ': " << '    ' << "  <-- multicharacter literal shows up as number" << endl;
   cout << "'Hello': " << c << "   \"    \": " << d << " using double quotes will provide spaces"<< endl;
  
// boolean
   cout << "bool (34): " << bool(34) << endl;
   cout << "bool (1), (-1): " << bool (1) << " , " << bool (-1) << endl;
   cout << "bool (0): " << bool (0) << endl;

// type of
   float e = 2.7;
   char f = 'f';
   char s[] = "hello";
   const string cs = "hello";
   cout << " use typeid( input ).name() for type info:" << endl;
   cout << typeid(e).name() << "  "  << endl;
   cout << typeid(f).name() << endl;
   cout << typeid(s).name() << endl;
   cout << typeid(cs).name() << endl;
   
// float operations
   cout << " 1 / 10  : " << 1/10 << endl;
   cout << " 1. / 10 : " << 1. / 10 << endl;
   cout << "assert(1./10 == float(1/10)) : ";  assert(1./10 == float(1/10));
  
}