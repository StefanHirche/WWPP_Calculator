project(WWPP_Calculator)
cmake_minimum_required(VERSION 2.6)
find_package(KDE4 REQUIRED)

include_directories(${KDE4_INCLUDES} ${CMAKE_CURRENT_BINARY_DIR})

set(WWPP_Calculator_SRCS WWPP_Calculator.cpp main.cpp)

add_executable(WWPP_Calculator ${WWPP_Calculator_SRCS})
target_link_libraries(WWPP_Calculator ${KDE4_KDEUI_LIBS})
