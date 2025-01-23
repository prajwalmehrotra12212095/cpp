#include<bits/stdc++.h>
using namespace std;
class Hero{
private:
//properties
int health;
public:
char level;

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
};

int main(){ 

//static

Hero a;

//dynamic

    Hero *b = new Hero();

    //manually destrcutor calling
    delete b;
 
   return 0;
}
