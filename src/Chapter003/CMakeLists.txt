#add_subdirectory(../../lib/matplotplusplus)
add_subdirectory(matplotplusplus)
#find_package(matplot++)
add_executable(Chapter003 main.cpp)


#add_executable(Chapter003 main.cpp)
#add_executable(${PROJECT_NAME} ${SRC_LIST} MyApp.cpp MyApp.hpp MyFrame.cpp MyFrame.hpp ../Chapter002/main.cpp ../Chapter002/wxImagePanel.cpp ../Chapter002/wxImagePanel.hpp)
target_link_libraries(Chapter003  PUBLIC matplot)