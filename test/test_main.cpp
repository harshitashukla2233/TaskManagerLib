#include "TaskManager.h"
#include <iostream>

int main() {
    TaskManager tm;

    tm.addTask("Buy groceries");
    tm.addTask("Study C++");
    tm.updateTaskStatus("Buy groceries", "Done");

    std::cout << "All Tasks:\n" << tm.listTasks();

    tm.removeTask("Study C++");

    std::cout << "After Removing 'Study C++':\n" << tm.listTasks();

    return 0;
}

