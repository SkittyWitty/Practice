#include <iostream>
#include "Graph.h"
#include "LinkedList.h"

using namespace std;

void graphTestDriver() {
	// Create a graph 
	Graph g(4);
	g.addEdge(0, 1);
	g.addEdge(0, 2);
	g.addEdge(1, 2);
	g.addEdge(2, 0);
	g.addEdge(2, 3);
	g.addEdge(3, 3);

	//DFS

	//BFS
	g.BFS(2);
}

void nodeTestDrive() {
	Node n1;
	Node* next = n1.getNext();
	//Node n2(20, &n1);

	cout << next << endl;

	if (next == nullptr) {
		cout << "It was null and stuff" << endl;
	}
	//LinkedList myList = new LinkedList();
}

int main()
{
    cout << "Hello World!" << endl;

	graphTestDriver();

    return 0;
}



