#ifndef GRAPH_NODE_H_
#define GRAPH_NODE_H_


namespace ay_graph
{
	template <class T>
	class V
	{
		public:
			typedef std::size_t sizeType;
			V(sizeType degree=0, T data=0);
		private:
			sizeType index;
			sizeType degree;
			T data;
	};
}

#include "../src/node.tpp"
#endif
