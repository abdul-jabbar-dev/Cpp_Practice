#include <bits/stdc++.h>
#include "myGlobalStack.h"
using namespace std;

int balancePeranthesis(string peran)
{

    GlobalStack<char> st;
    for (int i = 0; i < peran.size(); i++)
    {
        cout << peran[i] << " " << i << "     ";
        if (peran[i] == '(' || peran[i] == '{' || peran[i] == '[')
        {
            st.push(peran[i]);
        }
        else if (peran[i] == ')')
        {
            if (!st.isEmpty() && st.topValue() == '(')
            {
                st.pop();
            }
            else
            {
                return -1;
            }
        }
        else if (peran[i] == '}')
        {
            if (!st.isEmpty() && st.topValue() == '{')
            {
                st.pop();
            }
            else
            {
                return -1;
            }
        }
        else if (peran[i] == ']')
        {
            if (!st.isEmpty() && st.topValue() == '[')
            {
                st.pop();
            }
            else
            {
                return -1;
            }
        }
    }
    if (!st.isEmpty())
    {
        return -1;
    }
    return 0;
}

int main()
{

    string peran = "}{})";
    if (balancePeranthesis() == 0)
    {
        cout << "ok";
    }
    else
        cout << "not";
}