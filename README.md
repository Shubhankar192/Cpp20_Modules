# Cpp20_Modules
Dependecies

    clang-17 or higher
    cmake 3_28 or higher (preferably cmake 3_29)
    Ninja 1.11  

To run this program us the following commands:


    mkdir build
    cd build
    CC= <path_to_clang> CXX=<path_to_clang++ > cmake -GNinja -DCMAKE_EXPORT_COMPILE_COMMANDS=ON .. 
    ninja
