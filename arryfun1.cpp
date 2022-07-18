#include <iostream>
#include <stdio.h>
using namespace std;
int main(){

int n;
cin>>n;
for (int i = 1;i<=n;i++){
    for(int j = 1;j<=n;j++){
        printf("%c",j+64);
    }
    cout<<endl;
}
}
