//batman
#include<iostream>
using namespace std;

struct node{
  int value;
  node* prev;
  node* next;
  node(int data): value(data),next(nullptr), prev(nullptr){}
};

class linkedList{
  private:
  node* head;
  node* tail;
  public:
  linkedList():head(nullptr), tail(nullptr){}

  void insertion(int data){
    node* newNode = new node(data);
    //case for an empty list
    if(head == nullptr && tail == nullptr){
      head = newNode;
      tail = newNode;
      return;
    }
    //iterate till you find a nullptr
    node* temp = head;
    while(temp->next != nullptr){
      temp = temp->next;
    }
    //update the pointers
    temp->next =newNode;
    newNode->prev = temp;
    tail = newNode;
  }
  void display(){
    node* temp = head;
    if(temp == nullptr){
      cout<<"Empty list!";
      return;
    }
    cout<<"linkedlist: ";
    while(temp != nullptr){
      cout<<temp->value<<"|";
      temp = temp->next;
    }
  }
};

int main(){
  linkedList obj;
  obj.insertion(11);
  obj.insertion(10);
  obj.insertion(13);
  obj.insertion(15);
  obj.display();
}
