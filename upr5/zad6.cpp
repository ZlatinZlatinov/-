#include <iostream>
//zad6
using namespace std;
//int y;
int y;
int main(){ 
    cout << "Enter value of y: " << endl;
    cin >> y; 
    
    switch (y){
        case 10: 
        cout << "October";
        break; 
        case 1: 
        cout << "January";
        break; 
        case 2: 
        cout << "February";
        break; 
        case 3: 
        cout << "March";
        break; 
        case 4: 
        cout << "April";
        break; 
        case 5: 
        cout << "May";
        break; 
        case 6: 
        cout << "June";
        break; 
        case 7: 
        cout << "July";
        break; 
        case 8: 
        cout << "August";
        break; 
        case 9: 
        cout << "September";
        break;  
        case 11: 
        cout << "November"; 
        break; 
        case 12: 
        cout << "December";
        default: 
        cout << "Incorrect month";
    } 
    
    return 0;
}