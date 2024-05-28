#include <iostream>
using namespace std;
int main(){
int f;
cout << "enter fah value" << endl;
cin >> f;
int c = (5.0/9) * (f-32);
cout << (5.0/9) * (f-32) << endl;
cout << c << endl;
int a;
int b;
cout << "enter  a and b" << endl;
cin >> a >> b;
bool isequal = (a=b);
bool isAgreater = (a>b);
bool isAless = (a < b);
cout << "are they equal " << isequal << endl;
cout << "is A greater " << isAgreater << endl;
cout << "is A less " << isAless << endl;
bool third = isEqual && isAGreater;
bool third = isEqual ||  isAGreater;
cout << "not equal" << !isequal << endl;
}
