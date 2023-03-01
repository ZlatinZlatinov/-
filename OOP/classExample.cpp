/******************************************************************************

Basic class example in cpp
*******************************************************************************/
#include <iostream>
#include <string>

using namespace std;

class Car {
    
    string brand;
    string model; 
    int price; 
    
    public:
    // constructor definition inside the class
    Car(string x, string y, int z){ // constructor with parameters
        brand = x; 
        model = y; 
        price = z;
    }
    
    string getCarBrand(){
        return brand;
    }
}; 

/*
constructor definition outside the class
Car::Car(string x, string y, int z) {
  brand = x;
  model = y;
  year = z;
}
*/

int main(){
    // create car obj; 
    Car car1("Bmw", "X5", 10000); 
    Car car2("VW", "Golf", 5800); 
    
    cout << car2.getCarBrand(); 
    return 0;
}
