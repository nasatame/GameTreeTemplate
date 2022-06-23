#pragma once

#include "GraphTemplate.hpp"
#include "VertexTemplate.hpp"
#include "EdgeTemplate.hpp"

namespace gtt {

namespace tree {

/// <summary>
/// Tree 頂点と辺を持つ。循環しない
/// </summary>
template<class Vertex , class Edge>
class TreeTemplate : public graph::GraphTemplate<Vertex , Edge> {
public:

	using BaseType = graph::GraphTemplate<Vertex, Edge>;

public:

	/// <summary>
	/// 頂点を確認しながら追加する。リリースモードでも、異常な行動をしたら停止する用。
	/// </summary>
	bool AddAndCheckVertex(const typename BaseType::GraphVertex vertex);

	/// <summary>
	/// 
	/// </summary>


private:


private:


};

template<class Vertex, class Edge>
bool TreeTemplate<Vertex, Edge>::AddAndCheckVertex(const typename BaseType::GraphVertex vertex)
{
	AddVertex(vertex);

	return true;
}

}
}

