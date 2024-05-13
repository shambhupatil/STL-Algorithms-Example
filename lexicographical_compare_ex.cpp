#include<algorithm>
#include<vector>
#include<iostream>

void case1() {
    std::vector<int> v{ 1,2,3,4,5,6,7 };
    std::vector<int> u{ 1,2,3 };
    if (std::lexicographical_compare(begin(v), end(v), begin(u), end(u))) {
        std::cout << "First range is smaller than second range\n";
    }
    else {
        std::cout << "Second range is smaller than first range\n";
    }
}

void case2() {
    std::vector<int> v{ 1,2,3 };
    std::vector<int> u{ 1,2,3,4 };
    if (std::lexicographical_compare(begin(v), end(v), begin(u), end(u))) {
        std::cout << "First range is smaller than second range\n";
    }
    else {
        std::cout << "Second range is smaller than first range\n";
    }
}

void case3() {
    std::vector<int> v{};
    std::vector<int> u{ 1,2,3,4 };
    if (std::lexicographical_compare(begin(v), end(v), begin(u), end(u))) {
        std::cout << "First range is smaller than second range\n";
    }
    else {
        std::cout << "Second range is smaller than first range\n";
    }
}

void case4() {
    std::vector<std::string> v{ "z","cc" };
    std::vector<std::string> u{ "a","bb","zzz" };
    if (std::lexicographical_compare(begin(v), end(v), begin(u), end(u), [](std::string a, std::string b) {
        return a.size() < b.size();
        })) {
        std::cout << "First range is smaller than second range\n";
    }
    else {
        std::cout << "Second range is smaller than first range\n";
    }
}

int main() {
    case1();
    case2();
    case3();
    case4();
    return 0;
}