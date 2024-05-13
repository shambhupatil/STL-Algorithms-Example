#include<iostream>
#include<vector>
#include<algorithm>

void case1() {
    std::vector<int> v{ 1,2,3,4,5,6,7 };
    auto it = std::find(v.begin(), v.end(), 5);
    if (it == v.end()) {
        std::cout << "Element not found\n";
    }
    else {
        std::cout << "Element found at index " << std::distance(v.begin(), it) << '\n';
    }
}

void case2() {
    std::vector<int> v{ 1,2,3,4,5,6,7 };
    auto it = std::find(v.begin(), v.begin() + 5, 7);
    if (it == v.begin() + 5) {
        std::cout << "Element not found\n";
    }
    else {
        std::cout << "Element found at index "<<std::distance(v.begin(),it)<<'\n';
    }
}

int main() {
    case1();
    case2();
    return 0;
}