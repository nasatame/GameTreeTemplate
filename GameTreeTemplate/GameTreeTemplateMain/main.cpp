#include <iostream>


#include "EdgeData.hpp"
#include "VertexData.hpp"
#include "EdgeTemplate.hpp"
#include "VertexTemplate.hpp"
#include "GraphTemplate.hpp"
#include "TreeTemplate.hpp"


int main(void) {

	using namespace std;

	using NormalGraph =
		gtt::graph::GraphTemplate<
		gtt::graph::Vertex<gtt::graph::VertexData>,
		gtt::graph::Edge<gtt::graph::EdgeData>>;

	NormalGraph graph;

	graph.AddEdge(NormalGraph::GraphEdge(NormalGraph::GraphEdge::DataType{ 0,1 }));
	graph.AddVertex(NormalGraph::GraphVertex(NormalGraph::GraphVertex::DataType{ 0 }));
	 
	cout << "hello" << endl;
	cout << graph.VertexSize() << endl;

	return 0;
}