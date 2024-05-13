#include<vector>
#include<iostream>
#include<string>
#include<algorithm>
#include<execution>

template<typename T>
void print(T& v) {
    for (auto a : v) std::cout << a << " ";
    std::cout << '\n';
}

void case1() {
    std::vector<int> v{ 1,1000,2,3,4,5 };
    print(v); //1 1000 2 3 4 5
    std::inplace_merge(v.begin(), v.begin() + 2, v.end());
    print(v); // 1 2 3 4 5 1000 
}

bool custom_comp(const std::string& a, const std::string& b) {
    if (a.size() == b.size()) return a < b;
    return a.size() < b.size();
}

void case2() {
    std::vector<std::string> v{ "a","b","dd","c","cc","ccc" };
    print(v); //a b dd c cc ccc 
    std::inplace_merge(v.begin(), v.begin() + 3, v.end(), custom_comp);
    print(v); //a b c cc dd ccc 
}

int main() {
    case1();
    case2();

    return 0;
}