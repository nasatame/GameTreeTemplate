#include <iostream>


#include "EdgeData.hpp"
#include "VertexData.hpp"
#include "EdgeTemplate.hpp"
#include "VertexTemplate.hpp"
#include "GraphTemplate.hpp"
#include "TreeTemplate.hpp"


int main(void) {

	using namespace std;

	using NormalTree =
		gtt::tree::TreeTemplate<
		gtt::graph::Edge<gtt::graph::EdgeData>,
		gtt::graph::Vertex<gtt::graph::VertexData>>;

	NormalTree tree;

	tree.AddEdge(NormalTree::GraphEdge());
	 
	cout << "hello" << endl;
	cout << tree.VertexSize() << endl;

	return 0;
}