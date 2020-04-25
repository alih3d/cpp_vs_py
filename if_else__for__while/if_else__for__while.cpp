#include<iostream>
#include<string>
#include<chrono>
#include<thread>

const std::string x = "1001010011";

int main(){

// if , else if , else
   if (x.size() > 10 ) 
      std::cout << "x.size() > 10" << std::endl;

   else if (x.size() > 20)
      std::cout << "x.size()  is " << x.size() << std::endl;

   else
      std::cout << "x.size() is 10 or less" << std::endl;

// for 
   int j = 0;
   for ( j ; j < 10 ; ++j){
      std::cout << j  << " ";
   }
 

// while 
int i = 0;

while (i < x.size()){
   std::cout << x[i];
   ++i;
   std::chrono::system_clock::time_point  start = std::chrono::system_clock::now();
   
   std::this_thread::sleep_for(std::chrono::seconds(1));  // not good for safety critical coding 
   
   std::chrono::system_clock::time_point finish = std::chrono::system_clock::now();
   std::chrono::duration<double, std::milli>  diff = finish-start; 
   std::cout << "_elapsed time: " << diff.count() << "    ";
   }
  
}