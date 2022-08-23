
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
cout<<endl;
cout<<endl;
for(int i = 0;i<col;i++){

    for(int j = 0;j<row;j++){

      cout<<arr[j][i]<<" ";

    }
    cout<<endl;
}



return 0;
}

/*    0 1 2
...........
0 . 1 2 3
1 . 4 5 6
3 . 7 8 9

    0 1 2
...........
0 . 1 4 7
1 . 2 5 6
3 . 3 6 9
*/



