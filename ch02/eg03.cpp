#include<iostream>
int main()
{
	using namespace std;
	/*int *p = nullptr;
	cout << *p << endl;*/
	int ival = 1024;
	int &reival = ival;
	int i = reival;
	cout << &reival << endl;
	cout << &ival << endl; 
	cout << &i << endl;
	int *p = &ival;
	int **pi = &p;
	cout << *pi << endl;
	getchar();
	getchar();
	return 0;
}