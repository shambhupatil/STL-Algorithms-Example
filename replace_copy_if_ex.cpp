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
    std::vector<int> u(10);
    std::replace_copy(begin(v),end(v),begin(u),5,10);
    print(u);
}

void case2(){
    std::vector<std::string> v{"a","b","aa","bbb"};
    std::vector<std::string> u(10);
    std::replace_copy_if(begin(v),end(v),begin(u),[](std::string a){return a.size()%2==1;},"z");
    print(u);
}

int main(){
    case1();
    case2();
}