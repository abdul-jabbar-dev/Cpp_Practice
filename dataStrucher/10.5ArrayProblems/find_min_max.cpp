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
    int minIndex = array[0], maxIndex = 0;
    for (int i = 0; i < n; i++)
    {
        if (minIndex > array[i])
        {
            minIndex = array[i];
        }
        if (maxIndex < array[i])
        {
            maxIndex = array[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (array[i] == maxIndex)
            maxIndex = i;
        if (array[i] == minIndex)
            minIndex = i;
    }
    cout << "Max: " << array[maxIndex] << ", Index: " << maxIndex << endl;
    cout << "Max: " << array[minIndex] << ", Index: " << minIndex;

    return 0;
}