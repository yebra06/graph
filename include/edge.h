#ifndef GRAPH_EDGE_H_
#define GRAPH_EDGE_H_


namespace ay_graph
{
	template <class T>
	class E
	{
		public:
			typedef std::size_t sizeType;
			E(sizeType end1=0, sizeType end2=0);
		private:
			sizeType index;
			sizeType end1;
			sizeType end2;
	};
}

#include "../src/edge.tpp"
#endif
