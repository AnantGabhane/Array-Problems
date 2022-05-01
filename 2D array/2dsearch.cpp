#include <iostream>
using namespace std;

int main(){
    int arr[3][3] = {{5,1,3} , {4,6,8} , {10,9,11}};
    int target=13;
    for(int i=0; i<3; i++){
        for(int j = 0; j < 3; j++){
            if(arr[i][j]==target){
                cout<<"Target present"<<endl;
            }
            else{
                cout<<"Target not available";
            }
        }
        cout << endl;
    }

    return 0;
}