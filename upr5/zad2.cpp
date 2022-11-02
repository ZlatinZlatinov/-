#include <iostream>
//zad2
using namespace std;
int x, y;

int main(){
    cout << "Въведете стойност на х: " << endl; 
    cin >> x; 
    
    if(x <= 8){
        y = x;
    } else if(x > 8 && x <= 24){
        y = 2;
    } else {
        y = x-1;
    }
    
    cout << "Стойността на у е: " << y;
    return 0;
}