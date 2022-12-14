/******************************************************************************
Четни
Зад.1:
Да се напише програма, чрез която се въвеждат три реални числа. 
Да се намери и изведе на екрана средноквадратична им стойност според формулата:
*******************************************************************************/
#include <iostream> 
#include <cmath>
using namespace std;

int main(){ 
    cout << "Въведете 3 реални числа:" << endl;
    double a,b,c; 
    cin >> a;  
    cin >> b; 
    cin >> c; 
    
    double sqAvg = sqrt((a*a + b*b + c*c)/3); 
    
    cout << "Средноквадратично: " << sqAvg;
    
    return 0;
} 

Четни: 
https://pastebin.com/QqKH5gyh 1;
https://pastebin.com/j0n7Pzpw 2;
https://pastebin.com/eM81s9us 3; 
https://pastebin.com/XRrWfWUe 4;
