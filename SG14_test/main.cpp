#if defined(_MSC_VER)
#include <SDKDDKVer.h>
#endif

#include <stdio.h>

#include "SG14_test.h"

int main(int, char *[])
{
	sg14_test::static_ring_test();
	sg14_test::dynamic_ring_test();
	sg14_test::unstable_remove_test();
	sg14_test::uninitialized();
  sg14_test::plf_test_suite();
  sg14_test::inplace_function_test();

	puts("tests completed");

	return 0;
}

