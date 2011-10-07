project(WWPP_Calculator)
cmake_minimum_required(VERSION 2.6)
find_package(Qt4 REQUIRED)

include_directories(${QT_INCLUDES} ${CMAKE_CURRENT_BINARY_DIR})

set(WWPP_Calculator_SRCS WWPP_Calculator.cpp main.cpp)
qt4_automoc(${WWPP_Calculator_SRCS})
add_executable(WWPP_Calculator ${WWPP_Calculator_SRCS})
target_link_libraries(WWPP_Calculator ${QT_QTCORE_LIBRARY} ${QT_QTGUI_LIBRARY})
