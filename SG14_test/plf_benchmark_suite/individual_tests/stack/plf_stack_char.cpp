#include <iostream>
#include <cstdio>

#include "plf_stack.h"
#include "plf_bench.h"


int main(int argc, char **argv)
{
	output_to_csv_file(argv[0]);

	benchmark_range_stack< plf::stack<unsigned char> >(10, 1000000, 1.1, true);

	// with reserve:
	benchmark_range_stack< plf::stack<unsigned char> >(10, 1000000, 1.1, true, true);
	return 0;
}