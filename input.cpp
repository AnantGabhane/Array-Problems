#include <iostream>
using namespace std;

int main(){
    int n,m;
    cout<< "Enter no of rows and col: ";
    cin>>n>>m;
    int arr[n][m];
    cout <<"Enter array elements: ";
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cin >> arr[i][j];
            cout << arr[i][j] << " ";
        }
        cout <<"\n";
    }

    return 0;
}


/*
Enter no of rows and col: 3 3 
Enter array elements: 1 2 3 4 5 6 7 8 9
1 2 3
4 5 6
7 8 9
*/