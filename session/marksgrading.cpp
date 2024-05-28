#include<iostream>
using namespace std;

int main() {
	int score;
	cin>>score;
	if (score>=75 && score<=100){
		cout << "Distinction";
	}
	else if (score>=50 && score<=100){
		cout << "Average";
	} 
	else if (score>=35 && score<=50){
		cout<<"Below Average";
	}else{
		cout<<"error"<<endl;
	}
}
