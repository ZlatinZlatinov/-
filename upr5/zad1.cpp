#include <iostream>

using namespace std;
int a,b,c,min;

int main(){
    cout << "Въведете 3 реални числа: " << endl; 
    cin >> a >> b >> c; 
    if (a < b && a < c) {
        cout <<"Най-малкото число е: "<<a;
    } else if (b < c && b < a) {
        cout <<"Най-малкото число е: "<< b;
    } else {
        cout <<"Най-малкото число е: "<< c;
    } 
    
    
    return 0;
}