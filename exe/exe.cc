#include <iostream>
#include <cstdlib>

#include "cmake_tester.h"

using namespace std;

int main(int, const char **)
{
    wolfgang::cmake_tester::test_function("cmake_tester tested");

    return 0;
}
