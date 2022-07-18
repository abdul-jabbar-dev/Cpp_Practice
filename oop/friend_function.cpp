#include <bits/stdc++.h>
using namespace std;

class Parent
{
private:
    int taka;
public:
    Parent(int tk){
        taka = tk;
    }
    friend class AbburF;
};



class AbburF
{
public:
    void seyMoney(Parent *ptr){
        cout<<ptr->taka;
    }

};



int main()
{
Parent dad(1500);
AbburF bondhu;
bondhu.seyMoney(&dad);
}
