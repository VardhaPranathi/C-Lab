/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

class A1{
	public:
	int a1;
	A1(){
	a1 = 10;
	}
	void display1(){
		cout<<"a1:"<<a1<<endl;
	}
};
class A2:public A1{
	public:
	int a2;
	A2(){
	a2 = 20;
	}
	void display2(){
		cout<<"a2:"<<a2<<endl;
	}
};
class A3:public A2{
	public:
	int a3;
	A3(){
	a3=30;
	}
	void display3(){
		cout<<"a3:"<<a3<<endl;
	}
};
int main(){
	A3 obj;
	obj.display1();
	obj.display2();
	obj.display3();
	
	return 0;
}
