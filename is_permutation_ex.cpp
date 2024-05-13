#include<vector>
#include<iostream>
#include<string>
#include<algorithm>
#include<execution>

template<typename T>
void print(T& v) {
    for (auto a : v) std::cout << a << " ";
    std::cout << '\n';
}

void case1() {
    std::string s{ "lappet" };
    std::string p{ "applet" };
    if (std::is_permutation(s.begin(), s.end(), p.begin())) {
        std::cout << p << " is a permutation of " << s << '\n';
    }
    else {
        std::cout << "Two words are not a permutation of each other\n";
    }
}

void case2() {
    std::vector<int> v{ 1,2,3,4,5 };
    std::vector<int> p{ 5,2,1,3,4,9,0,1,1 };
    if (std::is_permutation(v.begin(), v.end(), p.begin(), p.begin() + 5)){
        std::cout << "Two vectors are permutation of each other\n";
    }
    else {
        std::cout << "Two vectors are not a permutation of each other\n";
    }
}

int main() {
    case1();
    case2();
    return 0;
}