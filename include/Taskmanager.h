#ifndef TASKMANAGER_H
#define TASKMANAGER_H

#include <string>
#include <unordered_map>
#include <mutex>

class TaskManager {
public:
    void addTask(const std::string& name);
    void removeTask(const std::string& name);
    std::string listTasks() const;
    void updateTaskStatus(const std::string& name, const std::string& status);

private:
    std::unordered_map<std::string, std::string> tasks_;
    mutable std::mutex mutex_;
};

#endif
