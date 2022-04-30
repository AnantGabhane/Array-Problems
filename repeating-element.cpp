#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void repeat(int arr[], int n){
    int min = -1;
    set<int> myset;

    for(int i = n-1; i >= 0; i--){
        if(myset.find(arr[i]) != myset.end()){
            min = i;
        }else{
            myset.insert(arr[i]);
        }
    }
    if(min !=-1){
        cout << "The first repeating element is : " << arr[min];
    }else
        cout << "Their is no repeating element";  
}

int main(){
    int arr[] = {10, 5, 3, 4, 3, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    repeat(arr, n);
    return 0;
}
/*
The first repeating element is : 5
*/