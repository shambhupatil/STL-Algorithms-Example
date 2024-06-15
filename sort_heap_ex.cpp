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
    std::vector<int> v{1,3,2,6,5,6};
    std::make_heap(begin(v),end(v));
    print(v);
    std::sort_heap(begin(v),end(v));
    print(v);
}



int main(){
    case1();
}