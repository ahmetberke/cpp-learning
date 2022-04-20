echo "This is a bash script, this is the first line"
echo "This is the second line, it will run after the first one"

echo "[*] compiling subtract"
c++ -std=c++17 -c -Idir/ src/subtract.cpp -o build/subtract.o

echo "[*] compiling sum"
c++ -std=c++17 -c -Idir/ src/sum.cpp -o build/sum.o

echo "[*] library is archived as 'ipb_arithmetic'"
ar rcs build/libipb_arithmetic.a build/sum.o build/subtract.o

echo "[*] library (ipb_arithmetic) is linked to the main (main target's results/bin/main)"
c++ -std=c++17 build/main.o -L ./build -lipb_arithmetic -o results/bin/main
