from decimal import Decimal
import sys

# int 
print("int: ",int(411.65))

# float , has C-double precision 
print ("float: ",float(411.651111111111111111111111111111))
print ("sys.getsizeof(float(411.65): ",sys.getsizeof(float(411.65)))

# more precision
print("format(411.65,'.15f'): ",format(411.65,'.15f'))
print("sys.getsizeof(format(411.65,'.15f')): ",sys.getsizeof(format(411.65,'.15f')))

# complex
print("complex: ",complex(4, 5))

# octal 
print("oct(411) : ", oct(411))

# hexadecimal
print("hex(411) : ", hex(411))

# string
print("string(411.65): ", str(411.65))

# boolean
print("bool(411.65): ", bool(411.65))
print("bool(0): ", bool(0))
print("bool('hello'): ", bool("hello"))
print("bool(): ", bool())

#type
print("type(411.65): ", type(411.65))
print("type(str(411.65)): ", type(str(411.65)))

# float operations using decimal.Decimal
print("1/10 : ", 1/10)
print("Decimal(1)/10 : ", Decimal(1)/10)
print("Decimal(1) /10  == 1 /10 : ", Decimal(1) / 10 == 1/10 )  # gives False
print("411.65%10 : ", 411.65%10)
