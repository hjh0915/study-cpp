boost入门
=========
http://boost.org
下载 boost 1.77版本

./bootstrap.sh 生成 b2

编译

./b2 toolset=gcc

编译之后

The Boost C++ Libraries were successfully built!

The following directory should be added to compiler include paths:

    /home/test/boost_1_77_0

The following directory should be added to linker library paths:

    /home/test/boost_1_77_0/stage/lib

sudo ./b2 install

安装至/usr/local/include 与 /usr/local/lib


相关示例
=======
https://theboostcpplibraries.com/


示例编译
=======
g++ -o hello11 -I /usr/local/include/boost -L /usr/local/lib -lboost_date_time hello11.cpp