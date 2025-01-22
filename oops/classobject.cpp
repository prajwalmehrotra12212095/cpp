// #include<bits/stdc++.h>
// using namespace std;
// class Hero{

// //properties

// int health;

// };

// int main(){

// //object

// Hero h1;
// cout<<sizeof(h1);
// return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// class Hero{
// public:
// //properties
// int health;
// private:
// char level;

// void print(){
//     cout<<level<<endl;
// }
// };

// int main(){

// //object

// Hero h1;
//h1.health= 70;
// cout<<h1.health;
// return 0;
// }


//getter setter


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
h1.setHealth(70);
cout<<h1.GetHealth();
return 0;
}