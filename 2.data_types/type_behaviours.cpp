#include<iostream>

int main()
{

int x = 25 / 10;

std::cout << x<<"\n";

float xx = 10;
float y = 25 / xx;

std::cout << y << "\n";

char c = 'a';
int d = 'd' - c;

std::cout << d << "\n";

const char* s = "abcd";
char cc = *(s+2);

std::cout << cc << "\n";

int l = 1 | 0;
int o = 0 | 1;
int t = 1|3;
int e = 3|1;
int r = 0|e;

std::cout << l << "\n";
std::cout << o << "\n";
std::cout << t << "\n";
std::cout << e << "\n";
std::cout << r << "\n";



}