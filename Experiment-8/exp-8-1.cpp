#include <iostream>
using namespace std;

class Student{
	string roll_no = "20wh1a1217";
	friend class Department;
};
class Department{
	public:
	void display(Student &s){
		cout<<"Roll no:"<<s.roll_no;
	}
};
int main(){
	Student s;
	Department d;
	d.display(s);
	
	return 0;
}