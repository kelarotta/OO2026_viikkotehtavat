cmake_minimum_required(VERSION 3.16)

project(olioOhjelmointi_tunti_1_nopeaHarjoitus LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(olioOhjelmointi_tunti_1_nopeaHarjoitus main.cpp)

include(GNUInstallDirs)
install(TARGETS olioOhjelmointi_tunti_1_nopeaHarjoitus
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
