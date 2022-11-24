/******************************************************************************
Зад.2
Да се напише програма, която въвежда стойностите на масив с n
елемента. Да се изведе масива в низходящ ред.

*******************************************************************************/
#include <iostream>

using namespace std;

int main(){
    //char lettersArray[6] = {'d', 'k', 'x', 'T', '9', 'j'}; 
    int numsArray[50];  
    int length;
    cout << "Въведете дължина на масива: " << endl ; 
    cin >> length;
    
    
    for(int x = 0; x<length; x++){
        int num;
        cout << "Въведете цяло число: " << endl; 
        cin >> num;
        numsArray[x] = num;
    } 
    
    cout << '\n'; 
    for(int y = length - 1; y >= 0; y--){
        cout << numsArray[y] << " ";
    }
    
    return 0;
}