#ifndef GRAPH_GRAPH_H_
#define GRAPH_GRAPH_H_

#include "edge.h"
#include "node.h"

#include <vector>

namespace ay_graph
{
	template <class T>
	class G
	{
		public:
			typedef std::size_t sizeType;
			G(sizeType edgeCount=0, sizeType nodeCount=0);
		private:
			sizeType edgeCount;
			sizeType nodeCount;
			std::vector<E<T> > edges;
			std::vector<V<T> > nodes;
	};
}

#include "../src/graph.tpp"
#endif
