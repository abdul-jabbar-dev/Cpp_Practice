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
        AjBank(string account_holder, string password){
        this->account_holder = account_holder;
        this->password = password;
        this->balance = 0;
        this->account_number = (rand()%100000)+10000;
        };
        int money_deposit(string password, int amount){
        if(this->password==password){
            this->balance+=amount;
            return 1;
        }else return -1;
        };
        int get_money(string pass){
            if(this->password == pass)  return balance;
            else return -1;
        };
        void money_withdraw(string pass,int amount){
            if(this->password == pass) {
                if(this->balance>=amount){
                     this->balance-=amount;
                }else {
                    cout<<"your balance low.... you need to less withdraw"<<endl;
                }
            }else{
                cout<<"Incorrect password"<<endl;
            }
        };
        void change_password(string current_password, string new_password){
            if(this->password == current_password) {
                this->password = new_password;
                cout<<"Your password changed"<<endl;
            }
            else {
                cout<<"Incorrect password"<<endl;
            }
        };
};
AjBank* create_account(){
    string name,pass;
    cout<<"Let's create an account\n";
    cout<<"What's Your name\n";
    cin>>name;
    cout<<"Create your password\n";
    cin>>pass;
    AjBank *myAccount = new AjBank(name,pass);
    cout<<"\n";
    cout<<"\n";
    cout<<"Congratulation "<<myAccount->account_holder<<" Your account id is "<<myAccount->account_number<<endl;
    return myAccount;

}
void deposit_money(AjBank *myAccount){

string pass;
int add_money;
cout<<"How many money you want to add: "<<endl;
cin>>add_money;

cout<<"Enter your password: "<<endl;
cin>>pass;

 int isDeposit = myAccount->money_deposit(pass,add_money);
 if(isDeposit==1){
    int newBalance = myAccount->get_money(pass);
    if(newBalance!=-1) cout<<add_money<<"$ is added ;)"<<" Now your new Balance: "<<newBalance<<endl;
    else cout<<"Try again";
 }
}
void show_balance(AjBank *myAccount){
  string pass;
  cout<<"Enter Your password: "<<endl;
  cin>>pass;
  int my_balance = myAccount->get_money(pass);
  if(my_balance!=-1) cout <<" Your current balance: "<<my_balance<<endl;
  else cout <<" Try again your password incorrect "<<endl;

}
void withdraw_balance(AjBank *myAccount){
    string pass;
    int remo_money;
    cout<<"How many money you want to withdraw: "<<endl;
    cin>>remo_money;

    cout<<"Enter your password: "<<endl;
    cin>>pass;

    myAccount->money_withdraw(pass,remo_money);

    int my_balance = myAccount->get_money(pass);
    if(my_balance!=-1) cout <<" Your current balance: "<<my_balance<<endl;
      else cout <<" Try again your password incorrect "<<endl;
    }
void welcomeBank(int *customer_behavior){
    cout<<"........................"<<endl;
    cout<<"1. Deposit money"<<endl;
    cout<<"2. My Balance"<<endl;
    cout<<"3. Withdrawal money"<<endl;
    cout<<"4. Change password"<<endl;
    cout<<"5. Exit AJ Bank"<<endl;
    cout<<"........................"<<endl;
    cin>>*customer_behavior;
}
void change_pass(AjBank *myAccount){
    string current_password, new_password;
    cout<<"Enter your current password: "<<endl;
    cin>>current_password;

    cout<<"Enter your new password: "<<endl;
    cin>>new_password;
    myAccount->change_password(current_password,new_password);
}

int main(){
cout<<"Welcome to AJ Bank"<<endl;
 AjBank *myAccount = create_account();
while(1){
    int customer_behavior=NULL;
    welcomeBank(&customer_behavior);

    if(customer_behavior==1) {
        deposit_money(myAccount);

    }else if( customer_behavior==2){
        show_balance(myAccount);

    }else if( customer_behavior==3){
        withdraw_balance(myAccount);

    }else if( customer_behavior==4){
        change_pass(myAccount);

    }else if( customer_behavior==5){
        cout<<"Thank for visit AJ Bank"<<endl;
        return 0;
    }
}
return 0;
}
