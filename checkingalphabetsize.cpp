#include<iostream>
using namespace std;

int main() {
	char m;
	cin>>m;
	if (m>='A' && m<='Z'){
		cout<<1<<endl;
	}
	else if (m>='a' && m<='z'){
		cout<<0<<endl;
	}
	else{
		cout<<-1<<endl;
	}
	
	
}
