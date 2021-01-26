aux_source_directory(. SRC_LIST)

set(wxWidgets_CONFIGURATION mswu)
find_package(wxWidgets COMPONENTS core base REQUIRED)
include(${wxWidgets_USE_FILE})
add_executable(Chapter002 ${SRC_LIST})
#add_executable(${PROJECT_NAME} ${SRC_LIST} MyApp.cpp MyApp.hpp MyFrame.cpp MyFrame.hpp ../Chapter002/main.cpp ../Chapter002/wxImagePanel.cpp ../Chapter002/wxImagePanel.hpp)
target_link_libraries(Chapter002 ${wxWidgets_LIBRARIES})