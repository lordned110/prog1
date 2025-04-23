#include <iostream>
#include <thread>
#include <vector>
#include <cmath>

void cpumax() {
    volatile double x = 0.0001;
    while (true) {
        x *= x;
        x = sqrt(x);
    }
}

int main() {
    std::vector<std::thread> threads;
    for (unsigned int i = 0; i < cpu_count; ++i) {
        threads.emplace_back(cpumax);
    }

    for (auto& t : threads) t.join();
    return 0;
}
