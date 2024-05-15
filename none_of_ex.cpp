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
    if (std::none_of(begin(v), end(v), [](int i) {return i > 0; })) {
        std::cout << "Some the elements are not greater than 0\n";
    }
    else {
        std::cout << "All the elements are greater than 0\n";
    }

}



int main() {
    case1();

    return 0;
}