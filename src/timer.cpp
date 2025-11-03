#include "timer.hpp"

Timer::Timer() : is_running(false){}

void Timer::start() {
    if (!is_running) {
        start_time = std::chrono::steady_clock::now();
        is_running = true;
    }
}

void Timer::stop() {
    if (is_running) {
        end_time = std::chrono::steady_clock::now();
        is_running = false;
    }
}

long Timer::elapsed() {
    if (is_running) {
        auto duration = std::chrono::steady_clock::now() - start_time;
        return std::chrono::duration_cast<std::chrono::seconds>(duration).count();
    }else if (start_time != std::chrono::time_point<std::chrono::steady_clock>{}) {
        auto duration = end_time - start_time;
        return std::chrono::duration_cast<std::chrono::seconds>(duration).count();;
    }else {
        return 0;
    }
}