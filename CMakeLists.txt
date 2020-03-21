cmake_minimum_required(VERSION 2.8)

project(cafe)

set(CMAKE_CXX_STANDARD 11)

add_executable(cafe main.cpp burger.cpp coffee.cpp sandwhich.cpp tea.cpp purchase.cpp menu.cpp changeCalculator.cpp)