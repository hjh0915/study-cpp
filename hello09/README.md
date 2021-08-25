自动化测试
========
google test测试框架

https://github.com/google/googletest

把google test源代码拷贝到lib目录下

https://blog.csdn.net/Fei20140908/article/details/104344462

https://raymii.org/s/tutorials/Cpp_project_setup_with_cmake_and_unit_tests.html

修改参考资料中的CMakeLists.txt，增加include部分

mkdir build
cmake ..
make all

查看可执行的文件

find . -executable -type f

测试 circularArea(1)

test@godev:~/tutor/helloCpp/hello_09/build$ ./src/hello_09_run
半径:1, 面积:3.14159
test@godev:~/tutor/helloCpp/hello_09/build$ ./tests/hello_09_test
[==========] Running 1 test from 1 test suite.
[----------] Global test environment set-up.
[----------] 1 test from areaTest
[ RUN      ] areaTest.test1
/home/test/tutor/helloCpp/hello_09/tests/test_circle_area.cpp:8: Failure
Expected equality of these values:
  circularArea(1)
    Which is: 3.14159
  3.14
[  FAILED  ] areaTest.test1 (0 ms)
[----------] 1 test from areaTest (0 ms total)

[----------] Global test environment tear-down
[==========] 1 test from 1 test suite ran. (0 ms total)
[  PASSED  ] 0 tests.
[  FAILED  ] 1 test, listed below:
[  FAILED  ] areaTest.test1

1 FAILED TEST