#include <iostream>
#include "LinkedList.h"

using namespace std;

int main()
{
    cout << "Hello World!" << endl;

    Node n1;
    Node* next = n1.getNext();
    //Node n2(20, &n1);

    cout << next << endl;

    if(next == nullptr){
        cout << "It was null and stuff" << endl;
    }
    //LinkedList myList = new LinkedList();

    return 0;
}
