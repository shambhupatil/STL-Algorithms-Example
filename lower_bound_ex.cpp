#include<algorithm>
#include<vector>
#include<iostream>

template<typename T>
void print(std::vector<T>& v) {
    for (auto a : v) std::cout << a << " ";
    std::cout << '\n';
}
void case1() {
    std::vector<int> v{ 1,2,3,4,5,6,6,6,6,6,6,7 };
    auto it = std::lower_bound(begin(v), end(v), 6);
    if (it == end(v)) {
        std::cout << "Element not found\n";
    }
    else {
        std::cout << "Element found at " << std::distance(begin(v), it) << " index\n";
    }
}

void case2() {
    std::vector<int> v{ 1,2,3,4,5 };
    auto it = std::lower_bound(begin(v), end(v), 6);
    if (it == end(v)) {
        std::cout << "Element not found\n";
    }
    else {
        std::cout << "Lower bound is at " << std::distance(begin(v), it) << " index\n";
    }
}


bool custom_comp(std::string a, std::string b) {
    if (a.size() < b.size()) return true;
    else if (a.size() == b.size()) return false;
    else return a < b;
};
void case3() {
    std::vector<std::string> v{ "a","bbb","cc","dddd","dd","ddd","zzz","z" };
    std::sort(begin(v), end(v), custom_comp);
    print(v);
    auto it = std::lower_bound(begin(v), end(v), "ccc", custom_comp);
    if (it == end(v)) {
        std::cout << "Element not found\n";
    }
    else {
        std::cout << "Lower bound is at " << std::distance(begin(v), it) << " index\n";
    }
}




int main() {
    case1();
    case2();
    case3();

    return 0;
}