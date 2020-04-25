
# if , elif, else
import time


x = '1000101110'

if len(x) > 10 :
   print("len(x) > 10")
elif len(x) > 20 :
   print ("len(x) is ", len(x))
else :
   print("len(x) is 10 or less")  

# while

i = 0

while i < len(x):
   print(x[i], end="")
   i+=1
   start = time.time()
   time.sleep(1)   #it will not be exactly 1 sec.
   finish = time.time()
   print ( finish - start)
