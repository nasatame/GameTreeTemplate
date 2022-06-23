#pragma once

#include <vector>
#include <memory>
#include "VertexTemplate.hpp"
#include "EdgeTemplate.hpp"

namespace gtt {

namespace graph {

/// <summary>
/// Graph 頂点と辺を持つ。高速に動く以外のすべてを保証しない。
/// </summary>
template<class Vertex, class Edge>
class GraphTemplate {
public:

	using GraphEdge = Edge;
	using GraphVertex = Vertex;
	using SizeType = typename std::vector<std::shared_ptr<Vertex>>::size_type;

public:

	/// <summary>
	///  頂点０のグラフの作成
	/// </summary>
	GraphTemplate() {};

	/// <summary>
	///  グラフの削除
	/// </summary>
	~GraphTemplate() {};

public:


	SizeType VertexSize() { return vertices_.size(); };

	/// <summary>
	/// 頂点を追加する
	/// </summary>
	bool AddVertex(const GraphVertex vertex);

	/// <summary>
	/// 辺を追加する
	/// </summary>
	bool AddEdge(const GraphEdge edge);

private:


private:

	/// <summary>
	///  辺集合
	/// </summary>
	std::vector<std::shared_ptr<Vertex>> vertices_;

	/// <summary>
	///  頂点集合
	/// </summary>
	std::vector<std::shared_ptr<Edge>> edges_;



};

template<class Vertex, class Edge>
bool GraphTemplate<Vertex, Edge>::AddVertex(const GraphTemplate::GraphVertex vertex)
{

	vertices_.emplace_back(std::make_shared<GraphTemplate::GraphVertex>(std::move(vertex)));

	return true;
}

template<class Vertex, class Edge>
bool GraphTemplate<Vertex, Edge>::AddEdge(const GraphTemplate::GraphEdge edge)
{

	edges_.emplace_back(std::make_shared<GraphTemplate::GraphEdge>(std::move(edge)));

	return true;
}




}
}

