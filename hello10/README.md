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

类分离代码
=========
https://www.learncpp.com/cpp-tutorial/classes-and-class-members/

面向对象的方式来分离代码

class Circle

同时采用类声明和实现分离的方式，解决测试代码的统一，都使用

#include "calculate.h"