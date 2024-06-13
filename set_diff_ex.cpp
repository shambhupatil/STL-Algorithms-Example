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
    std::vector<int> v{1,2,3,4,5,6};
    std::vector<int> u{1,2,3,4,5};
    std::vector<int> w(10);
    std::set_difference(begin(v),end(v),begin(u),end(u),begin(w));
    print(w);
}

void case2(){
    std::vector<int> v{5,4,3,2,-1};
    std::vector<int> u{-1,-2,-3};
    std::vector<int> w(5);
    std::set_difference(begin(v),end(v),begin(u),end(u),begin(w),[](int a,int b) {return a>b;});
    print(w);
}


int main(){
    case1();
    case2();
}