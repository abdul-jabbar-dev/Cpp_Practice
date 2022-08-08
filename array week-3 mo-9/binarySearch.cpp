#include <bits/stdc++.h>
using namespace std;
void findValue(int arr[], int value, int lb, int hb)
{
    int mid = (int)(lb + hb) / 2;
    if (arr[mid] == value)
    {
        cout << "value: " << value << " and index: " << mid << endl;
    }
    else if (arr[mid] > value)
    {
        findValue(arr, value, lb, mid - 1);
    }
    else
    {
        findValue(arr, value, mid + 1, hb);
    }
}

int main()
{

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int value;
    cin >> value;
    int lb = 0, hb = n - 1;
    findValue(arr, value, lb, hb);
}