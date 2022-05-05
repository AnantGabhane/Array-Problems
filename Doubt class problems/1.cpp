#include <iostream>
using namespace std;

int minswaps(int arr[],int size ,int k){
    int cnt = 0;
    for(int i = 0; i < size;i++) {
        if(arr[i]<=k){
            cnt++;
        }
    }

    int bad=0;
    for(int i = 0; i < cnt;i++) {
        if(arr[i]>=k){
            bad++;
        }
    }
    for(int i = 0;j = cnt;j<n;i++,j++) {
        if(arr[i]>k){
                bad--;
        }
        if(arr[j]>k){
            bad++;
        }
        ans = min(bad, ans);
    }
}

int main(){

    return 0;
}