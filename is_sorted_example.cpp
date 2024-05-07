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
    std::vector<int> v{ 1,2,3,4,5,6 };
    if (std::is_sorted(begin(v), end(v))) {
        std::cout << "The range is sorted\n";
    }
    else {
        std::cout << "The range is not sorted\n";
    }
}

void case2() {
    std::vector<std::string> v{ "a","bb","aaa","bbb","aaaa","dddd","mmmmmm" };
    if (std::is_sorted(begin(v), end(v), [](std::string a, std::string b) {
        if (a.size() < b.size()) return true;
        else if (a.size() == b.size()) return a < b;
        return false;
        })) {
        std::cout << "The range is sorted\n";
    }
    else {
        std::cout << "The range is not sorted\n";
    }
}

int main() {
    case1();
    case2();
    return 0;
}