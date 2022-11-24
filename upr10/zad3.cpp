/******************************************************************************
Зад.3
Дадена е редицата от числа а0, а1, а2 ... аn-1, където (n>1). Да се
намери:
- сумата на всички числа;
- средната стойност;
- най-малкото число.

*******************************************************************************/
#include <iostream>

using namespace std;

int main(){
    //char lettersArray[6] = {'d', 'k', 'x', 'T', '9', 'j'}; 
    int numsArray[50];  
    int length; 
    double sum = 0.00; 
    double average;
    int minNum = 9999999;
    
    cout << "Въведете дължина на масива: " << endl ; 
    cin >> length;
    
    for(int x = 0; x<length; x++){
        int num;
        cout << "Въведете цяло число: " << endl; 
        cin >> num;
        numsArray[x] = num;
    } 
    
    cout << '\n'; 
    
    for(int y = 0; y < length; y++){
        sum += numsArray[y]; 
        if(minNum > numsArray[y]){
            minNum = numsArray[y];
        }
    } 
    
    average = sum / length; 
    
    cout << "Сума от стойности на елементите: " << sum << endl; 
    cout << "Средно аритметично: " << average << endl; 
    cout << "Минимална стойност: " << minNum << endl;
    
    return 0;
}