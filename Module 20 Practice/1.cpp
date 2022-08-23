#include <bits/stdc++.h>
using namespace std;

int main()
{
    int len, count;
    cin >> len, count;
    int arr[len];
    for (int i = 0; i < len; i++)
    {
        cin >> arr[i];
    }
    // int min = arr[0];
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len; j++)
        {
            if (arr[j] > arr[i])
            {
                swap(arr[i], arr[j]);
            }
        }
    }
    int c = count;
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (arr[j]  >! arr[i])
            {
                c++;
            }
            else
            {
                cout << arr[i];
            }
        }
    }
}