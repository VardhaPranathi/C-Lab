#include <iostream>
using namespace std;
int main()
{
    int *ptr;
    ptr = new int;  
    cout<< "Memory allocated to ptr: " << sizeof(ptr) << endl;
    *ptr = 10;
     cout << "Value of ptr:" << *ptr << endl;
   return 0;
}