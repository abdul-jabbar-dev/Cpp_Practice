#include<bits/stdc++.h>

using namespace std;


class Students {
public:
    string name;
    int student_id;
    int semister_gpa[5];
    Students(string name, int student_id){
    this->name=name;
    this->student_id=student_id;
    };
    void add_gpa(int *gpas){
        for(int i = 0 ; i < 5 ; i++ ){
            this->semister_gpa[i]=gpas[i];
        }
    };

};


Students* create_students(int i){
    string name;
    int student_id;
    cout<<"enter student "<<i<<" Name: "<<endl;
    cin>>name;
    cout<<"enter student ID: "<<endl;
    cin>>student_id;
    Students* student = new Students(name,student_id);
    int gpas[5];
    for(int k = 0; k<5;k++){
    cout<<"Subject"<<k+1<<" GPA: "<<endl;
    cin>>gpas[k];
    };
    student->add_gpa(gpas);
    return student;
};

int main(){

int n;
cout<<"How many students you want: "<<endl;
cin>>n;
Students* student[n];
for(int i=0;i<n;i++){
    student[i]=create_students(i+1);
}
for(int i=0;i<n;i++){
    cout<<"student "<<i+1<<" "<<student[i]->name<<" And student id is "<<student[
i]->student_id<<endl;
    for(int e = 0; e<5;e++){
        cout<<student[i]->semister_gpa[e]<<" ";
    }
    cout<<endl;
}
return 0;
}
