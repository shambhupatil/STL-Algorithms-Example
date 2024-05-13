#include<algorithm>
#include<vector>
#include<iostream>

template<typename T>
void print(std::vector<T>& v) {
    for (auto a : v) std::cout << a << " ";
    std::cout << '\n';
}

void max_ele() {
    std::vector<int> v{ 1,2,3,4,100,9,10 };
    auto it = max_element(begin(v), end(v));
    if (it == end(v)) {
        std::cout << "Range is empty\n";
    }
    else {
        std::cout << "The largest element is " << *it << " and is at " << distance(begin(v), it) << " index\n";
    }
}

void min_ele() {
    std::vector<int> v{ 1,2,3,4,100,9,10 };
    auto it = min_element(begin(v), end(v));
    if (it == end(v)) {
        std::cout << "Range is empty\n";
    }
    else {
        std::cout << "The smallest element is " << *it << " and is at " << distance(begin(v), it) << " index\n";
    }
}

int main() {
    max_ele();
    min_ele();

}