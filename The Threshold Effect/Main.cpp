#include "graphs.h"
using namespace std;


int main() {
	srand(time(0));
	Graph graphs[3];
	for (Graph g : graphs) {
		g.gen_rand_graph(rand() % 100, float(rand()) / RAND_MAX);
		g.print();
	}
}
