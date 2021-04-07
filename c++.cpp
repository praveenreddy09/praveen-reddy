#include<iostream>
#include<cstring>
using namespace std;
int main ()
{
    char str1[10]="hello";
    char str2[10]="world";
char str3[10];
int len ;
strcpy( str3, str1);
strcat( str1, str2);
len = strlen(str1);
cout << len << endl;
return 0;
}


