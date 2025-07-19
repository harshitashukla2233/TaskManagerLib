# TaskManager Library

A simple C++ TaskManager library with functions to add, remove, list, and update task statuses.  
Built as a dynamic library (.dll on Windows, .so on Linux) with a test executable.

---

## Features

- Add tasks by name  
- Remove tasks by name  
- List all tasks with their status  
- Update the status of a task  

---

## Project Structure

TaskManagerLib/

├── include/

│ └── TaskManager.h

├── src/

│ ├── TaskManager.cpp

│ └── test_main.cpp

├── build/

├── CMakeLists.txt

└── README.md


---

## Prerequisites

- C++17 compatible compiler (e.g., g++, clang++, MSVC)  
- CMake (version 3.10 or higher)  
- Ninja build system (optional, or use default generators)  

---

## Building the Library and Test Executable

1. Open a terminal or command prompt.  
2. Navigate to the project root folder:  
   cd TaskManagerLib
Create and enter a build directory:

mkdir build

cd build

Generate build files with CMake:

cmake ..

Build the library and test executable:

cmake --build .

Running the Test Executable

On Windows:

.\test_task_manager.exe

On Linux/macOS:

./test_task_manager
