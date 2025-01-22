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

//static
Hero a;
a.setHealth(70);
cout<<a.level<<endl;
cout<<a.GetHealth()<<endl;
//dynamically 

Hero *b = new Hero;
b->setHealth(70);
cout<<(*b).GetHealth()<<endl;
cout<<(*b).level<<endl;

//or
cout<<b->level<<endl;
return 0;
}