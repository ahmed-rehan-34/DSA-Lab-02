#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int size;
	cout<<"Enter number of characters: ";
	cin>>size;
	char* str=new char[size];
	cout << "Enter a String: ";
	cin >> str;
	int length = strlen(str);
	for (int i = 0; i < length / 2; i++)
	{
		char temp = *(str + i);
		*(str + i) = *(str + length - i - 1);
		*(str + length - i - 1) = temp;
	}
	cout << "Reveresed Array is: " << str << endl;
	
	return 0;
		
}
