#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        for (int j = i - 1; j <= 0; j--)
        {
            if (arr[j] >= key)
            {
                arr[j + 1] = arr[j];
                j--;
            }
            arr[j] = key;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}