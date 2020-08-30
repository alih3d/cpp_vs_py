# a class is a blueprint of objects of the same kind
# objects of same class will have same attributes ( variables)
# and same behaviours (methods).
# variables and methods are the members of the class.

class Fruit:
    # constructs the object with the given characteristics
    def __init__(self, name=None, weight=None, price=None):
        self.name = name
        self.weight = weight
        self.price = price


# creating an object of class Fruit
# alt 1)
banana = Fruit("banana", 0.1, 2)
print(banana.name)

# alt 2)  , possible by using 'None' as initial values in the __init__ def.
banana = Fruit()
banana.name = "banana"
banana.weight = 0.1
banana.price = 2
print(banana.price)


# -----------------------

class Animal:

    def __init__(self, name, arms, legs):
        self.name = name
        self.arms = arms
        self.legs = legs

    def has_legs(self):     # method definition
        print(f'a {self.name} has {self.legs} legs')


dog = Animal("dog", 0, 4)
print(dog.legs)
dog.has_legs()

# -------------------------


class Network:

    def __init__(self, layers):
        self.layers = layers

    def add_layer(self):
        self.layers = self.layers + 1

    def num_layers(self):
        print(f'Network has {self.layers} layers')


n1 = Network(2)    # initiate network with 2 layers
n1.num_layers()    # 'Network has 2 layers'
n1.add_layer()     # adds 1 layer to the current network
n1.num_layers()    # 'Network has 3 layers'
