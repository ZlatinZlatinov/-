#include <iostream> 
using namespace std;
 
void sortArr(int arr[], int n){
    for (int i = 0; i < n - 1; i++){
        for (int j = 0; j < n - i - 1; j++){
            if (arr[j] > arr[j + 1]){
                swap(arr[j], arr[j + 1]);
            } 
        } 
    } 
}
 
int main (){
    int n = 3, count = 0;
    
    int mat[n][n] = {
        {200, 300, 100}, 
        {400, 500, 110}, 
        {157, 154, 299}
    }; 
    
    // Declare a new array to fill with the numbers of the matrix
    int arr[n*n];
    
    // fill the array
    for(int i = 0; i < n; i ++){
        for(int k = 0; k < n; k++){
           arr[count] = mat[i][k];
           
           count++;
        }
    } 
    
    // sort the array
    sortArr(arr, n*n);
    count = 0;
    
    // replace the numbers in the matrix with the sorted numbers
    for(int x = 0; x < n; x++){
        for(int y = 0; y < n; y++){
           mat[x][y] = arr[count]; 
           count++;
        }
    }
 
    // print the array
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << mat[i][j] << ' ';
        }
        cout << endl;
    }
    
    return 0;
}
