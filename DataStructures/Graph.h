#ifndef GRAPH_H
#define GRAPH_H

#include <list>

using namespace std;

enum Color {
	BLACK,
	WHITE,
	NONE
};

class Graph {
public:
	Graph();
	Graph(int vCount); // Graph Constructor giving total number of vertices

	int getTotalVertices();

	//Add an edge to the graph by adding new vertex w the existing vertex v 
	void addEdge(int v, int w);

	//Traverse Graph via Breadth First search given a vertex to start
	void BFS(int v);

	//Traverse Graph via Depth First Search
	void DFS(int v);

	void findSources(int v);
	bool colorable();

private:
	int totalV; // Number of Vertices
	list <int>* adj; // list of adjacent vertices
	void explore(int v, bool* visited); //Utility for exploring all reachable vertices of a given source
	void explore(int v, bool* visited, bool* source);
	bool explore(int v, bool* visited, Color* vColor);
};	

#endif // GRAPH_H
