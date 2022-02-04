#include<iostream>
using namespace std;
#include<string.h>
struct Student{
    string name;
    int roll_no;
};
int main(){
    struct Student s;
    cout<<"Enter students name,roll_no:";
    cin>>s.name>>s.roll_no;
    cout<<"Name:"<<s.name<<endl;
    cout<<"Age:"<<s.roll_no<<endl;
    return 0;
}