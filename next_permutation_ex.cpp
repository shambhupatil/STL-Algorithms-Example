#include<algorithm>
#include<vector>
#include<iostream>

template<typename T>
void print(std::vector<T>& v) {
    for (auto a : v) std::cout << a << " ";
    std::cout << '\n';
}

void case1() {
    std::vector<int> v{ 1,2,3,9,5 };
    std::next_permutation(begin(v), end(v));
    print(v);

}

void case2() {
    std::vector<std::string> v{ "a","bb","ccc","z" };
    std::next_permutation(begin(v), end(v), [](std::string a, std::string b) {
        if (a.size() < b.size()) return true;
        else if (a.size() > b.size()) return false;
        else return a < b;
        });
    print(v);

}



int main() {
    case1();
    case2();
    return 0;
}