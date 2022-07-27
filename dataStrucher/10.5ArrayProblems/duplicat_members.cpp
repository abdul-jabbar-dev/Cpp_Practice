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
    int match = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (array[i] == array[j])
            {
                match++;
                array[i] = array[i + 1];
                n=n-1;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
 
    return 0;
}