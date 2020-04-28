# use switch if there are more than 3 options,
# otherwise you can use if / elif / else

def chosen_option(opt):
   options = {
      1: "you have won a car",
      2: "you have won a coffee mug",
      3: "you have to pay a fee"
   }
   return options.get(opt, "non-existing option chosen. you lose!")


 
x =int(input ("choose option 1, 2, or 3:  "))   # note y by default is of type
                                                # string and must be converted
                                                # to int to match the dict key.
resp = chosen_option(x)
print(resp)