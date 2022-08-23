
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
int tem;
for(int i = 0;i<row;i++){

    for(int j = 0;j<col;j++){

      if(i==j){

        if(i==0&&j==0) tem=arr[i][j];
        else{
            if (tem!=arr[i][j]) {
                cout<<" no scaler matrix";
                return 0;
            }
        }
      }

    }
}
if(tem==1){
    cout<<"Identity matrix ";
}else
    cout<<"scaler matrix ";
return 0;
}
