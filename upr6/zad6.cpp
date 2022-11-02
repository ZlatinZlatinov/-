#include <iostream>
//zad6
using namespace std;
int x;
int numCount = 0; 
double sum;
int main(){ 
    cout << "Enter a number: " << endl;
    do{  
    cin >> x; 
    numCount++;
    sum += x;
    }
    while(x != 0);  
    numCount -= 1;
    cout <<"The average value is: " << sum / numCount;
    
    return 0;
}