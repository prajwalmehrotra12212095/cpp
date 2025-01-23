#include<bits/stdc++.h>
using namespace std;
class Hero{
private:
//properties
int health;
public:
char level;
static int timeToComplete;

//constructor 
Hero(){
    cout<<"constructor called"<<endl;
}

void print(){
    cout<<level<<endl;
    cout<<this->health<<endl;
}
int GetHealth(){
    return health;
}
void setHealth(int h){
   this -> health = h;
}
~Hero(){
    cout<<"desctructor"<<endl;
}
int Hero::timeToComplete = 5;
};

int main(){ 

cout<<Hero::timeToComplete<<endl;
 
   return 0;
}
