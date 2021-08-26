使用crow
========
crow是一个web微框架，类似flask

http://crowcpp.org/getting_started/setup/

git clone https://github.com/crowcpp/crow.git

cp -R includes ~/study-cpp/hello12

编译构建
=======
g++ -o hello12 hello12.cpp -I /usr/local/include/boost -I ./include -L /usr/local/lib -lpthread -lboost_system

运行
===
./hello12

浏览器访问 http://localhost:18080