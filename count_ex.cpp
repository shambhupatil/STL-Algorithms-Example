#include<algorithm>
#include<vector>
#include<iostream>

void case1() {
	std::vector<int> v{ 1,2,3,4,5,6,6,4,1 };
	int n = std::count(v.begin(), v.end(), 1);
	std::cout << "There are " << n << " number of 1's\n";
}

void case2() {
	std::vector<std::string> v{ "a","aa","a","b"};
	int n = std::count(v.begin(), v.end(), "a");
	std::cout << "There are " << n << " number of a's\n";
}

int main() {
	case1();
	case2();
	return 0;
}