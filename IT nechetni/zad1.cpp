/******************************************************************************
Нечетни
Зад.1:
Да се напише програма, чрез която се въвежда от клавиатурата цяло число n, където n > 0. 
Да се напише програма, която намира сумата: S = 1 + 1/2 + 1/3 + ... + 1/n;
*******************************************************************************/
#include <iostream>
using namespace std;

int main(){
    double sum = 1.00; 
    int n; 
    
    do{
        cout << "Въведете цяло число n, по-голямо от 0" << endl; 
        cin >> n;
    } while(n < 0); 
    
    for(int x = 2; x <= n; x++){
        sum += 1.00 / x;
    } 
    
    cout << "Сума: " << sum; 

    return 0;
}

 
Нечетни:
https://pastebin.com/jUuTAhbQ 1;
https://pastebin.com/kg9FSnRv 2; 
https://pastebin.com/c89UQTAz 3; 
https://pastebin.com/w27brb7w 4; 

Четни: 
https://pastebin.com/QqKH5gyh 1;
https://pastebin.com/j0n7Pzpw 2;
https://pastebin.com/eM81s9us 3; 
https://pastebin.com/XRrWfWUe 4;