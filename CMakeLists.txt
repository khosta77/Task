cmake_minimum_required(VERSION 3.16)
project(main)
set(CMAKE_CXX_STANDARD 17)

add_executable(main
        ./project/src/main.cpp
        ./project/lib/StepanPlot/project/include/StepanPlot.h
        )

#openGL
find_package(OpenGL REQUIRED)
find_package(GLUT REQUIRED)
include_directories(${OPENGL_INCLUDE_DIRS}, ${GLUT_INCLUDE_DIRS})
target_link_libraries(main ${OPENGL_LIBRARIES} ${GLUT_LIBRARIES})