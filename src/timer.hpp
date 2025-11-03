#pragma once
#include <chrono>

class Timer {
private:
    std::chrono::time_point<std::chrono::steady_clock> start_time;
    std::chrono::time_point<std::chrono::steady_clock> end_time;
    bool is_running;
public:
    Timer();
    void start();
    void stop();
    long elapsed();
};
