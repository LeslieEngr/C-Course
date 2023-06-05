#include <iostream>
#include <ctime>
#include <cstdlib>



 int main(){
   int num;
   int guess;
   int tries;
   srand(time(NULL));

   num = (rand() %100)+1;
   std::cout << " .... number guessing game....\n";
   std::cout << num  << rand() ;
    return 0;
 }