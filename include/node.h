#ifndef GRAPH_NODE_H_
#define GRAPH_NODE_H_


namespace ay_graph
{
	template <class T>
	class V
	{
		public:
			typedef std::size_t sizeType;
			V(sizeType degree=0);
		private:
			sizeType index;
			sizeType degree;
	};
}

#include "../src/node.template"
#endif
