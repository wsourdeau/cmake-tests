add_library(cmake-tester SHARED cmake_tester.cc)
set_target_properties(cmake-tester PROPERTIES 
                      VERSION ${PROJECT_VERSION}
                      SOVERSION ${PROJECT_VERSION_MAJOR})
target_compile_options(cmake-tester PRIVATE -Wall -Wextra -Werror -pedantic)
target_include_directories(cmake-tester PRIVATE  /usr/include/c++/13)

install(TARGETS cmake-tester)
install(FILES cmake_tester.h DESTINATION include)
