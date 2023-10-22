f//today i will learn about simple calculator which add and subtract
#include<iostream>
using namespace std;
float num1;
float num2;
float result;
char op;
int main(){
	cout<<"Enter Num : ";
	cin>> num1;
	cout<<"\nEnter Num: ";
	cin>>num2;
	cout<<"Enter Op"<<endl;
	cin>>op;
	switch(op){
		case '+':
			result = num1 + num2;
			cout<<"Your result is "<<result;
			break;
		case '-':
			result = num1 - num2;
			cout<<"YOur Result is :"<<result;
			break;
		default:
			cout<<"Invalid entry";
			break;
		
	}
	return 0;
}
