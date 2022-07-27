#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    int  array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    for (int i = 0; i < n; i++)
    {
        if(array[i]%3==0){
            array[i] =-1;
        }
        cout<<array[i]<<"  ";
    }

    return 0;
}