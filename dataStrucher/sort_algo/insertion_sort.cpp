
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
        int j = i - 1;
        while (j >= 0 && key < arry[j])
        {
            arry[j + 1] = arry[j];
            j--;
        }
        arry[j + 1] = key;
    }




    for (int i = 0; i < n; i++)
    {
        cout << arry[i] << " ";
    }

    return 0;
}
