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
    auto it = std::remove(v.begin(), v.end(), 1);
    v.erase(it, end(v));
    print(v);
}

void case2() {
    std::vector<int> v{ 1,2,3,4,5,6 };
    auto it = std::remove_if(v.begin(), v.end(), [](int i) {return i % 2 == 0; });
    v.erase(it, end(v));
    print(v);
}


int main() {
    case1();
    case2();
    return 0;
}