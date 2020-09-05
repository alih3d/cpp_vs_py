
#include<iostream>



// A class defines the type of an object.
// It can have data members as well as functions.

// classes also have access specifiers:
//   public:  member is accessible from everywhere 
//   protected:  member is accessible from other members of same class and derived classes 
//   private:   member is accessible only within other members of same class


// class definition:

class Rectangle{
  int width=5, height=5;

  public:
    Rectangle();           // TO USE DEFAULT VALUES
    Rectangle(int , int ); 
    int area() {return width * height;}

};

// class constructor : to initialize the object
Rectangle::Rectangle(int a, int b){
  width = a;
  height = b;
}

Rectangle::Rectangle() {}       // constructor overloading for use of default inputs


// main function
int main(){

  Rectangle recta;         // note no parentheses
  Rectangle rectb(3,4);
  std::cout << " area of recta : " << recta.area();
  std::cout << " area of rectb : " << rectb.area();

}
