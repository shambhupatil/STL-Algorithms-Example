#include<algorithm>
#include<vector>
#include<iostream>

void case1() {
	std::vector<int> v{ 0,1,2,3,4,5,6,7,8,9,0,0,0,0,0 };
	std::copy_if(v.begin(), v.begin() + 10, v.begin() + 10, [](int i) {return i % 2; });
	for (auto it = v.begin(); it != v.end(); it++) {
		std::cout << *it << " "; //Output: 0 1 2 3 4 5 6 7 8 9 1 3 5 7 9
	}
	std::cout << '\n';
}

int main() {
	case1();
	return 0;
}