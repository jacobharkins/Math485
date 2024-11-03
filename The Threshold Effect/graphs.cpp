#include "graphs.h"
using namespace std;


void Graph::gen_rand_graph(int n, float p) {
	for (int i = 0; i < n; i++) {
		this->V.push_back(Vertex(i));
		for (int j = i + 1; j < n; j++) {
			if (float(rand()) / RAND_MAX < p) {

				this->E.push_back(Edge(i, j));
			}
		}
	}
}


void Edge::print() const {
	cout << "(" << v1 << "," << v2 << ")";
}


void Vertex::print() const {
	cout << id;
}


void Graph::print() const {
	cout << "V(G): {";
	for (const Vertex& v : V) {
		v.print();
		cout << ", ";
	}
	cout << "}" << endl;
	cout << "-------------------------------------------------------" << endl;

	cout << "E(G): {";
	for (const Edge& e : E) {
		e.print();
		cout << ",";
	}
	cout << "}" << endl;
	cout << "========================================================" << endl;
}