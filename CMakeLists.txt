cmake_minimum_required(VERSION 3.12)
project(MyBankingSystem)

set(CMAKE_CXX_STANDARD 20)

include_directories(include)

add_executable(MyBankingSystem
        src/Account.cpp
        src/Transaction.cpp
        src/main.cpp)
