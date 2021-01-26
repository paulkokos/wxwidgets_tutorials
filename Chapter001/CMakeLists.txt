aux_source_directory(. SRC_LIST)

set(wxWidgets_CONFIGURATION mswu)
find_package(wxWidgets COMPONENTS core base REQUIRED)
include(${wxWidgets_USE_FILE})
add_executable(${PROJECT_NAME} ${SRC_LIST} MyApp.cpp MyApp.hpp MyFrame.cpp MyFrame.hpp)
target_link_libraries(${PROJECT_NAME} ${wxWidgets_LIBRARIES})