echo "-----------------------"
echo "[*] building"
cd ./build
cmake ..
make
cd ..
echo "[*] running \n\n"
echo "-----------------------"
./build/main
