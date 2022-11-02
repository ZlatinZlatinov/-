#include <iostream>
//zad4
using namespace std;
int y;

int main(){
    cin >> y; 
    
    if((y % 4 == 0 && y % 100 == 0) || (y % 4 != 0 && y % 100 != 0 && y % 400 != 0)){
        cout << "Не е високосна" << endl;
    } else {
        cout << "Високосна";
    }
    
    
    return 0;
}