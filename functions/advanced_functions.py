# scopes , local vs global variables

x = 5             # global scope

def my_add(y=20): # y has local scope : not visible outside function
   z=10           # local scope : not visible outside function   
   return y+z
print(x)
#print(y)          # will return NameError that y is not defined
#print(z)          # same as y


# function variables ; in Python a variable can hold anything: value, function or object
add100=my_add(100)
print(add100)

p=print
p(type(add100))

# Nested functions

def outer(s):
   c = ','
   def inner():
      r='there'
      print(s,c,r)  # inner functions have read-access to outer function variables and attributes
   
   inner()

outer('hello')


# Lambda function: anonymous (unnamed) functions

import math
f = lambda x : math.sin(x)                      # for example f(x) = sin(x)

print(f(90))

g = lambda x , y : math.cos(x) * math.tan(y)    # g(x,y) = cos(x) * tan(y)

print( g(90,45) )

run_splitter = lambda x,d : x.split(d)

s='asia > south asia > India'
print(run_splitter(s,'>'))


#map (used to transform input data)
lst=[11, 12, 13]
for item in map(lambda x : x*11 , lst):
   print(item, end=' ,')

print(list(map(lambda x: x*11,lst))) #alternative version

#filter (used to filter input data on criteria)
print(list(filter(lambda x: x % 2 == 0, lst)))  # returns 12 as the only number in the list divisible by 2

#reduce ( to 'reduce' the list of numbers to a single value)
from functools import reduce
cumsum = reduce(lambda x,y: x+y, lst)  # adds up the numbers in the list and returns 36
print(cumsum)

# decorators are used to transform functions or
# to preprocess function arguments before they are passed to main function
def limits(func):

   def _wrapper(x):
      if x < 0:
         x = 0
      elif x > 10:
         x = 10
      return func(x)
   return _wrapper

@limits
def speed(t):

   return 10 * t

print(speed(20))
print(speed(-2))