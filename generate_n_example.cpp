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
    std::vector<int> v(100);
    std::generate_n(v.begin(), 10, []() {return 10; });
    print(v);
}

void case2() {
    std::vector<int> v(20);
    std::generate_n(v.begin(), 20, []() {return 11; });
    print(v);
}

void case3() {
    std::vector<std::string> v; // If not initialized use back inserter
    std::generate_n(std::back_inserter(v), 10, [a = std::string(""), b = '`']()mutable {++b; a += b; return a; });
    print(v);
}

void case4() {
    std::vector<int> v(10); // Use back_inserter if not initialized of N greater than v.size()
    std::generate_n(std::back_inserter(v), 20, []() {return 11; });
    print(v);
}

int main() {
    case1();
    case2();
    case3();
    case4();
    return 0;
}