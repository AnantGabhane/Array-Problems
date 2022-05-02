#include <iostream>
using namespace std;

int main(){
    int arr[3][3] = { {3,1,3} , {4,6,8} , {10,5,11}};
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
          if(arr[i][j]==5){
              cout <<"Found "<< endl;
              cout <<i<<" "<< j << endl;
          }  
        }
    }
    return 0;
}
