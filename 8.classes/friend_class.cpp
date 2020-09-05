// Friendship and Inheritance:

// two methods to allow classes to access each others properties


#include<iostream>

class Square;

class Rectangle{
                            // No friend classes declared

    int width, height;

  public:
    int area() {return width * height;}
    void convert(Square a);
};

// friend class
class Square{
  friend class Rectangle;   // friend class Rectangle will be able to access all Square's members 
                            // but as seen above we didn't declare Square as a friend of Rectangle
                            // Also  friend of a friend class is not a friend
  private:                 
    int side;
    
  public:
    Square(int a) : side(a) {}  
};


void Rectangle::convert(Square a){
    width = a.side;
    height= a.side;
}


// main function
int main(){

  Rectangle rect;
  Square sqr(7);
  rect.convert(sqr);
  std::cout<< " rect area :" << rect.area();
}



