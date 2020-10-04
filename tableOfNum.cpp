#include<iostream>
using namespace std;
int main(){
	int num,last,i;   // last=upto which table of num is calculated
	
	cout<<"enter a number \n";
	cin>>num;
	
	cout<<"enter the table last\n"; 
	cin>>last;
	
	for(i=1; i<=last; i++){
		cout<<num<<"*"<<i<<"="<<num*i<<endl;
	}
	return 0;
}
