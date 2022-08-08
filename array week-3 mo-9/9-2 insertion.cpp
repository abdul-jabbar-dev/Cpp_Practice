#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    int arr[10];
    for (int i = 0; i < n ; i++)
    {
        cin >> arr[i];
    }
    int in, v;
    cin >> in >> v;
    for (int i = n; in <= i; i--)
    {
        if (in >= i)
        {
            arr[i + 1] = arr[i];
        }
    }
    arr[in] = v;
       for (int i = 0; i < n+1 ; i++)
    {
        cout<< arr[i]<<" ";
    }
}