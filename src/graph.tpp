#include "../include/graph.h"


namespace ay_graph
{
	template <class T>
	G<T>::G(sizeType edgeCount, sizeType nodeCount)
	: edgeCount(edgeCount), nodeCount(nodeCount)
	{
		for (int e = 0, n = 0; n < nodeCount; e++, n++)
		{
	    edges.push_back(E<T>(e));
	    nodes.push_back(V<T>(n));
	  }
	}
}
