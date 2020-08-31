class Shape:

    def __init__(self, color='red'):
      self.__color = color       # double underscore will make the variable private 
                                 # this will refer to the class where defined and not
                                 # get mixed with similar named variables is other classes
    def get_color(self):
      return self.__color


class Rectangle(Shape):       # inherits Shape's properties 

    def __init__(self, length=None, height=None):
      super().__init__()
      self.__length = length
      self.__height = height

    def area(self):
      return self.__length * self.__height


class Circle(Shape):

    def __init__(self, radius=None):
      super().__init__()
      self.__radius = radius

    def area(self):
      return 3.14 * self.__radius**2


class Square(Rectangle):  # inherits Rectangle's properties and in turn Shape's
    def __init__(self, side=None):
      super().__init__()
      self.__side = side
                                # Polymorphism: redefinition of a function
    def area(self):             # even though Square inherits Rectangles properties,
       return self.__side ** 2  # we can overwrite the area definition


r1 = Rectangle(10,20)
print('Rectangle area and color: ', r1.area(),"  ", r1.get_color())

c1 = Circle(5)
print('Circle are and color: ', c1.area(), "  ", c1.get_color())

s1 = Square(30)
print('Square area and color: ', s1.area(),"  ", s1.get_color())

