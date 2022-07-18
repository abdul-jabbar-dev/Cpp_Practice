#include<bits/stdc++.h>

using namespace std;

int main(){

int num[5] ={1,5,3,4,2};
for(int i = 0;i<5;i++){

    for(int j = 0;j<i;j++){

    if(num[i]<num[j]){
        int temp=num[i];
        num[i]=num[j];
        num[j]=temp;
    }
   }
}
for(int u = 0;u<5;u++){
    cout<<num[u]<<" ";
}

return 0;
}
