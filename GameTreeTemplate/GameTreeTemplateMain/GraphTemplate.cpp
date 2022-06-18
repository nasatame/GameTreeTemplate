#include "GraphTemplate.hpp"



template<class Vertex, class Edge>
bool gtt::graph::GraphTemplate<Vertex, Edge>::AddVertex(const Vertex vertex)
{

	vertices_.emplace_back(std::make_shared<Vertex>(std::move(vertex)));

	return true;
}

template<class Vertex, class Edge>
bool gtt::graph::GraphTemplate<Vertex, Edge>::AddEdge(Edge edge)
{

	edges_.emplace_back(std::make_shared<Vertex>(std::move(edge)));

	return true;
}
