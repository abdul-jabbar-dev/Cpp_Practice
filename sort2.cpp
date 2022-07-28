#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5] = {4,5,1,3,2};
    for (int i = 0; i < 5; i++)
    {
        for (int l = 0; l < 5-i; l++)
        {
            for (int k = 0; k <5; k++)
            {
                cout << arr[k] <<" ";
            }
            
            if(arr[i]<arr[l]){
                int temp = arr[l];
                arr[l] = arr[i];
                arr[i] = temp;
            }
            cout << endl;
        }
        
    }


    return 0;
}