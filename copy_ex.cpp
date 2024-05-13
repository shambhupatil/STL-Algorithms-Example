#include<algorithm>
#include<iostream>
#include<vector>

void case1() {
	std::vector<int> v{ 1,2,3,4,5,6,7,8,0,0,0,0 };
	std::vector<int> a(8);

	std::copy(v.begin(), v.begin()+6, v.begin()+6); // returns the iterator to the end of destination range
	for (auto it = v.begin(); it != v.end(); it++) {
		std::cout << *it << " "; // output: 1 2 3 4 5 6 1 2 3 4 5 6
	}
	std::cout << '\n';
}

int main() {
	case1();
	return 0;
}