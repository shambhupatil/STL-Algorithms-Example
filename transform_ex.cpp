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
    std::vector<int> w(10);
    std::transform(begin(v),end(v),begin(w),[](int i){return i*11;});
    print(w);
}

void case2(){
    std::vector<int> v{1,2,3,4,5};
    std::vector<int> u{0,1,2,3,4};
    std::vector<int> w(10);
    std::transform(begin(v),end(v),begin(u),begin(w),[](int i, int j){return i*j;});
    print(w);
}



int main(){
    case1();
    case2();
}