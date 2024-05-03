#include<iostream>
#include<vector>
#include<algorithm>


void print(std::vector<int>& v) {
	for (int i = 0; i < v.size(); i++) std::cout << v[i] << " ";
	std::cout << '\n';
}

void case1() {
	std::vector<int> v(10);
	std::fill(v.begin(), v.begin() + 5, 10);
	print(v);
	std::fill(v.begin(), v.end(), 11);
	print(v);
}

int main() {
	case1();
	return 0;
}