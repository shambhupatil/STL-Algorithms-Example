#include<algorithm>
#include<vector>
#include<iostream>

template<typename T>
void print(std::vector<T>& v) {
    for (auto a : v) std::cout << a << " ";
    std::cout << '\n';
}


void case1() {
    std::vector<int> v{ 2,7,3,5,8,99,5,2,1,3,55,100 };
    std::vector<int> u(10);
    std::vector<int> w(10);
    // Returns last iterator of u and w
    auto it = std::partition_copy(begin(v), end(v), begin(u), begin(w), [](int i) {return i > 6; });
    print(u);
    print(w);
}


int main() {
    case1();
    return 0;
}