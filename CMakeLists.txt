cmake_minimum_required(VERSION 3.5)

project(versicherung LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(versicherung main.cpp
    kfzschein.h kfzschein.cpp
    vschien.h vschien.cpp
    lvschein.h lvschein.cpp
    versicherer.h versicherer.cpp)

include(GNUInstallDirs)
install(TARGETS versicherung
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
