#include <iostream>
#include <string>
#include <sstream>


// Basic form of class is struct
// struct is a group of data elements (members) gathered under one name

/*

struct type_name{
  member_type1 member_name;
  member_type2 member_name;
  ...

};     // can add object_name before the semicolon.

*/

// structs require either type_name or object_name when defined 
// below we define a structure of the type 'fruit' with 3 members
struct fruit{
  std::string name;
  int weight;
  std::string color;
  double price;

} ;         // no object_name specified

// we specify the objects here.
fruit melon, grapes;

// we can then access each object's members using ( . )

int main () {

    
    grapes.color = "black";
    melon.price = 2.50;
    std::cout << "the price of a melon is: " << melon.price << " Euros!\n";
    std::cout << "the color of the grapes is " << grapes.color << "\n";
banana 
    // pointers & references
    fruit fruits;
    fruit *pfruit;
    pfruit = &fruits;
    
    std::cout << " enter name and  price: ";
    std::cin >> pfruit->name >> pfruit->price;   // member price of object pointed to by pfruit
    std::cout << "(*pfruit).price is: " << (*pfruit).price << "\n";
    std::cout << "pfruit->price is: " << pfruit->price << "\n";
    std::cout << "price of a " << pfruit->name << " is " << pfruit->price << " Euros \n";
    
}
