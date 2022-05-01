#include <iostream>
#include <cstring>
#include <cstdio>
#include <cmath>
#include <cstdlib>
using namespace std;

int main(int arr[4][4],int row, int col){

    arr[3][3] = {1,2,3,4,5,6,7,8,9};
    int startingRow = 0;
    int startingCol = 0;
    int endingRow = row - 1;
    int endingCol = col - 1;
    int total = row * col;
    while(total--){
        for(int i= 0; startingCol < endingCol; i++){
            cout<< arr[startingRow][i] << " ";
            startingRow++;
        }
        for(int i=0; startingRow < endingRow; i++){
            cout<< arr[i][endingCol] << " ";
            endingCol--;
        }
        for(int i=0; endingCol < startingCol; i++){
            cout<< arr[endingRow][i] << " ";
            endingRow--; 
        }
        for(int i=0; endingRow< startingRow; i++){
            cout<< arr[i][startingCol] << " ";
            startingRow--;             
        }
    }    


    return 0;
}