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
    std::prev_permutation(begin(v), end(v));
    print(v);
}


int main() {
    case1();
    return 0;
}