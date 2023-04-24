#include <iostream>

using namespace std; 
void printFullRow(int length){
    
    for(int x = 0; x < length; x++){
        cout << "+ ";
    } 
        
    cout << endl;
} 

void printEmptyRow(int length, int count){

    for(int x = 0; x < length; x++){
            if(x < count || x >= length - count){
                cout << "+ ";
                continue;
            } 
            cout << "  ";
        }  
    cout << endl;
}

void printSquare(int length, int count){
    
    for(int x = 0; x < length; x++){
        if(x < count || x >= length - count){
            printFullRow(length);
            continue;
        }
        
        printEmptyRow(length, count);
    }
}

int main(){
    int length = 20; // Дължина на външния квадрат, поне 10
    int count = 4; // борой квадрати, не повече от length / 2 - 1
    
    printSquare(length, count);
    return 0;
}
