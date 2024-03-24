#include <iostream>
#include <string>

#include "cmake_tester.h"

using namespace std;

namespace wolfgang::cmake_tester
{

void test_function(const string & text)
{
    cout << ":: " << text << endl;
}

}
