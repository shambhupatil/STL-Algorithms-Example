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
    std::sort(begin(v),end(v));
    print(v);
}

void case2(){
    std::vector<int> v{1,2,3,4,5,6,7};
    std::sort(begin(v),end(v),[](int i, int j){return i>j;});
    print(v);
}

void case3(){
    std::vector<std::string> v{"a","bb","b","aa"};
    std::sort(begin(v),end(v));
    print(v);
}

void case4(){
    std::vector<std::string> v{"a","bb","b","aa"};
    std::stable_sort(begin(v),end(v),[](std::string i, std::string j){
        return i.size()<j.size();
    });
    print(v);
}


int main(){
    case1();
    case2();
    case3();
    case4();
}