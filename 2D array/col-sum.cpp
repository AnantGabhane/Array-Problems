#include <iostream>
using namespace std;

void colsum(int arr[4][2],int rows,int col){
    int sum=0;
   for(int i=0; i<col; i++){
        for(int j = 0; j < rows; j++){
            sum = sum + arr[i][j];
        }
        cout << sum<< " ";
    }   
    cout << endl;
}

int main(){
    int arr[4][2] = {{1,2},{2,3},{3,4},{4,5}};
    colsum(arr, 4,2);
    return 0;
}