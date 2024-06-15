#include<algorithm>
#include<vector>
#include<iostream>
#include<string>
#include<random>

template<typename T>
void print(std::vector<T>& v) {
    for (auto a : v) std::cout << a << " ";
    std::cout << '\n';
}


void case1(){
    std::vector<int> v{1,2,3,4,5};
    std::vector<int> u(10);
    std::swap_ranges(begin(v),end(v),begin(u));
    print(v);
    print(u);
}



int main(){
    case1();
}