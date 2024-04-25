#include <iostream>
using namespace std;
   
int main(){
    double m,n;
    double areaOfSquare, areaOfTriangle, areaOfRectangle;
    
    while(true){
        cout <<"Please select the area of the shape to calculate:\n";
        cout <<"1. Square\n";
        cout <<"2. Triangle\n";
        cout <<"3. Rectangle\n";
        cout <<"4. Quit the program\n"; 
     
        int selection;
        cout <<"Enter selection: ";
        cin >> selection;
        if(selection == 1){
           cout << "Enter the side length of the Square:";
           cin >> n;
           areaOfSquare = n*n;
           cout << "The area of square is: " << areaOfSquare <<endl;

    }  else if(selection == 2){
           cout << "Enter the base length of the triangle: ";
           cin >> n;
           cout << "Enter the height of the triangle: ";
           cin >> m;
           areaOfTriangle = (m*n)/2;
           cout << "The area of the Triangle is: " <<areaOfTriangle <<endl;
     } else if(selection == 3){
           cout << "Enter the length of the rectangle: ";
           cin >> n;
           cout << "Enter the width of the rectangle: ";
           cin >> m;
           areaOfRectangle = n*m;
           cout << "The area of the rectangle is: " << areaOfRectangle << endl;
     } else if(selection == 4){
           cout << "Quiting the program. " <<endl;
           break;

     } else{
           cout << "invalid input! Please try again. " << endl;
     }
     return 0;


  } 
  
   

  
















   }
  
