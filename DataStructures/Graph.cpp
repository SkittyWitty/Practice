#include "Graph.h"
#include <iostream>
#include <string>
#include <queue>

using namespace std;

Graph::Graph(int v){
	totalV = v;
	adj = new list<int>[v];
}

void Graph::addEdge(int v, int w) {
	adj[v].push_back(w);
}

void Graph::BFS(int v) {
	cout << "BFS START AT: " << v << endl;
	bool* visited = new bool[totalV];

	// Mark all vertex's as not visited
	for (int i = 0; i < totalV; i++) {
		visited[i] = false;
	}

	// Queue to hold the vertices we are currently searching
	queue<int> q; 
	q.push(v); // Start with the given vertex
	visited[v] = true;
	int cur;
	
	while (!q.empty()) {
		//Grab adj list of the starting vertex
		cur = q.front();
		std::cout << " " << cur;

		for (list<int>::iterator it = adj[cur].begin(); it != adj[cur].end(); ++it) {
			if (!visited[*it]) {
				visited[*it] = true;
				q.push(*it);
			}
		}
		//cout << endl;
		q.pop();
	}
	cout << endl << "BFS :) END" << endl;
}

void Graph::explore(int v, bool* visited) {
	cout << "exploring node " << v << endl;

	//Get the list of adj vertices and travel to each one
	visited[v] = true;
	//pre visit here
	for (list<int>::iterator it = adj[v].begin(); it != adj[v].end(); ++it) {		
		if (!visited[*it]) { // if it hasn't been visited yet go deeper
			explore(*it, visited); //Use recursion as our stack to retrace our steps
		}
	}
	//post visit here
}

void Graph::DFS(int v){
	bool* visited = new bool[totalV]; //bool array to represent each node and if it has been visited

	//mark each node as not visited
	for (int i = 0; i < totalV; i++) {
		visited[i] = false;
	}
	
	cout << "DFS Start" << endl;

	//search every vertex
	for (int i = 0; i < totalV; i++) { 
		if (!visited[i]) {
			explore(i, visited);
		}
	}
	cout << "DFS End :)" << endl;
}

void Graph::explore(int v, bool* visited, bool* source) {
	visited[v] = true;

	for (auto it = adj[v].begin(); it != adj[v].end(); ++it) {
		if (!visited[*it]) {
			//if it is found in an adj list it is not a source
			source[*it] = false;
			explore(*it, visited, source);
		}
	}
}

void Graph::findSources(int v) {
	bool* visited = new bool[totalV];
	bool* source = new bool[totalV];

	for (int i = 0; i < totalV; i++) {
		visited[i] = false;
		source[i] = true;
	}

	for (int i = 0; i < totalV; i++) {
		if (!visited[i]) {
			explore(i, visited, source);
		}
	}

	for (int i = 0; i < totalV; i++) {
		if (source[i]) {
			cout << i << " is a source" << endl;
		}
	}
}