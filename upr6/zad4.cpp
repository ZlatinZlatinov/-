#include <iostream>
//zad4
using namespace std;
//int y;
int x,y; 
int main(){ 
    cout << "Enter a number: " << endl;
    cin >> x;  
   
    y = (x + 2);
    for(int n = 3; n <=10; n++){
        y = y * x + n ; 
    }
    
    cout << "Резултат: " << y;
    
    return 0;
}