c++ -std=c++17 -c tools.cpp
ar rcs libtools.a tools.o
c++ -std=c++17 -c main.cpp
c++ -std=c++17 main.o -L . -ltools -o main
./main