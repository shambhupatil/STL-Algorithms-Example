#include<vector>
#include<iostream>
#include<string>
#include<algorithm>
#include<execution>

template<typename T>
void print(T& v) {
    for (auto a : v) std::cout << a << " ";
    std::cout << '\n';
}

void case1() {
    std::vector<int> v{ 1,11,13,19,5,10,20,15 };
    if (std::is_partitioned(v.begin(), v.end(), [](int i) {return i % 5 != 0; })) {
        std::cout << "Vector is partitioned\n";
    }
    else {
        std::cout << "Vector is not partitioned\n";
    }
}

int main() {
    case1();

    return 0;
}