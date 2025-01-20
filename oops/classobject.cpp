#include<bits/stdc++.h>
using namespace std;
class Teacher{
    //properties
    public:
     string name;
     string dept;
     string subject;
     double salary;

//methods
    //  void ChangeDepartment(string newDept){
    //     dept = newDept;
    //  } 
};
int main(){
    Teacher t1;
    t1.name = "himan";
    t1.subject = "c++";
    t1.dept="cs";
    t1.salary= 20000.0;
    cout<<t1.name<<endl;
    return 0;

    }