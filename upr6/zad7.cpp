#include <iostream>
//zad7
using namespace std;
int m;
int n; 
int sum = 1;
int main(){ 
    cout << "Enter two numbers: " << endl;
    cin >> m >> n; 
    for(int x = m; x <= n; x++){
        sum *= x;
    }
    cout <<"The result is: " << sum;
    
    return 0;
}