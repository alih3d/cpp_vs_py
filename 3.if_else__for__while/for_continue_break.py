import time
for i in range(5):
   j = i + 1
   print(i, "  ", j)

i = 2
j = 20
for _ in range(20):

   i+=1
   j-=1
   time.sleep(1)
   print (i , j)
   if i==j:
      print ("equal")
     
   elif i == 20:
      break
   else:
      continue

  

