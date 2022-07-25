#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;
    int cen[n];
    int police = 0;
    int total_crime;
    for (int i = 0; i < n; i++)
    {
        cin >> cen[i];
        if (cen[i] > 0)
        {
            if (cen[i] <= 10)
            {
                police += cen[i];
            }
            else
            {
                police = 10;
            }
        }
        else
        {
            if (police > 0)
            {
                police--;
            }
            else
            {
                total_crime++;
            }
        }
    }
    cout << total_crime;
}