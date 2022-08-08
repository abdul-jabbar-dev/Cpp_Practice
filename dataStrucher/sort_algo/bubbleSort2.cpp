
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arry[n];
    for (int u = 0; u < n; u++)
    {
        cin >> arry[u];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i; j++)
        {
            if (arry[j] > arry[j + 1])
            {
                int temp = arry[j];
                arry[j] = arry[j + 1];
                arry[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arry[i] << " ";
    }

    return 0;
}
