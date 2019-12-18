#ifndef GRAPH_H
#define GRAPH_H

#include <list>

using namespace std;

class Graph {
public:
	Graph(int vCount); // Graph Constructor giving total number of vertices

	//Add an edge to the graph by adding new vertex w the existing vertex v 
	void addEdge(int v, int w);

	//Traverse Graph via Breadth First search given a vertex to start
	void BFS(int v);

	//Traverse Graph via Depth First Search
	void DFS(int v);
	void explore(int v); //Utility for exploring all reachable vertices of a given source
private:
	int totalV; // Number of Vertices
	list <int>* adj; // list of adjacent vertices
};

#endif // GRAPH_H
