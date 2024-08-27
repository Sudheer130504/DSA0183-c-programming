#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cout<<"enter the first number:";
	cin>>a;
	cout<<"enter the second number:";
	cin>>b;
	cout<<"enter the third number:";
	cin>>c;
	if(a>=b&&a>=c)
	{
		cout<<"a is greater:"<<a<<endl;
	}
	else if(b>=a&&b>=c)
	{
		cout<<"b is greater:"<<b<<endl;
	}
	else {
		cout<<"c is greater:"<<c<<endl;
	}
	return 0;
}
