#include <iostream>
#include "Graph.h"
#include "LinkedList.h"
#include "GraphUtil.hpp"
#include "Tree.h"

using namespace std;
using namespace GraphUtil;

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
	g.DFS(0);

	//BFS
	g.BFS(2);
}

void graphTestDriver2() {
	Graph g(6);
	g.addEdge(0, 1);
	g.addEdge(0, 2);
	g.addEdge(1, 2);
	g.addEdge(1, 3);
	g.addEdge(2, 3);
	g.addEdge(3, 4);
	g.addEdge(4, 1);
	g.addEdge(4, 0);
	g.addEdge(4, 5);

	g.BFS(0);
}

void graphTestDriver3() {
	Graph g(10);

	g.addEdge(0, 1);
	g.addEdge(0, 2);

	g.addEdge(1, 3);
	g.addEdge(2, 4);

	g.addEdge(3, 5);
	g.addEdge(3, 6);

	g.addEdge(5, 7);

	g.addEdge(8, 9);

	g.DFS(0);

	g.findSources(0);
	
}

//Colorable graph
void graphTestDriver4() {
	Graph g(4);
	g.addEdge(0, 1);
	g.addEdge(1, 3);
	g.addEdge(3, 2);
	g.addEdge(2, 0);

	if (g.colorable()) {
		cout << "Graph is colorable! 😁" << endl;
	}
	else {
		cout << "Graph is not colorable 😭" << endl;
	}
}

//Graph is not colorable
void graphTestDriver5(){
	Graph g(4);

	g.addEdge(0, 1);
	g.addEdge(1, 3);
	g.addEdge(3, 2);
	g.addEdge(2, 0);
	g.addEdge(0, 3);

	if (g.colorable()) {
		cout << "Graph is Colorable!" << endl;
	}
	else {
		cout << "Graph is not colorable" << endl;
	}
}

void graphTestDriver6() {
	Graph g(3);
	g.addEdge(1,0);
	g.addEdge(0,2);
	g.DFS(1);
	
	Graph gRev;
	gRev = g.reverseGraph(1);

	cout << "Reverse Graph Total Vertices: " << gRev.getTotalVertices() << endl;
	cout << "Reverse Graph Edges start" << endl;
	gRev.DFS(2);
	cout << "Reverse Graph Edges end" << endl;

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

void treeTraversalTestDriver() {
	TreeNode root(10);
	TreeUtil meh;
	meh.inOrderTraversal(&root);
}

void minHeightTest() {
	int sortedArr[] = {1,2,3,4,5};
	MinHeightBST meh(sortedArr);
	meh.traverseTree();
}

int main()
{
    cout << "Hello World!" << endl;

	//graphTestDriver();
	//graphTestDriver3();
	//graphTestDriver4();
	//graphTestDriver5();
	//graphTestDriver6();

	minHeightTest();
    return 0;
}



