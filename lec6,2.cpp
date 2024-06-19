#include<iostream>
using namespace std;
int main(){
	int a;
	cout<<"Enter your no="<<endl;
	cin>>a;
	switch(a){
		case 1:
			cout<<"You entered 1";
		break;
		case 2:
			cout<<"You entered 2";
		break;
		case 3:
			cout<<"You entered 3";
		break;
		default:
			cout<<"You entered no greatter than 3 or less than 1";
	}
	
	
}
