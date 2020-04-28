
// switch makes sense when the number of choices is larger than 2
// other wise can use if / else if

#include<iostream>

int main() {

int x ;

std::cout << " door #1\n";
std::cout << " door #2\n";
std::cout << " door #3\n";

std::cout << " choose one option : ";
std::cin >> x;

switch (x)
   {
      case 1:
         std::cout << " you have won a car";
         break;

      case 2:
         std::cout << " you have won a coffee mug";
         break;

      case 3:
         std::cout << " you have to pay a fee ";
         break;

      default:
         std::cout << " you entered a non-existing option; you lose!";
         break;


   }

}
