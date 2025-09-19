#include<iostream>
using namespace std;
void analyzePointer(int* ptr);
int main()
{
	int a = 5;
	analyzePointer(&a);

	int* b = new int(10);
	analyzePointer(b);

	delete b;

	return 0;
}
void analyzePointer(int* ptr)
{
	cout << "Address: " << ptr<<endl;
	cout << "Value: " << *ptr << endl;
}