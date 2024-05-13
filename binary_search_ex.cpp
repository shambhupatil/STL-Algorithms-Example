#include<algorithm>
#include<vector>
#include<iostream>
#include<string>

void case_true() {
	std::vector<int> v{ 1,2,3,4,4,5,6,7 };
	if (std::binary_search(v.begin(), v.end(), 3)) {
		std::cout << "Element found\n";
	}
	else {
		std::cout << "Element not found\n";
	}
}

void case_false() {
	std::vector<int> v{ 1,2,3,4,5,6,7 };
	if (std::binary_search(v.begin(), v.end(), 100)) {
		std::cout << "Element found\n";
	}
	else {
		std::cout << "Element not found\n";
	}
}

void case_custom_compare() {
	std::vector<std::string> v{ "a","bb","ccc","ddd","eeee","fffff","gggggg" };
	if (std::binary_search(v.begin(), v.end(), "fffff", [](std::string a, std::string b) {
		return a.size() < b.size();
		})) {
		std::cout << "Element found\n";
	}
	else {
		std::cout << "Element not found\n";
	}
}

int main() {
	case_true();
	case_false();
	case_custom_compare();
	return 0;
}