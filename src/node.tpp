#include "../include/node.h"


namespace ay_graph
{
	template <class T>
	V<T>::V(sizeType degree, T data)
	: index(0), degree(degree), data(data)
	{}
}
