#pragma once

#include "Defs.hpp"
#include <cassert>

namespace gtt {

namespace graph {

template<typename EdgeData>
class Edge {
public:

	using DataType = EdgeData;

public:

	Edge(DataType data) : data_(data)
	{
		assert(data.start_vertex_num_ >= 0);
		assert(data.end_vertex_num_ >= 0);
		assert(data.start_vertex_num_ < data.end_vertex_num_);
	}

private:
	EdgeData data_;

};

}

}