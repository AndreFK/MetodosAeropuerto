#include "Vertex.h"



Vertex::Vertex(const char * name)
{
	this->id = name;
}

vector<Vertex*> Vertex::getAdj() {
	vector<Vertex*> Adj;
	for (size_t i = 0; i < edges.size(); i++) {
		Adj.push_back(edges[i]->destiny);
	}
	return Adj;
}

Vertex::~Vertex()
{
}
