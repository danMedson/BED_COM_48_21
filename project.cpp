#include <iostream>
#include <cstdlib>
#include <ctime>

int main(){
    std::srand(static_cast<unsigned>(std::time(nullptr)));
    int daysUntilExpiration = std::rand()%11;
    std::cout << daysUntilExpiration << std::endl;
    
    switch(daysUntilExpiration){
       case 1:
            std::cout << "Your subscription expires within a day, renew now to save 20% " <<std::endl;
            break;
       case 2:
       case 3:
       case 4:
       case 5:
            std::cout << "Your subscription will expire in daysUntillExpiration renew now and save 10% " <<std::endl;
            break;
       case 10:
            std::cout << "You have an active subscription "<<std::endl;
            break;
       default:
            std::cout << "Your subscription has expired " <<std::endl;
            break;
    }
        
       return 0;




 }











