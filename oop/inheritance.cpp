#include<bits/stdc++.h>

using namespace std;



class Parent{

public:
    int bId;
    string name;
    string address;
    Parent(string getName,string getAddress,int getBId){
    name=getName;
    address= getAddress;
    bId= getBId;
    }
};
class Chi:public Parent{

public:
    string name;
    int bId;

    Chi(string getName, int getBId,string paName,string paAddress,int paBId):Parent(paName,paAddress,paBId){
    name = getName;
    bId = getBId;
    }

};


int main(){

Parent dad("taijul islam","Tongi",4587);
Chi me("abdul jabbar",11,"taijul islam","Tongi",4587);
cout<<dad.name<<" "<<dad.address<<" " <<dad.bId<<endl;
cout<<me.name<<" "<<me.address<<" " <<me.bId;
return 0;
}
