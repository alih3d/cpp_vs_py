# 1. function definition
def square(x):        
   return x*x

print(square(4))

# 2. pass
def do_nothing():
   pass                       # pass does nothing but is needed as a placeholder to ensure correct syntax

# 3. pass by value for immutable arguments e.g. integers, floats, strings, tuples
a = 1
def increase_by_1(x):
   return x+1

print( increase_by_1(a))     # pass by value creates a copy of a --> returns 2
print(a)     # a is the same as defined above and has not changed  --> return 1

# 4. pass by reference for mutable arguments e.g. lists, dictionaries, sets, and classes
l=[1,2,3,4]

def add(x, v):
   return x.append(v)

add(l,10)
print(l)                     #  returns  [1,2,3,4,10]


# 5. default parameters
def my_sum(n1, n2=5.0):
   return n1+n2

print(my_sum(3))
print(type(my_sum(3)))       # returns float  

print(my_sum(3,5))
print(type(my_sum(3,5)))     # returns int 

print(my_sum('s', 'um'))     # concatenation with addition


# 6.  named argument 
def divide(n1, n2):
   return n2 / n1

print(divide(n2=12, n1=24))   # passing arguments by keyword allows mixed order
print(divide(24,12))          # default order
#print(divide(4))             # error : n2 missing

# 7.  *args   , arbitrary arguments packed into a tuple
def func(*args):
   print(args)

func(1,23,'l', [3,6])

def summed(a, *args):
   for r in args:
      a+=r 
   return(a)

print(summed(9,3,1,5))      # returns 18

lst = [9,3,1,5]
print(summed(*lst))         # use * to unpack the list as separate positional arguments

lst2 = [2, 19]
print(summed(*lst2))

# 8. **kwargs ,    keyword parameters packed into a dictionary (key, value)
def print_kwargs(**kwargs):
   for key, value in kwargs.items():
      print ("key: ",key, ",   value: ",value)

print_kwargs(name='python', age=30)

d = dict([('k1','v1'), ('k2','v2')])
print_kwargs(**d)           # unpack keywords with **


# 9.  Function overloading is not possible in python

# 10. returning multiple values
def coordinates():
   return 23, 54, 200

x, y, z = coordinates()     # unpacking

print(coordinates())
print (z)

# 11.  type hints
def hello(name:str) -> str:  # parameter type and return type
   print ('hello,' , name)

hello('everybody')


