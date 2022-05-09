#include <iostream>
using namespace std;

int minswaps(int arr[],int size ,int k){
    int ans;
    int cnt = 0;
    for(int i = 0; i < size;i++) {
        if(arr[i]<=k){
            cnt++;
        }
    }

    int bad=0;
    for(int i = 0; i < cnt;i++) {
        if(arr[i]>k){
            bad++;
        }
    }
    int i;
    for(int i = 0, j = cnt; (j<size); i++, j++) {
        if(arr[i]>k){
                bad--;
        }
        if(arr[j]>k){
            bad++;
        }
        ans = min(bad, ans);
    }
    return ans;
}

int main(){
    int crr[] = {2,1,5,6,3};
    cout << "Answer is : " << minswaps(crr, 5, 3) << endl;

    return 0;
}

// Answer is : 2 
//TC : O(n)