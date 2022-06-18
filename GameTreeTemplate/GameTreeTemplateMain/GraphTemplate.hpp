#pragma once

#include <vector>
#include <memory>
#include "VertexTemplate.hpp"
#include "EdgeTemplate.hpp"

namespace gtt {

namespace graph {

/// <summary>
/// Graph ���_�ƕӂ�����
/// </summary>
template<class Vertex, class Edge>
class GraphTemplate {
public:


	/// <summary>
	///  ���_�O�̃O���t�̍쐬
	/// </summary>
	GraphTemplate() {};

	/// <summary>
	///  �O���t�̍폜
	/// </summary>
	~GraphTemplate() {};

public:

	/// <summary>
	/// ���_��ǉ�����
	/// </summary>
	bool AddVertex(Vertex vertex);

	/// <summary>
	/// �ӂ�ǉ�����
	/// </summary>
	bool AddEdge(Edge edge);

private:


private:

	/// <summary>
	///  �ӏW��
	/// </summary>
	std::vector<std::shared_ptr<Vertex>> vertices_;

	/// <summary>
	///  ���_�W��
	/// </summary>
	std::vector<std::shared_ptr<Edge>> edges_;



};
}
}