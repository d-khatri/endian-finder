//written by dheeraj khatri
//this one for second commit
#include <iostream>
#include <cstdio>
#include <vector>
#include <cstdio>
using namespace std;

int main()
{

   cout<<"changed from git server\n";
   int integer=0x303132;
   char* p;
   p=(char*)&integer;
   if(*p=='0')cout<<"big endian \n"<<endl;
   else if(*p=='2') cout<<"small endian\n";
   else cout<<"error\n";
    return 0;
}
