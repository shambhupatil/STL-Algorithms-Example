#include<iostream>
#include<vector>
#include<algorithm>

//Checks for whole sequence


void case1() {
    std::vector<int> v{ 1,2,3,4,5,1,2,3,4 };
    std::vector<int> u{ 1,2,3 };
    auto it = std::find_end(v.begin(), v.end(), u.begin(), u.end());
    if (it == v.end()) {
        std::cout << "Sequence not found\n";
    }
    else {
        std::cout << "Sequence found at index " << std::distance(v.begin(), it) << '\n';
    }
}

void case2() {
    std::vector<char> v{ 'A','b','A','b','C'};
    std::vector<char> u{ 'A','B','C'};
    auto it = std::find_end(v.begin(), v.end(), u.begin(), u.end(), [](char i, char j) {return std::tolower(i)==std::tolower(j); });
    if (it == v.end()) {
        std::cout << "Sequence not found\n";
    }
    else {
        std::cout << "Sequence found at index " << std::distance(v.begin(), it) << '\n';
    }
}

int main() {
    case1(); //Sequence found at index 5
    case2(); //Sequence found at index 2
    return 0;
}