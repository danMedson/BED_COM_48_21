#include <iostream>

int main(){
    int number;
    bool validInput = false;
    while(!validInput){
        std::cout << "Enter a number: ";
        std::cin >> number;
        
        if(number >= 5 && number <= 10){
            std::cout << "Welcome!" <<std::endl;
            validInput = true;
      
     }else{
          std::cout << "You are wrong. Please enter another value." <<std::endl;
       }
      
    } 
     return 0;


}