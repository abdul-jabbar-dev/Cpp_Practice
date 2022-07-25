#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5] = {4,5,1,3,2};
    for (int i = 0; i < 5; i++)
    {
        for (int l = 0; l < i; l++)
        {
            if(arr[i]<arr[l]){
                int temp = arr[l];
                arr[l] = arr[i];
                arr[i] = temp;
            }
        }
        
    }
    for (int l = 0; l < 5; l++)
    {
        cout<<arr[l]<<" ";
    }

    return 0;
}