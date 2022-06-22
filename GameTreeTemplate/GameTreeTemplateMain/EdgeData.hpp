#pragma once

#include "Defs.hpp"


namespace gtt {

namespace graph {

//辺
struct EdgeData {
	VertexNumType start_vertex_num_, end_vertex_num_;
};

//無向辺
struct UndirectedEdgeData : public EdgeData {
};

//有向辺
struct DirectedEdgeData : public EdgeData {
};

}
}


