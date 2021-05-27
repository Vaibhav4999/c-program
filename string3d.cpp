//D]
#include <iostream>
#include <cstring>
using namespace std;
int main(){
	char name[ ]= " HELLO";
  	int len1, len2;
  	len1 = strlen(name);
  	len2 = strlen("HELLO CDAC");
  	cout << "Length of " << name << " = " << len1 << endl;
  	cout << "Length of " << "Hello CDAC" << " = " << len2 << endl;
	return 0;
}

