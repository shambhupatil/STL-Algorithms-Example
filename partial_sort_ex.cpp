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
    std::partial_sort(begin(v), begin(v) + 5, end(v));
    print(v);

}

void case2() {
    std::vector<int> v{ 2,7,3,5,8,99,5,2,1,3,55,100 };
    std::partial_sort(begin(v), begin(v) + 3, end(v), std::greater<int>());
    print(v);
}

int main() {
    case1();
    case2();
    return 0;
}