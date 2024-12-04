#include<iostream>
#include<string>
using namespace std;

class Teacher{
     //properties/attribute
     public:
     string name;
     string dept;
     string subject;
     double salary;


     //methods/ member function
     void changeDept(string newDept){
        dept = newDept;
     }

};
int main(){
    
    Teacher t1;
    t1.name = "shubham";
    t1.subject = "C++";
    t1.dept = "Computer Science";
    t1.salary = 25000;

    cout << t1.name << endl;
    return 0;
}