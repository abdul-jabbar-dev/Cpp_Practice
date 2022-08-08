
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

    for (int i = 1; i < n; i++)
    {
     
        int key = arry[i];
        for (int j = i - 1; j <= 0; j--)
        {
            if (arry[j] <= key)
            {
                arry[j + 1] = arry[j];
                arry[j] = key;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arry[i] << " ";
    }

    return 0;
}
