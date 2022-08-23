#include <bits/stdc++.h>
using namespace std;

class Student
{

protected:
    int english_marks;

private:
    string password;

public:
    string name;
    char section;
    int roll;
    Student(string myName, char mySection, int myRoll, string pass)
    {
        name = myName;
        section = mySection;
        roll = myRoll;
        password = pass;
    };
    void set_marks(int getMarks)
    {
        english_marks = getMarks;
    };

    int get_maks()
    {
        return english_marks;
    };
    void update_marks(int updateMark,string chkPass){
        if(password == chkPass){
            english_marks = updateMark;
            cout << name << ", Your mark updated. and now your english mark: " << english_marks << endl;
        }else {
            cout << "ERROR----Your password incorrect" << endl;
        }
    }
};

int main()
{

    string name;
    string pass;
    char section;
    int roll;
    int marks;
    cout << "Enter Your Name" << endl;
    cin >> name;
    cout << "Enter Your Section" << endl;
    cin >> section;
    cout << "Enter Your roll" << endl;
    cin >> roll;
    cout << "Enter your Secret password"<<endl;
    cin >> pass;
    Student meStudent(name, section, roll, pass);
    cout << "Create a user successfully" << endl;
    cout << "Hello " << meStudent.name << endl;
    cout << endl;

    cout << "Enter your English marks" << endl;
    cin >> marks;
    meStudent.set_marks(marks);

    int newEnglishMarks;
    string chkPass;

    cout << "Enter your new English marks" << endl;
    cin >> newEnglishMarks;
    cout << "Enter your password for update your marks" << endl;
    cin >> chkPass;
    meStudent.update_marks(newEnglishMarks, chkPass);

    return 0;
}