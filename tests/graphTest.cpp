#include <cstdlib>
#include <iostream>

#include "../include/edge.h"
#include "../include/graph.h"
#include "../include/node.h"

using namespace ay_graph;
using namespace std;

#ifdef DEBUG 
#define D(x) x
#else 
#define D(x)
#endif

int main(int argc, char** argv)
{
	cout << "testing" << endl;
	ay_graph::G<int> g1;
	ay_graph::E<int> e1;
	ay_graph::V<int> v1;
	return EXIT_SUCCESS;
}
