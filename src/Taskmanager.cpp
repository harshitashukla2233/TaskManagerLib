#include "TaskManager.h"
#include <sstream>

void TaskManager::addTask(const std::string& name) {
    std::lock_guard<std::mutex> lock(mutex_);
    tasks_[name] = "Not Started"; // default status
}

void TaskManager::removeTask(const std::string& name) {
    std::lock_guard<std::mutex> lock(mutex_);
    tasks_.erase(name);
}

std::string TaskManager::listTasks() const {
    std::lock_guard<std::mutex> lock(mutex_);
    std::ostringstream oss;
    for (const auto& task : tasks_) {
        oss << task.first << " [" << task.second << "]\n";
    }
    return oss.str();
}

void TaskManager::updateTaskStatus(const std::string& name, const std::string& status) {
    std::lock_guard<std::mutex> lock(mutex_);
    auto it = tasks_.find(name);
    if (it != tasks_.end()) {
        it->second = status;
    }
}
