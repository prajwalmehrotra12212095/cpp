#include<iostream>
using namespace std;


int main(){
  int S,E,W;
  cin>>S>>E>>W;
  int c;
  while (S<=E){
	  c=5.0/9*(S-32);
	  cout << S << "\t" << c <<endl;
	  S=S+W;
  }
}

