#include<iostream>
#include<vector>
#include<algorithm>

//Checks for any one element of the sequence

void case1() {
    std::vector<int> v{ 1,2,3,4,5,1,2,3,4 };
    std::vector<int> u{ 2,3,4 };
    auto it = std::find_first_of(v.begin(), v.end(), u.begin(), u.end());
    if (it == v.end()) {
        std::cout << "No element of sequence found\n";
    }
    else {
        std::cout << "An element of sequence found at index " << std::distance(v.begin(), it) << '\n';
    }
}

void case2() {
    std::vector<int> v{ 1,2,3,4,5,2,2,2,4 };
    std::vector<int> u{ 4,5,2 }; // 2 will be found at index 1
    auto it = std::find_first_of(v.begin(), v.end(), u.begin(), u.end(), [](int i, int j) {return i==j; });
    if (it == v.end()) {
        std::cout << "No element of sequence found\n";
    }
    else {
        std::cout << "An element of sequence found at index " << it- v.begin() << '\n';
    }
}

int main() {
    case1(); //An element of sequence found at index 1
    case2(); //An element of sequence found at index 1
    return 0;
}