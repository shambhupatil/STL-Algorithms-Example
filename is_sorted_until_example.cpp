#include<iostream>
#include<vector>
#include<algorithm>

void case1() {
	std::vector<int> v{ 1,2,3,4,5,8,7,6 };
	auto it = std::is_sorted_until(begin(v), end(v));
	if (it == end(v)) {
		std::cout << "The range is sorted\n";
	}
	else {
		std::cout << "The range is sorted untill " << std::distance(begin(v), it) << " index\n";
	}
}


void case2() {
	std::vector<std::string> v{ "a","bb","zzz","dddd" };
	auto it = std::is_sorted_until(begin(v), end(v), [](std::string a, std::string b) {return a.size() < b.size(); });
	if (it == end(v)) {
		std::cout << "The range is sorted\n";
	}
	else {
		std::cout << "The range is sorted untill " << std::distance(begin(v), it) << " index\n";
	}
}

int main() {
	case1();
	case2();
	return 0;
}