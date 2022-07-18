#include<bits/stdc++.h>

using namespace std;

class Student{

private:
    string name;
    int roll;
    string dep;

public:
    void setter(string namee,int rolle , string depe){
        name=namee;
        roll=rolle;
        dep=depe;
    }
    void getter(){
    cout<<name<<" "<<dep<<" "<<roll;
    }
};

int main(){


Student abdul;
abdul.setter("Abdul jabbar",39,"CMT");

abdul.getter();

return 0;
}
