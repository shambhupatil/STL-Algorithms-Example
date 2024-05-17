#include<algorithm>
#include<vector>
#include<iostream>

template<typename T>
void print(std::vector<T>& v) {
    for (auto a : v) std::cout << a << " ";
    std::cout << '\n';
}


// Maximum number of elements copied is min(distance(begin(u),end(u)),distance(begin(v),end(v)))
void case1() {
    std::vector<int> v{ 2,7,3,5,8,99,5,2,1,3,55,100 };
    std::vector<int> u(10, 0);
    std::partial_sort_copy(begin(v), end(v), begin(u), end(u));
    print(u);
}


int main() {
    case1();
    return 0;
}