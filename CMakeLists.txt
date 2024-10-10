cmake_minimum_required(VERSION 3.16)

project(example2 LANGUAGES C)

add_executable(example2 main.c)

include(GNUInstallDirs)
install(TARGETS example2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
