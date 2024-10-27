cmake_minimum_required(VERSION 3.14)

project(flightRouteImport LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core Positioning)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core Positioning)

add_executable(flightRouteImport
    DataFileAbstract.h
    DataFileAbstract.cpp
    Waypoint.h

    PLN.h
    PLN.cpp
    FPL.h
    FPL.cpp

    main.cpp
)
target_link_libraries(flightRouteImport Qt${QT_VERSION_MAJOR}::Core Qt${QT_VERSION_MAJOR}::Positioning)

install(TARGETS flightRouteImport
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
