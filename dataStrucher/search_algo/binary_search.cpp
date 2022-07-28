#include <bits/stdc++.h>
using namespace std;

void getSearch(int array[], int f, int lb, int hb)
{
    int mid = (lb + hb) / 2;
    if (array[mid] == f)
        cout << "index no. " << mid << endl;
    else if (array[mid] > f)
        getSearch(array, f, lb, mid - 1);
    else if (array[mid] < f)
        getSearch(array, f, mid + 1, hb);
}
int main()
{

    int n;
    cin >> n;
    int sum = 0, array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
    cout << endl;
    cout << "This array at first sort" << endl;
    cout << endl;
    int f, lb = 0, hb = n - 1;
    for (int j = 0; j < n; j++)
    {
        cout << array[j] << " ";
    }
    cin >> f;
    cout << endl;
    getSearch(array, f, lb, hb);
    return 0;
}