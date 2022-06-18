#pragma once

#include <vector>
#include <memory>
#include "VertexTemplate.hpp"
#include "EdgeTemplate.hpp"

namespace gtt {

namespace graph {

/// <summary>
/// Graph 頂点と辺を持つ
/// </summary>
template<class Vertex, class Edge>
class GraphTemplate {
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

	/// <summary>
	/// 頂点を追加する
	/// </summary>
	bool AddVertex(Vertex vertex);

	/// <summary>
	/// 辺を追加する
	/// </summary>
	bool AddEdge(Edge edge);

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
}
}