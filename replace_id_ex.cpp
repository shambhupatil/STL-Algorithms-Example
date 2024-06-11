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
    std::replace(begin(v),end(v),5,10);
    print(v);
}

void case2(){
    std::vector<std::string> v{"a","b","aa","bbb"};
    std::replace_if(begin(v),end(v),[](std::string a){return a.size()%2==1;},"z");
    print(v);
}

int main(){
    case1();
    case2();
}