#include<iostream>


// void functions - no value can be returned

void f1 () {}
void f2 () { return; }   // no return value
void f3 (int x);


// value functions
int  f4 () { return 1;}
double f5 (int x) 
{
           return 0;                // only void and main functions can skip
                                          // the  return statement.
}

// string type function
std::string concat ( std::string a , std::string b)
{
      return a + b ;
}

// inline function   ;   to suggest compile time evaluation  for speed
inline int  factorial (int n)     // only functions with 1-2 statements 
                                             // should be considered for inlining
{
   return (n < 2) ? 1 : n * factorial (n - 1);
}

// constexpr function;  alternative to inline 
constexpr int fact (int n)
{
   return (n > 1) ? n * fact (n - 1) : 1; 
}

// main is the only function that will be executed
int main() 
{

f1;
f2;
f3;
f4;
std::cout << sizeof f5 (1) << "\n";
factorial (6);
constexpr int f9 = fact (9);

}


