#include <iostream>
using namespace std;
class A{
	int a = 5;
	public:
	virtual void display(){
		cout<<a;
	}
};
class B:public A{
	int b = 10;
	public:
	void display(){
		cout<<"Value of b is:"<<b;
	}
};
int main(){
	A *a;
	B b;
	a = &b;
	a -> display();
	return 0;
}