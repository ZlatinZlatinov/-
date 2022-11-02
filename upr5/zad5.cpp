#include <iostream>
//zad5
using namespace std;
//int y;
int y;
int main(){ 
    cout << "Enter value of y: " << endl;
    cin >> y; 
    
    switch (y){
        case 0: 
        cout << "zero";
        break; 
        case 1: 
        cout << "one";
        break; 
        case 2: 
        cout << "two";
        break; 
        case 3: 
        cout << "three";
        break; 
        case 4: 
        cout << "four";
        break; 
        case 5: 
        cout << "five";
        break; 
        case 6: 
        cout << "six";
        break; 
        case 7: 
        cout << "seven";
        break; 
        case 8: 
        cout << "eight";
        break; 
        case 9: 
        cout << "nine";
        break; 
        default: 
        cout << "Incorrect value";
    } 
    
    return 0;
}