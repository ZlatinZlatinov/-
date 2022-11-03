#include <iostream>
//zad8
using namespace std;
int previousNum = 0;
int currentNum = 1;

int n; 

int currentSum = 0;  
int counter = 1;


int main(){ 
    cout << "Enter a number: " << endl;
    cin >> n; 
    
    while(counter <= n){ 
        /*cout << currentSum << endl;*/ /*Това извежда числата на всеки следващ ред*/
        
        currentSum = previousNum + currentNum;  
        previousNum = currentNum; 
        currentNum = currentSum;
        counter++;
    } 
    
    cout  << "Fibonacci: " << previousNum;
    
    return 0;
}
