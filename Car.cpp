#include <iostream>
using namespace std;

int main(){
    string carIds[] = {"B123", "C234", "A345","15", "B177", "G3003","C235", "B179"};
    for(const string& carId : carIds){
       if(carId[0] == 'B'){
         cout << carId << endl;


      }
  }   
  return 0;




}

