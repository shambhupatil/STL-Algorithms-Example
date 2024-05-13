#include<algorithm>
#include<vector>
#include<iostream>

template<typename T>
void print(std::vector<T>& v) {
    for (auto a : v) std::cout << a << " ";
    std::cout << '\n';
}

void case1() {
    std::vector<int> v{ 1,2,3,4,5 };
    std::vector<int> u{ 1,2,3,3,5 };
    auto a = std::mismatch(begin(v), end(v), begin(u));
    if (a.first == end(v)) {
        std::cout << "All the elements of the range matched\n";
        return;
    }
    std::cout << "The elements " << *a.first << " and " << *a.second << " mismatched\n";


}

void case2() {
    std::vector<int> v{ 1,2,3,4,5 };
    std::vector<std::string> u{ "a","bb","cc","dddd","eeeee" };
    auto a = std::mismatch(begin(v), end(v), begin(u), [](int a, std::string b) {return a == b.size(); });
    if (a.first == end(v)) {
        std::cout << "All the elements of the range matched\n";
        return;
    }
    std::cout << "The elements " << *a.first << " and " << *a.second << " mismatched\n";

}


int main() {
    case1();
    case2();
    return 0;
}