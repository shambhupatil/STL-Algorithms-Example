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
    std::rotate(begin(v),begin(v)+3,end(v));
    print(v);
}

void case2(){
    std::vector<std::string> v{"a","b","c","d","e"};
    std::vector<std::string> u(10);
    std::rotate_copy(begin(v),begin(v)+3,end(v),begin(u));
    print(u);
}

int main(){
    case1();
    case2();
}