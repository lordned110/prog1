#include <iostream>
#include <array>
#include <string>

struct Pair {
    int a;
    int b;
};

void sort_by_a(std::array<Pair, 5>& data) {
    for (size_t i = 0; i < data.size(); ++i) {
        for (size_t j = 0; j < data.size() - 1; ++j) {
            if (data[j].a > data[j + 1].a) {
                std::swap(data[j], data[j + 1]);
            }
        }
    }
}

void print_separator(const std::string& sep) {
    std::cout << sep << '\n';
}

void print_header() {
    print_separator("===");
    std::cout << "Output:\n";
    print_separator("---");
}


void process_and_print(const std::array<Pair, 5>& data) {
    for (const auto& item : data) {
        int r = item.a;
        int u = item.b;
        int result = 0;

        if (r % 2 == 0) {
            result = (u % 2 == 0) ? r * u : r + u;
        } else {
            result = (u % 2 == 0) ? r - u : r;
        }

        std::cout << result << '\n';
    }
}

void process(std::array<Pair, 5>& data) {
    sort_by_a(data);
    print_header();
    process_and_print(data);
}

int main() {
    std::array<Pair, 5> values{{
        {5, 1},
        {2, 4},
        {3, 7},
        {1, 6},
        {4, 5}
    }};

    process(values);
    return 0;
}
