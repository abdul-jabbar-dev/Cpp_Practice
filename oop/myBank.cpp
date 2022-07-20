#include<bits/stdc++.h>

using namespace std;

class AjBank {
    public:
        string account_holder;
        string account_number;
    private:
        string password;
    protected:
        int balance;
    public:
        AjBank(){


        };
};

void welcomeBank(int *customer_behavior){
    cout<<"........................"<<endl;
    cout<<"1. print some thing"<<endl;
    cout<<"2. Exit AJ Bank"<<endl;
    cout<<"........................"<<endl;
    cin>>*customer_behavior;
}

int main(){
cout<<"Wellcome to AJ Bank"<<endl;
while(1){
    int customer_behavior=NULL;
    welcomeBank(&customer_behavior);
    if(customer_behavior==2) {
        cout<<"Thank for visit AJ Bank\n";
        return 0;
    }else if(customer_behavior==1){

    }
}

return 0;
}
