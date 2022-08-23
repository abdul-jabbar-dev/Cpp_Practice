

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
        if(arr[i][j]!=arr[j][i]){{
        }
        cout<<"not symetric Matric";
            return 0;
        }

    }
}
    cout<<"symetric Matric";



return 0;
}

/*  0 1 2
...........
0 . 1 2 3
1 . 2 5 6
3 . 3 6 9


    0 1 2
..........
0 . 1 2 3          0.0==0.0
1 . 2 5 6          0.1==1.0
2 . 3 6 9          0.2==2.0
    `              2.1==1.2
*/

