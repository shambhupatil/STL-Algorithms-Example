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
    std::vector<int> v{3,4,0,5,2,1};
    std::stable_partition(begin(v),end(v),[](int i){return i%2==0;});
    print(v);
}



int main(){
    case1();
}