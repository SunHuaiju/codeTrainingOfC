## ch02
### Expressions with unsigned types

When running this code:
```cpp
int i = -42;
unsigned j = i;
std::cout << j << std::endl;
```
We will get the following output:
```cpp
4294967254
```
The reason for this result is that the compiler converts the integer -42 to an unsigned number. The conversion rule directly assigns an unsigned number to an negative value, and the result is equal to this nagetive number plus the modulus of the unsigned number. In fact, this conversion rule can be extended to all unsigned types conversion of the compiler.

### Scope
```cpp
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
	return 0;
}
```
When a program has the same variable from the inner scope and the outer scope, compiler will firstly access the variable from inner scope. If you want to explicitly access global variable, Please use **'::'** before variable to make it.

### Reference and pointer
Reference means an object is called an another name.
```cpp
#include<iostream>
int main()
{
	using namespace std;
	int ival = 1024;
	int &reival = ival;
	int i = reival;
	cout << &reival << endl;
	cout << &ival << endl;
	cout << &i << endl;
	getchar();
	getchar();
	return 0;
}
```
Reference is not an object, insteadly, it just is another name for existing object such as ```ival``` and ```reival```. **And definite the reference of reference if not allowed.**
