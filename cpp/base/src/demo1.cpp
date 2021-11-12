#include <iostream>
#include <string.h>

using namespace std;

void chgStr(char *ip, char *op);

int main() {
	char str[]="Nankai 1918-2004,x+y-5*6/37=? OK!";
	char str1[50]; 
	chgStr(str, str1);
	cout<<str<<endl;
	cout<<str1<<endl;
	return 0;
	
}

void chgStr(char *ip, char *op) {
	char *st1, *st2;
	for(st1=ip, st2=op; *st1!='\0'; st1++, st2++) {
		if(*st1 >= 65 && *st1 <=90) {
			*st2 = *st1 + 32;
		}
		else if(*st1 >= 97 && *st1 <= 122) {
			*st2 = *st1 - 32;
		}
		else if(*st1 >= 48 && *st1 <= 57) {
			*st2 = 9-(*st1-48)+48;
		}
		else {
			*st2 = *st1;
		}
	}
	*st2 = '\0';
}
