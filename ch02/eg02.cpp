#include<iostream>
int reused = 42;
int main()
{
	using namespace std;
	int unique = 0;		//unique has an block scope
						//output#1: Access global variable "reused"
	cout << reused << "  " << unique << endl;
	int reused = 0;		//block variable "reused"
						//output#2: Access block variable "reused"
	cout << reused << "  " << unique << endl;
	//output#3: Explicitly access global variable "reused"
	cout << ::reused << "  " << unique << endl;
	getchar();
	getchar();
	return 0;
}