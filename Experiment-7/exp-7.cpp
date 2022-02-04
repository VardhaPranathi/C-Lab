#include <iostream>
using namespace std;

class Student{
	public:
		int roll_no;
		string name,grade;
		Student(int roll_no,string name,string grade){
		this -> roll_no = roll_no;
		this -> name = name;
		this -> grade = grade;
		}
		void display(){
			cout<<"Roll No.:"<<roll_no<<endl;
			cout<<"Name:"<<name<<endl;
			cout<<"Grade:"<<grade<<endl;
		}
};
int main(void){
    Student s1 = Student(1,"Pranathi","A");
	Student s2 = Student(2,"Jyothi","D");
	s1.display();
	s2.display();
	return 0;
}