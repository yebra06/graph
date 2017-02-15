#ifndef GRAPH_GRAPH_H_
#define GRAPH_GRAPH_H_

#include "edge.h"
#include "node.h"


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
	};
}

#include "../src/graph.template"
#endif
