#include<iostream>
using namespace std;

void swap(long n){
	int d=1;
	if(n%10==n){
		cout<<1;
	}
	else{
		while(n>9){
			
			n=n/10;
			d=d+1;
		}
		cout<<d;	
	}	
}
int main(){
	long n;
	cin>>n;
	swap(n);	
}

