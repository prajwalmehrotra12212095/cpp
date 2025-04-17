#include<iostream>
using namespace std;
 class Node{
    public:
    int data;
    Node* next;

//constructor

    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
 };

 class List{
    Node* head;
    Node* tail;

    public:
    List(){
        head = tail = NULL;
    }
 };

 int main(){
    Node* node1 = new Node();
    cout<<node1 -> data<<endl;
    cout<<node1 -> next<<endl;
    
    return 0;
 }
 