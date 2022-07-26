#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    int m, flag = 0;
    cin >> m;
    int findArray[m];
    for (int i = 0; i < m; i++)
    {
        cin >> findArray[i];
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (findArray[i] == array[j])
            {
                flag = 1;
                cout << findArray[i] << " ";
            }
        }
    }
    if (flag == 0)
    {
        cout << " Empty set ";
    }

    return 0;
}