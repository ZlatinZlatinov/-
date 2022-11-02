#include <iostream>
//zad2 factoriel;
using namespace std;
//int y;
int num; 
int sum = 1;
int main(){ 
    cout << "Enter a number: " << endl;
    cin >> num; 
    
    for (int x = num; x > 0; x--){
        sum *= x;
    } 
    
    cout << "Резултат: " << sum;
    
    return 0;
}