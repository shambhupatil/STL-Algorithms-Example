#include<algorithm>
#include<vector>
#include<iostream>
#include<string>

template<typename T>
void print(std::vector<T>& v) {
    for (auto a : v) std::cout << a << " ";
    std::cout << '\n';
}


void case1(){
    std::vector<int> v{1,2,3,4,5,6,5};
    std::reverse(begin(v),end(v));
    print(v);
}

void case2(){
    std::vector<std::string> v{"a","b","aa","bbb"};
    std::vector<std::string> u(10);
    std::reverse_copy(begin(v),end(v),begin(u));
    print(u);
}

int main(){
    case1();
    case2();
}