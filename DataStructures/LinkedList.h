#ifndef LINKEDLIST_H
#define LINKEDLIST_H

class Node {
public:
 Node();
 Node(int data);
 Node(int data, Node* next);
 int getData();
 Node* getNext();
 void setData(int data);
 void setNext(Node* next);

private:
 int data;
 Node* next;
};

class LinkedList {
public:
    LinkedList(Node head);
    void insertNode(Node* newNode);
private:
    Node head;

};


#endif // LINKEDLIST_H
