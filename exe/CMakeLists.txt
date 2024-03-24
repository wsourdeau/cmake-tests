add_executable(exe exe.cc)
target_include_directories(exe PRIVATE ../cmake-tester)
target_link_libraries(exe cmake-tester)
target_compile_options(exe PRIVATE -Wall -Wextra -Werror -pedantic)

install(TARGETS exe)
