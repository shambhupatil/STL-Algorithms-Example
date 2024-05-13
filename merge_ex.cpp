#include<algorithm>
#include<vector>
#include<iostream>

template<typename T>
void print(std::vector<T>& v) {
    for (auto a : v) std::cout << a << " ";
    std::cout << '\n';
}

void case1() {
    std::vector<int> v{ 1,2,3,4,5 };
    std::vector<int> u{ 10,20,30 };
    std::vector<int> w(10);
    std::merge(begin(v), end(v), begin(u), end(u), begin(w));
    print(w);
}

void case2() {
    std::vector<std::string> v{ "a","abc","zzzz" };
    std::vector<std::string> u{ "","yy" };
    std::vector<std::string> w(20);
    std::merge(begin(v), end(v), begin(u), end(u), begin(w));
    print(w);
}

int main() {
    case1();
    case2();
    return 0;
}