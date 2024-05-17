#include<algorithm>
#include<vector>
#include<iostream>

template<typename T>
void print(std::vector<T>& v) {
    for (auto a : v) std::cout << a << " ";
    std::cout << '\n';
}


void case1() {
    std::vector<int> v{ 10,7,100,1,2,3,4,5 };
    // Returns last iterator of u and w
    auto it = std::partition_point(begin(v), end(v), [](int i) {return i > 6; });

    if (it != end(v)) {
        std::cout << "The second partition begins at " << distance(begin(v), it) << " index\n";
    }
    else {
        std::cout << "The the elements satisfy the predicate\n";
    }
}


int main() {
    case1();
    return 0;
}