class Animal:

      def __init__(self, name=None, arms=None, legs=None):
        self.name = name
        self.arms = arms
        self.legs = legs


class Birds(Animal):   # Birds inherits the Animal class properties
      
      def __init__(self, name=None, arms=None, legs=None, wings=None, flies=1):
        super().__init__(name, arms, legs)
        self.wings = wings
        self.flies = flies


      def can_fly(self):
        if self.flies == 1:
          print(f'{self.name} can fly')
        else:
          print(f'{self.name} cannot fly')

