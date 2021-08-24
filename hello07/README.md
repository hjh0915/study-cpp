编译
====
mkdir bin 
mkdir -p lib/utils

在主目录下运行命令

g++ -o ./lib/circle.o -I ./src/includes -c ./src/circle.cpp 
g++ -o ./lib/utils/circulararea.o -c ./src/utils/circulararea.cpp 
g++ -o ./bin/circle ./lib/circle.o ./lib/utils/circulararea.o -lm