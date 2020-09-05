// polymorphism is implemented on functions and methods.
// it allows overriding the default function defined for example in a parent class

// example below shows how area can be defined differently for different shapes

#include<iostream>

class Square{
  public:
    int height = 10;
    int width = height;

    int area() {return height * width;}   

};


class Rectangle : public Square{};  


class Triangle : public Square{
  public:
    
    int area() {return Square::area() / 2 ;}
};


class Circle : public Square{
  public:
    int radius;
    
    double area() {return Square::area() * 3.14; }
};


int main() {

  Rectangle rect1;
  Triangle tri1;
  Circle circ1;

  Square *square1 = &rect1;     // point rect1 to a Square pointer
  square1->height = 3;          // access Square members
  square1->width = 6;

  circ1.radius = 4;

  std::cout << "rect1 area: " << rect1.area() << std::endl;
  std::cout << "tri1 area (values inherited from Square): " << tri1.area() << std::endl;
  std::cout << "circ1 area: " << circ1.area() << std::endl;
}