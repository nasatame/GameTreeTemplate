#pragma once

#include "Defs.hpp"
#include <cassert>

namespace gtt {

namespace graph {

template<typename VertexData>
class Vertex {
public:

	using DataType = VertexData;

public:

	Vertex(DataType data) : data_(data)
	{
		assert(data.vertex_num_ >= 0);
	}

private:
	VertexData data_;

};

}

}

