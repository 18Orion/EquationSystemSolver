clang++ -c src/*.cpp -Iinclude
clang++ -c main.cpp -Iinclude
clang++ -o ejecutable *.o
rm *.o
