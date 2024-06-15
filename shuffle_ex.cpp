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
    std::vector<int> v{1,2,3,4,5,6};
    std::shuffle(begin(v),end(v),std::default_random_engine(10));
    print(v);
}


int someRandomNum(int i){
    return std::rand()%i;
}

// Deprecated
void case2(){
    std::vector<int> v{1,2,3,4,5,6,7};
    std::random_shuffle(begin(v),end(v),someRandomNum);
    print(v);
}


int main(){
    case1();
    case2();
}