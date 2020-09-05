// Friendship and Inheritance:

// two methods to allow classes to access each others properties


#include<iostream>
#include<string>


class Animal{
  public:  
    std::string name;
    int legs = 4;
    bool tail = true;
    
    
};

// Single inheritance

class Cat : public Animal{    // Cat inherits the members and functions defined in Animal class
  public:
   
    std::string sound() {return "meow!";}
     
};

class Tiger : public Cat{   // Tiger inherits all members from Cat class
  public:
    Tiger() : Cat() {}     // constructing Tiger by calling base class
    std::string sound() {return "Roar!";}  // overwriting the sound() method
    std::string cat_sound() {return Cat::sound();}  // also calling sound () from Cat class
};


class Bird{
  public:
    int wings = 2;
    bool flies = false;
    std::string can_fly() {
      if (flies)
        return " and can fly";
      else
        return " but cannot fly";
      
    }
} ;

class Chicken : public Animal, public Bird{   // Multiple inheritance
  public:                   
    std::string special_talent() {return " lays eggs!";}
} ;



// main function
int main() {

  Cat cat1;
  Tiger tiger1;
  Chicken chic1;

  cat1.name = "kitty";
  tiger1.name = "tiggi";
  chic1.name = "cheekee";
  
  std::cout << "cat1 is called " << cat1.name << " and has " << cat1.legs << " legs and says " << cat1.sound() << std::endl;
  std::cout << tiger1.name << " sounds like a cat and says "<< tiger1.cat_sound() << std::endl;
  std::cout << chic1.name << " has " << chic1.wings << " wings " << chic1.can_fly() << std::endl;
  std::cout << chic1.name << "'s special talent: " << chic1.special_talent() << std::endl;
}
