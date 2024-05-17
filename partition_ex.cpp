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
    auto it = std::partition(begin(v), end(v), [](int i) {return i > 6; });
    print(v);
    std::cout << "The current iterator points to " << distance(begin(v), it) << "th index\n";
}


int main() {
    case1();
    return 0;
}