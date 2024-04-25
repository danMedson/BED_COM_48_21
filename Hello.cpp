#include <iostream>
#include <cstdlib>
#include <ctime>

int main(){
    std::srand(static_cast<unsigned>(std::time(nullptr)));
    int daysUntilExpiration = std::rand()%11;
    std::cout << daysUntilExpiration << std::endl;
    if(daysUntilExpiration > 5){
        std::cout << "Your subscription will expire soon, please renew " <<std::endl;
      
    }else if(daysUntilExpiration > 1 && daysUntilExpiration <= 5){
        std::cout << "Your subscription will expire in the value of daysUntilExpiration, renew now to save 10%" <<std::endl;
 
    }
     else if(daysUntilExpiration == 1){
        std::cout << "Your subscription expires within a day, renew now to save 20%" <<std::endl;
    }
     else if(daysUntilExpiration > 10){
        std::cout << "You have an active subscription " <<std::endl; 
   }
     else{
        std::cout << "Your subscription has Expired " <<std::endl; 
   }
  
   return 0; 
           


}


