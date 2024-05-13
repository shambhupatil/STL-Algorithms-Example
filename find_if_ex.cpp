#include<iostream>
#include<vector>
#include<algorithm>
#include<string>


void case1() {
    std::vector<int> v{ 1,2,3,4,100,5,6,7 };
    auto it = std::find_if(v.begin(), v.end(), [](int i) {return i >= 100; });
    if (it == v.end()) {
        std::cout << "No element greater than 100 found\n";
    }
    else {
        std::cout << "The element greater than 100 is at index " << distance(v.begin(), it) << '\n';
    }
}


void case2() {
    std::vector<std::string> v{ "a","b","c","d","e" };
    auto it = std::find_if(v.begin(), v.end(), [](std::string s) {return s.size() > 1; });
    if (it == v.end()) {
        std::cout << "No element with size greater than 1 found\n";
    }
    else {
        std::cout << "Element with size greater than 1 is " << *it << '\n';
    }
}


int main() {
    case1();
    case2();
    return 0;
}