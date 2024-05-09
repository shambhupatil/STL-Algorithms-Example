#include<algorithm>
#include<vector>
#include<iostream>

template<typename T>
void print(std::vector<T>& v) {
    for (auto a : v) std::cout << a << " ";
    std::cout << '\n';
}

void max_heap() {
    std::vector<int> v{ 1,3,2,4,5,6 };
    std::make_heap(begin(v), end(v));
    print(v);

    std::pop_heap(begin(v), end(v));
    print(v);
    v.pop_back();


    v.push_back(10);
    std::push_heap(begin(v), end(v));
    print(v);
}

void min_heap() {
    std::vector<int> v{ 1,3,2,4,5,6 };
    std::make_heap(begin(v), end(v), std::greater<>());
    print(v);

    std::pop_heap(begin(v), end(v), std::greater<>());
    print(v);
    v.pop_back();


    v.push_back(10);
    std::push_heap(begin(v), end(v), std::greater<>());
    print(v);
}

int main() {
    max_heap();
    min_heap();

}