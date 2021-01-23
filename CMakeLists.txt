cmake_minimum_required(VERSION 3.16)
project(wxwidgets_tutorials)

set(CMAKE_CXX_STANDARD 20)
set(wxWidgets_CONFIGURATION mswu)
aux_source_directory(. SRC_LIST)


find_package(wxWidgets COMPONENTS core base REQUIRED)
include(${wxWidgets_USE_FILE})

add_executable(${PROJECT_NAME} ${SRC_LIST})
target_link_libraries(${PROJECT_NAME} ${wxWidgets_LIBRARIES})