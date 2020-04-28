#include<iostream>
#include<thread>
#include<chrono>

using namespace std;

int main(){

   // single for loop
 
   for(int i=0; i < 10 ; i++)
      cout << "i : " << i << "  " << i++ << endl;
   
  
   for(int j=0 ; j < 10 ; ++j)
      cout << "j : " << j << "  " << ++j << endl; 


// double for loop

   for (int i=8 , j=14 ; i <= j ;)   
   {  
      if (i == j)
      {
         cout << "i = j" << "\n";   // if we put i!=j instead the loop will 
                                    // stop as it hits i == j and i = j will not 
                                    // be printed. 
         break; 
          
      }
          
      else if ((j == 7)  || ( i == 20 ))     // limiting the loop beyond certain boundaries
      {
         cout << "loop limit reached!";
         break;
      }
     
      else
      {
         ++i;
         --j;
         cout << "i : " << i << "    j : " << j << endl;  // count-up/down here 
         this_thread::sleep_for(chrono::seconds(1));
      }
      
   }


// break- continue

int x ;
   for ( int i = 0; i < 10 ; ++i)
   {
      std::cout << " enter a number > 0, or -1 to quit: ";
      std::cin >> x ;

      if (x == -1)
      {
         std::cout << "ending the game...";
         break;
      }
      
      else
      {
        
         if (x == 5)
            std::cout << "jackpot! " << "\n";
            continue;
      }

   } 

}