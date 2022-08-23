#include<bits/stdc++.h>

using namespace std;

int main(){

int row,col;
cin>>row>>col;
int arr[row][col];
for(int i = 0;i<row;i++){
    for(int j = 0;j<col;j++){
        cin>>arr[i][j];
    }
}

if(row!=col) {
    cout<<"You need to create first square matrix";
    return 0;
};
for(int i = 0;i<row;i++){
    for(int j = 0;j<col;j++){
        if(i == j){
            cout<<arr[i][j]<<" ";
        }
    }
}


  /*  3 3

     0 1 2

  0  1 2 3
  1  4 5 6
  2  5 6 4

*/





return 0;
}
