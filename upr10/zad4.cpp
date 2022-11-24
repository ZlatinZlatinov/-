/******************************************************************************
Зад.4
Дадена е редицата от числа а0, а1, а2 ... аn-1, където (n>1). Да се
намери колко пъти въведено от потребителя число се среща в
редицата.

*******************************************************************************/
#include <iostream>
using namespace std;

int main(){
    //char lettersArray[6] = {'d', 'k', 'x', 'T', '9', 'j'}; 
    int numsArray[50];  
    int length; 
    int conter = 0;
    int num;
    
    cout << "Въведете дължина на масива: " << endl ; 
    cin >> length;
    
    for(int x = 0; x<length; x++){
        int num;
        cout << "Въведете цяло число: " << endl; 
        cin >> num;
        numsArray[x] = num;
    } 
    
    cout << "Въведете цяло число и разберете колко пъти се съдържа в масива" << endl; 
    cin >> num;
    
    for(int y = 0; y < length; y++){
         
        if(num == numsArray[y]){
            conter++;
        }
    } 
    
    cout << "Числото " << num << " се съдържа " << conter << " пъти в масива."; 
    
    return 0;
}