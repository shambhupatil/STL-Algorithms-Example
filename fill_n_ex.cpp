#include<iostream>
#include<vector>
#include<algorithm>

template<typename T>
void print(T& v) {
	for (int i = 0; i < v.size(); i++) std::cout << v[i] << " ";
	std::cout << '\n';
}


void case1() {
	std::vector<int> v(10, 1);
	std::fill_n(v.begin(), 5, 11);
	print(v);
}

void case2() {
	std::vector<std::string> v(10, "a");
	auto it = std::fill_n(v.begin() + 5, 10, "aa"); //Might throw  std::bad_alloc or fills the vector starting at index 5 till the end with aa
	print(v);
}

int main() {
	case1();
	case2();
	return 0;
}