#include<algorithm>
#include<vector>
#include<iostream>

template<typename T>
void print(std::vector<T>& v) {
    for (auto a : v) std::cout << a << " ";
    std::cout << '\n';
}

void case1() {
    std::vector<int> v{ 1,2,3,9,5 };
    std::vector<int> u{ 1,2,3,3,5 };
    auto a = std::move(begin(v), end(v), begin(u));
    print(u);
}

int main() {
    case1();
    return 0;
}