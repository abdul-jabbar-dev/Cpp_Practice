#include <bits/stdc++.h>
using namespace std;

int main()
{
    string myStr = "hello abdul jabbar";
    // string::reverse_iterator rit;

    // for (rit = myStr.rbegin(); rit != myStr.rend(); rit++)
    // {
    //     cout << *rit << " ";
    // }


    for (string::iterator it = myStr.begin();it!=myStr.end();it++)
    {
        cout<<*it<<" ";
    }
}