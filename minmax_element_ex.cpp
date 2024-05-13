#include<algorithm>
#include<vector>
#include<iostream>

template<typename T>
void print(std::vector<T>& v) {
    for (auto a : v) std::cout << a << " ";
    std::cout << '\n';
}

void case1() {
    std::vector<int> v;
    auto a = std::minmax_element(begin(v), end(v));
    if (a.first == begin(v) && a.second == begin(v)) {
        std::cout << "Empty range or only one element present\n";
        return;
    }
    std::cout << *a.first << " is min element\n";
    std::cout << *a.second << " is max element\n";

}

void case2() {
    std::vector<int> v{ 5,4,3,2,1 };
    auto a = std::minmax_element(begin(v), end(v), std::greater<>());
    if (a.first == begin(v) && a.second == begin(v)) {
        std::cout << "Empty range or only one element present\n";
        return;
    }
    std::cout << *a.first << " is min element\n";
    std::cout << *a.second << " is max element\n";

}


int main() {
    case1();
    case2();
    return 0;
}