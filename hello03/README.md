独立文件
=======
分别编译, 统一链接

g++ -c main.cpp
g++ -c add.cpp

g++ -o hello03 main.o add.o

统一编译
=======
g++ -o hello03 main.cpp add.cpp