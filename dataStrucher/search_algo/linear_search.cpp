#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    int sum = 0, array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    int find = 0, flag = 0;
    cin >> find;
    for (int i = 0; i < n; i++)
    {
        if (array[i] == find)
        {
            if (flag == 0)
            {
                cout << " Founded value in index: ";
            }
            flag = 1;
            cout << i;
        }
    }
    if (flag == 0)
    {
        cout << " not found";
    }

    return 0;
}