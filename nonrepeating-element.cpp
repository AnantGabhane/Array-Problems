#include <iostream>
using namespace std;

void nonrepeat(int arr[], int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i!=j && arr[i] == arr[j]){
                break;
            }
            if(i == n){
             return arr[i];
            }
        }
        return -1;
    }
}

int main() {
    int arr[] = { 9, 4, 9, 6, 7, 4 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << nonrepeat(arr, n);
    return 0;
}