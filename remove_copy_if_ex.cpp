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
    std::vector<int> u(5);
    auto it = std::remove_copy(begin(v), end(v), begin(u), 1);
    print(u);
}

void case2() {
    std::vector<int> v{ 1,2,3,4,5,6 };
    std::vector<int> u(5);
    auto it = std::remove_copy_if(v.begin(), v.end(), begin(u), [](int i) {return i % 2 == 0; });
    print(u);
}


int main() {
    case1();
    case2();
    return 0;
}