#include<vector>
#include<iostream>
#include<string>
#include<algorithm>
#include<execution>

template<typename T>
void print(T& v) {
	for (auto a : v) std::cout << a << " ";
	std::cout << '\n';
}

void case1() {
	std::vector<int> v(10);
	std::generate(v.begin(), v.end(), []() {return 10; });
	print(v);
}

int f() {
	static int i{};
	return ++i;
}

void case2() {
	std::vector<int> v(10);
	std::generate(v.begin(), v.end(), f); //increment
	print(v);
}

void case3() {
	std::vector<int> v(15);
	std::generate(v.begin(), v.end(), [a = 0, b = 1]() mutable {a += b; std::swap(a, b); return b; }); // fibonacci
	print(v);
}

void case4() {
	std::vector<int> v(20);
	std::generate(std::execution::par, v.begin(), v.end(), [a = 0, b = 1]() mutable {a += b; std::swap(a, b); return b; });
	print(v);
}

int main() {
	case1();
	case2();
	case3();
	case4();
	return 0;
}