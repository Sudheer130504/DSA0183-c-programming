#include<iostream>
using namespace std;
inline int add(int a,int b)
{
	return(a>b);
}
int main(){
	int a,b;
cout<<"enter the number";
cin>>a;
cout<<"enter the number";
cin>>b;
cout<<"greatest is"<<add(a,b);
	return 0;
}
