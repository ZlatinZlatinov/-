/******************************************************************************
Четни
Зад.4:
Да се напише програма, с която се въвеждат стойностите на матрица A[n][m]. Да се изведе:
- произведението на всеки ред;
- сумата на всеки стълб;
- средноаритметична стойност на всички елементи от матрицата.
*******************************************************************************/
#include <iostream> 
using namespace std;
 
int main(){ 
    int n, m ; 
    cout << "Въведете брой редове на матрицата: " << endl; 
    cin >> n; 
    cout << "Въведете брой колони на матрицата: " << endl; 
    cin >> m;
    double proizvedenie = 1.00, suma = 0.00, average;
    
    double arr[n][m]; 
    
    for(int x = 0; x < n; x++){
        for(int y = 0; y < m; y++){
            double num;
            cout << "Въведете елемент [" << x << "][" << y << "] от матрицата: " << endl; 
            cin >> num; 
            average += num;
            arr[x][y] = num;
        }
    } 
    
    for(int x = 0; x < n; x++){
        for(int y = 0; y < m; y++){
            proizvedenie *= arr[x][y];
        } 
        cout << "Произведение от ред " << x+1 << " " << proizvedenie << endl; 
        proizvedenie = 1.00; 
    } 
    
    for(int x = 0; x < m; x++){
        for(int y = 0; y < n; y++){
            suma += arr[y][x];
        } 
        cout << "Сума от колона " << x+1 << " " << suma << endl; 
        suma = 0.00;
    } 
    
    average /= (m*n); 
    
    cout << "Средна стойност на всички елементи: " << average;
    return 0;
}