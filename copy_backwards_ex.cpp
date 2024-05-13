#include<algorithm>
#include<vector>
#include<iostream>


void case1() {
	std::vector<int> v(10);
	for (int i = 0; i < 6; i++) v[i] = i + 1;;

	std::copy_backward(v.begin(), v.begin() + 5, v.begin()+7);
	for (int a : v) {
		std::cout << a << " "; //Output: 1 2 1 2 3 4 5 0 0 0
	}
	std::cout << '\n';
}

int main() {
	case1();
	return 0;
}