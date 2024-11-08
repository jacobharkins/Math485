#include<vector>
#include<iostream>
using namespace std;

class Edge {
public:
	int v1;
	int v2;

	Edge(int vertex1, int vertex2) : v1(vertex1), v2(vertex2){}
	void print() const;
};

class Vertex {
public:
	int id;

	Vertex(int v) : id(v) {}
	void print() const;
};


class Graph {
public:
	vector<Vertex> V;
	vector<Edge> E;
	vector<vector<bool>> adj;

	Graph() : V(), E(){}
	Graph(const vector<Vertex>& Vertices, const vector<Edge>& Edges) : V(Vertices), E(Edges) {}


	void print() const;									// Print the Graph's Contents
	void gen_rand_graph(int n, float p);				// Generate Random Graphs
	bool has_edge() const;								// Check if the Graph has an Edge
	bool has_triangle() const;							// Check if the Graph has a Triangle Subgraph
};

