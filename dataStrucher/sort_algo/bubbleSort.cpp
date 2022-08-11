
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int num[n];
    for (int u = 0; u < n; u++)
    {
        cin >> num[u];
    }

    for (int i = 0; i < n; i++)
    {
        cout << "Iteration no. " << i << endl;
        for (int j = 0; j < n - 1; j++)
        {
            if (num[j] < num[j + 1])
                continue;
            if (num[j] > num[j + 1])
            {
                int temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
            }
            for (int u = 0; u < n; u++)
            {
                cout << num[u] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}
