#include <iostream>
//zad5
using namespace std;
//int y;
int x;
int y = 1; 
int main(){ 
    cout << "Enter a number: " << endl;
    cin >> x;  
   
    while(x != 0){
        y*=x; 
        x--;
    }
    cout << "Резултат: " << y;
    
    return 0;
}