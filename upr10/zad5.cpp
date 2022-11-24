/******************************************************************************
Зад.5
Дадена е редицата от числа а0, а1, а2 ... аn-1, където (n>1). Да се
намери сумата на положителните числа и произведението на
отрицателните.

*******************************************************************************/
#include <iostream>
using namespace std;

int main(){
    //char lettersArray[6] = {'d', 'k', 'x', 'T', '9', 'j'}; 
    int numsArray[50];  
    int length; 
    int sum = 0; 
    int mult = 1;
    
    cout << "Въведете дължина на масива: " << endl ; 
    cin >> length;
    
    for(int x = 0; x<length; x++){
        int num;
        cout << "Въведете цяло число: " << endl; 
        cin >> num;
        numsArray[x] = num;
    } 
    
    cout << endl; 
    
    for(int y = 0; y < length; y++){
         
        if(numsArray[y] < 0){
            mult *= numsArray[y];
        } else{
            sum += numsArray[y];
        }
    } 
    
    cout << "Сбор на положителните числа: " << sum <<  endl; 
    cout << "Произведение на отрицателните числа: " << mult;
    
    return 0;
}