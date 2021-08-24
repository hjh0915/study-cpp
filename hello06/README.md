编译
====
在src目录下运行

g++ -I ./includes -c circle.cpp 
g++ -o ./utils/circulararea.o  -c ./utils/circulararea.cpp 
g++ -o circle ./circle.o ./utils/circulararea.o -lm