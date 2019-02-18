#include<iostream>
using namespace std;

int main(){
	char c;
	cin>>c;
	if(int(c)>65 && int(c)<90){
		cout<<"Alphabet";
	}
	else if(int(c)>97 && int(c)>122){
		cout<<"Alphabet";
	}
	else{
		cout<<"No";
	}
	return 0;
}