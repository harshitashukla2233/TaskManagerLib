cmake_minimum_required(VERSION 3.10)
project(TaskManagerLib)

# Create the shared library
add_library(TaskManager SHARED
    src/TaskManager.cpp
)

# Include header files
target_include_directories(TaskManager PUBLIC include)

# Build the test program
add_executable(test_task_manager test/test_main.cpp)
target_include_directories(test_task_manager PRIVATE include)
target_link_libraries(test_task_manager TaskManager)
