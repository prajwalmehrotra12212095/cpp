#include<>bits/stdc++.h>
using namespace std;
class Hero{
public:

char name[100];
int level;

Hero(){
    cout<<"constructor"<<endl;
}
Hero(int health,char level){
    this -> level = level;
    this -> health = health;
}

int GetHealth(){
    return health;
}
void setHealth(int h){
health = h;
}

void setName(char name[]){
    strcpy(this->name,name);
}
};

int main(){
Hero h1;
h1.setHealth(12);
char name[7] = "prajwal";

return 0;
} 