cmake_minimum_required(VERSION 3.19)
project(lesson2_1 LANGUAGES CXX)

find_package(Qt6 6.5 REQUIRED COMPONENTS Core)
find_package(Qt6 REQUIRED COMPONENTS Network)
find_package(Qt6 REQUIRED COMPONENTS Sql)

qt_standard_project_setup()

qt_add_executable(lesson2_1
    main.cpp
)

target_link_libraries(lesson2_1
    PRIVATE
        Qt6::Core
        Qt6::Network
        Qt6::Sql
)

install(TARGETS lesson2_1
    BUNDLE  DESTINATION .
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)
