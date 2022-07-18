#include <bits/stdc++.h>
using namespace std;

class Parent {
protected:
    int balance;
public:
    string name;
    int age;
    Parent(string pName, int pAge, int pBalance)
    {
        name = pName;
        age = pAge;
        balance = pBalance;
    }
    int dadeAmount(){//!function overloading 
        cout << balance;
    }  
    int dadeAmount(int add){//!function overloading 
        cout <<"Added amount "<< balance+add;
    }
};

int main() {
    Parent myDade("md taijul",65,1500);
    myDade.dadeAmount(55);
    return 0;
}
