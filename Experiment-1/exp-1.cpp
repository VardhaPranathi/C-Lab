#include <iostream>
using namespace std;
class Student{
    string name;
    int roll_no;
    int grade;
    public:
    void read(){
        cout<<"Enter Name:";
        cin>>name;
        cout<<"Enter roll no:";
        cin>>roll_no;
        cout<<"Enter Grade:";
        cin>>grade;
    }
    void display(){
        cout<<"Name:"<<name<<endl;
        cout<<"Roll no:"<<roll_no<<endl;
        cout<<"Grade:"<<grade<<endl;
    }
};
int main(){
   Student s[3];
    int i;
    for(i=0;i<3;i++){
        s[i].read();
    }
    for(i=0;i<3;i++){
        s[i].display();
    }
    return 0;
}