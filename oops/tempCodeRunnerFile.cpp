#include<bits/stdc++.h>
using namespace std;
class Hero{
private:
//properties
int health;
public:
char level;

void print(){
    cout<<level<<endl;
}
int GetHealth(){
    return health;
}
void setHealth(int h){
    health = h;
}
};

int main(){

//object

Hero h1;
cout<<h1.GetHealth();
return 0;
}