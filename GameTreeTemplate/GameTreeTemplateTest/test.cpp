#include "pch.h"

#include "test.h"

TEST(TestCaseName, TestName) {
	EXPECT_EQ(1, 1);
	EXPECT_TRUE(true);
}

TEST(MakeGraph, NoneGraph) {
	gtt::graph::GraphTemplate<gtt::graph::Vertex<int>, gtt::graph::Edge<int>> graph;
	graph.AddVertex(gtt::graph::Vertex<int>(0));
	EXPECT_EQ(graph.VertexSize(), 1);
	graph.AddVertex(gtt::graph::Vertex<int>(0));
	EXPECT_EQ(graph.VertexSize(), 2);
}