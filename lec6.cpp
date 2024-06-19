#include<iostream>
using namespace std;
int main(){
	int a;
	cout<<"Enter your marks="<<endl;
	cin>>a;
	if(a<100 && a>=90){
		cout<<"Grade =O";
	}
	else if( a<90 && a>=75){
		cout<<"Grade = A+";
	}
	else if(a<75 && a>=50){
		cout<<"Grade = B";
	}
	if(a<=100){
		cout<<"Invalid no";}
	else{
		cout<<"Fail";
	}
}
