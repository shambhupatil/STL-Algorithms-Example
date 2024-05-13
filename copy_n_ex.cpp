#include<algorithm>
#include<vector>
#include<iostream>

void case1() {
	std::vector<int> v{ 1,2,3,4,5,0,0,0,0 };
	std::copy_n(v.begin(), 4, v.begin() + 5);
	for (auto it = v.begin(); it != v.end(); it++) std::cout << *it << " "; // Output: 1 2 3 4 5 1 2 3 4
	std::cout << '\n';
}

int main() {
	case1();
	return 0;
}