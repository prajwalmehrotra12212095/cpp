// #include<bits/stdc++.h>
// using namespace std;
// class Hero{
// private:
// //properties
// int health;
// public:
// char level;

// //constructor 
// Hero(){
//     cout<<"constructor called"<<endl;
// }

// //parammetrized constructor

// Hero(int health){
//     this -> health = health;
// }


// void print(){
//     cout<<level<<endl;
// }
// int GetHealth(){
//     return health;
// }
// void setHealth(int h){
//    this -> health = h;
// }
// };

// int main(){

//     //object created statically
// Hero ramesh(10);

// //object created dynamically
// cout<<&ramesh<<endl;
// Hero *h = new Hero;
// return 0;
// }


//copy constuctor


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
};

int main(){

Hero suresh;
suresh.setHealth(70);

S.print();

Hero ristesh(S);

//copy constructor

R.print();

//ristesh.health = suresh.health;
   return 0;
}




