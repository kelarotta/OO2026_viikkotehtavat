cmake_minimum_required(VERSION 3.16)

project(OO_viikteh2 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(OO_viikteh2 main.cpp
    game.h game.cpp)

include(GNUInstallDirs)
install(TARGETS OO_viikteh2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
