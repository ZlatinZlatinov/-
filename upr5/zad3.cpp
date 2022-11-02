#include <iostream>
//zad3
using namespace std;
double x, y;

int main(){
    cout << "Въведете координати (х,у) на точка: " << endl; 
    cin >> x >> y; 
    //a
    /*if(x < -1 || x > 1){
        cout << "Точката  е извън фигурата" << endl; 
        return 0;
    }  
    
    if(y < -1 || y > 1){
        cout << "Точка  е извън фигурата"; 
        return 0;
    } 
    
    cout << "Точката е във фигурата" << endl; 
    */
    
    //b 
    
    if(x < 1 || x > 2){
        cout << "Точката  е извън фигурата" << endl; 
        return 0;
    } 
    
    if(y < 1 || y > 2){
        cout << "Точката  е извън фигурата" << endl; 
        return 0;
    } 
    
    cout << "Точката е във фигурата" << endl;
    return 0;
}