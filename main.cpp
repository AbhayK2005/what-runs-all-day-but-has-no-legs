#include "src/timer.hpp"
#include <thread>
#include <iostream>

int main() {
  Timer timer;
  timer.start();
  std::this_thread::sleep_for(std::chrono::seconds(5));
  timer.stop();
  std::cout << "Time elapsed: " << timer.elapsed() << " seconds";
  return 0;
}
