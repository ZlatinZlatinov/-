#include <iostream>
//zad8
using namespace std;
int last = 0;
int first = 1;
int n; 
int sum = 1;  
int y = 0;


int main(){ 
    cout << "Enter a number: " << endl;
    cin >> n; 
    if(n == 0){
        cout >> n; 
        return 0;
    }
    while(y != n){ 
        cout << sum << endl;
        sum = last + first;  
        last = first; 
        first = sum;
        y++;
    }
    
    return 0;
}