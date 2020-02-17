# wbc2
New C++ library for Whole Body Control.

# TODO Before compiling wbc2
## Install compiler
'''
sudo apt update
sudo apt install build-essential
'''

## Compile yaml-cpp from source
'''
cd <path-to-wbc2>/third_party/yaml-cpp-0.6.3
mkdir build
cd build
cmake -DCMAKE_BUILD_TYPE=Release .. && make
'''

## Compile googletest from source
'''
cd <path-to-wbc2>/third_party/googleteset-1.10.0
mkdir build
cd build
cmake -DCMAKE_BUILD_TYPE=Release .. && make
'''

# Compile wbc2 after compiling requisites
## Compile wbc2
'''
cd <path-to-wbc2>
mkdir build
cd build
cmake .. && make
'''

# Guaranteed working environment
* Ubuntu 18.04 LTS
* g++ 7.4.0
* yaml-cpp 0.6.3
* Eigen 3.2.7
* googletest 1.10.0