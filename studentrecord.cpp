#include <iostream>
using namespace std;

class Student{
    private:
    string name;
    int rollno;

    public:
    void accept(){
        cout<<"enter student name: "<<endl;
        cin>>name;
        cout<<"enter roll number: "<<endl;
        cin>>rollno;
    }
    void setName(string n){
        name=n;
    }
    void setRollno(int r){
        rollno=r;
    }
    string getName(){
        return name;
    }
    int getRollno(){
        return rollno;
    }
    void display();
};

int main(){
    Student s1,s2;
    s1.accept();
    s1.display();

    s2.accept();
    s2.display();
}

void Student::display(){
    cout<<"====STUDENT DETAILS===="<<endl;
    cout<<"Name : "<<getName()<<endl;
    cout<<"Roll number : "<<getRollno()<<endl;
}