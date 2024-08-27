#include<iostream>
using namespace std;
int main(){
	int year;
	cout<<"enter the year:";
	cin>>year;
	if((year%4==0&&year%100!=0) || (year%400==0))
	{
		cout<<"it is a leap year:"<<year;
	}
	else{
		cout<<"not a leap year:"<<year;
	}
	return 0;
}
