#include<algorithm>
#include<vector>
#include<iostream>


void case_equal() {
	std::vector<int> v{ 1,2,3,4,1,2,3 };
	if (std::equal(v.begin(), v.begin() + 3, v.begin() + 4)) {
		std::cout << "The two ranges are equal\n";
	}
	else {
		std::cout << "The two ranges are not equal";
	}
}

void case_not_euqal() {
	std::vector<int> v{ 1,2,3,4,10,20,7,8 };
	if (std::equal(v.begin(), v.begin() + 4, v.begin() + 4, [](int i, int j) {return (i * 10 == j); })) {
		std::cout << "The two ranges are equal\n";
	}
	else {
		std::cout << "The two ranges are not equal";
	}
}


int main() {
	case_equal();
	case_not_euqal();
	return 0;
}