#include "LinkedList.h"

Node::Node(){
   next = nullptr;
}

Node::Node(int data){
    this->data = data;
    this->next = new Node();
}

Node::Node(int data, Node* next){
    this->data = data;
    this->next = next;
}

int Node::getData(){
    return data;
}

Node* Node::getNext(){
    return next;
}

void Node::setNext(Node* next){
    this->next = next;
}

void Node::setData(int data){
    this->data = data;
}


void LinkedList::insertNode(Node* newNode){
    Node* nextNode = head.getNext();

}
