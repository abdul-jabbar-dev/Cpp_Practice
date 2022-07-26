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
    int che;
    cin >> che;
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        if (array[i] == che)
        {
            if (flag == 0)
            {
                cout << "FOUND at index position: ";
            }
            cout << i << " ";
            flag = 1;
        }
    }
    if (flag == 0)
    {
        cout << " NOT FOUND ";
    }

    return 0;
}