# inheritance is used to define classes that inherit the properties
# of another already defined class
import Animals
class Dog(Animals.Animal):
    
      def speak(self):
          return 'voof'


dog = Dog(name='wolfie')

print(f'{dog.name} says {dog.speak()}')


# dove object below inherits Birds properties which in turn inherits Animal properties
dove = Animals.Birds(name='birdie')  

dove.name
dove.can_fly()

chicken = Animals.Birds(name='cheekee', flies=0)
chicken.can_fly()