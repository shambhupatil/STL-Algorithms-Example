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
    std::vector<int> v{ 1,2,3,4,5,6,7,8,9 };
    std::vector<int> c{ 2,4,5,8,9 };
    if (std::includes(v.begin(), v.end(), c.begin(), c.end())) {
        std::cout << "Subsequence exists\n";
    }
    else {
        std::cout << "Subsequence does not exists\n";
    }
}

void case2() {
    std::vector<std::string> v{ "a","b","bb","cc","ccc" };
    std::vector<std::string> c{ "a","bb","ccc" };
    if (std::includes(begin(v), end(v), begin(c), end(c), [](std::string a, std::string b) {return a.size() < b.size(); })) {
        std::cout << "Subsequence exists\n";
    }
    else {
        std::cout << "Subsequence does not exists\n";
    }
}

int main() {
    case1();
    case2();

    return 0;
}