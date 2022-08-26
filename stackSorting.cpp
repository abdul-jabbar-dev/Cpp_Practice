#include <bits/stdc++.h>
#include "stack/myStack.h"
using namespace std;
void getSort(myStack<int> &st)
{
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j <5; j++)
        {
            if (st.at(i) > st.at(j))
            {
                st.swap(st.at(i), st.at(j));
                break;
            }
        }
    }
}
int main()
{

    myStack<int> st;
    st.push(1);
    st.push(4);
    st.push(6);
    st.push(2);
    st.push(3);
    st.push(5);
    st.push(7);
    getSort(st);
    for (int i = 0; i < st.size(); i++)
    {
        cout << st.at(i) << " ";
    }
}