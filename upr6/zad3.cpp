#include <iostream>
//zad3
using namespace std;
//int y;
int num; 
double sum = 1.00;
int main(){ 
    cout << "Enter a number: " << endl;
    cin >> num; 
    
    for (double x = 2.00; x <= num; x++){
        sum += 1.00 / x;
    } 
    
    cout << "Резултат: " << sum;
    
    return 0;
}