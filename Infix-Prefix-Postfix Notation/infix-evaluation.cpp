#include <bits/stdc++.h>
#include "../myGlobalStack.h"
using namespace std;

int infixCelcutation(string values)
{
    string infixValues = values;
    GlobalStack<int> infixStack;
    for (int i = values.length() - 1; i >= 0; i--)
    {
        if (infixValues[i] >= '0' && infixValues[i] <= '9')
        {
            infixStack.push(infixValues[i] - '0');
        }
        else
        {
            int a = infixStack.pop();
            int b = infixStack.pop();
            switch (infixValues[i])
            {
            case '+':
                infixStack.push(a + b);
                break;
            case '-':
                infixStack.push(a - b);
                break;
            case '/':
                infixStack.push(a / b);
                break;
            case '*':
                infixStack.push(a * b);
                break;
            case '^':
                infixStack.push(pow(a, b));
                break;

            default:
                break;
            }
        }
    }
    return infixStack.topValue();
}

int main()
{
    string infix;
    cin >> infix;
    int celcutaion = infixCelcutation(infix);
    cout << celcutaion;
}