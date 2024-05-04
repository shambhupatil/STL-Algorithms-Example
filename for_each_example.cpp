#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<execution> //std::execution::par, std::execution::seq, std::execution::par_unseq, std::execution::unseq


void case1() {
    std::vector<int> v(1000);
    for (int i = 0; i < 1000; i++) v[i] = i + 1;
    std::for_each(std::execution::par, v.begin(), v.end(), [](int& i) {i *= i; });
    std::for_each(std::execution::par, v.begin(), v.end(), [](int& i) {std::cout << i << " "; });
    std::cout << '\n';
}

void case2() {
    std::vector<int> v(100);
    for (int i = 0; i < 100; i++) v[i] = i + 1;
    std::for_each(v.begin(), v.end(), [](int& i) {i = 0; std::cout << i << " "; });
    std::cout << '\n';
}



int main() {
    case1();
    case2();
    return 0;
}