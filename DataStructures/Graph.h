#ifndef GRAPH_H
#define GRAPH_H

#incldue <list>

class Graph {
public:
	Graph(int vCount); // Graph Constructor giving total number of vertices

	//Add an edge to the graph by adding new vertex w the existing vertex v 
	void addEdge(int v, int w);

	//Traverse Graph via Breadth First search given a vertex to start
	void BFS(int v);
private:
	int totalV; // Number of Vertices
	list <int>* adj; // list of adjacent vertices
};

#endif // GRAPH_H
