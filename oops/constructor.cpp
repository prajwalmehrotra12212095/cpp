#include <bits/stdc++.h>
using namespace std;

class Teacher {
private:
    double salary;

public:
    // non-parameritized Constructor
    // Teacher() {
    //     dept = "computer science";
    //     cout << "Hey, I am a constructor" << endl;
    // }

    //parameterized
Teacher(string n,string d,string s,double sal){
    name = n;
    dept = d;
    subject = s;
    salary = sal;
}

    // Public member variables
    string name;
    string dept;
    string subject;

    // Setter for salary
    // void setSalary(double s) {
    //     salary = s;
    // }

    // // Getter for salary
    // double getSalary() {
    //     return salary;
    // }
void changeDept(string newDept){
    dept = newDept;
}
void getInfo(){
    cout<<"name : "<<name<<endl;
    cout<<"subject: "<<subject<<endl; 
}

};

int main() {
   
    Teacher t1("prajw","cs","c++",20000);
    // t1.name = "Himan";
    // t1.subject = "C++";
    // t1.setSalary(20000);
    // cout << "Name: " << t1.name << endl;
    // cout << "Subject: " << t1.subject << endl;
    // cout << "Department: " << t1.dept << endl;
    // cout << "Salary: " << t1.getSalary() << endl;
t1.getInfo();
    return 0;
}
