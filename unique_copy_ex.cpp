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
    std::vector<int> v{1,1,2,1,2,2,3,4,5,1,3};
    auto it = std::unique(begin(v),end(v));
    v.erase(it,end(v));
    print(v);
}

void case2(){
    std::vector<std::string> v{"a","b","aa","bb","bbb","aaa"};
    auto it = std::unique(begin(v),end(v),[](std::string i, std::string j){return i.size()==j.size();});
    v.erase(it,end(v));
    print(v);
}

void case3(){
    std::vector<int> v{1,1,2,1,2,2,3,4,5,1,3};
    std::vector<int> u(10,-1);
    std::unique_copy(begin(v),end(v),begin(u));
    print(u);
}


int main(){
    case1();
    case2();
    case3();
}