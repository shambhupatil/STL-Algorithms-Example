#include<algorithm>
#include<vector>
#include<iostream>
#include<string>


void case_true() {
	int i = 0;
	std::vector<int> v{ 1,2,3,4,5,6,10 };
	if (std::any_of(v.begin(), v.end(), [](int i) {return i == 10; })) {
		std::cout << "Atleast one of the elements is equal to 10\n";
	}
	else {
		std::cout << "None of the elements is equal to 10\n";
	}
}


void case_false() {
	int i = 0;
	std::vector<int> v{ 1,2,3,4,5,6,7 };
	if (std::any_of(v.begin(), v.end(), [](int i) {return i == 10; })) {
		std::cout << "Atleast one of the elements is equal to 10\n";
	}
	else {
		std::cout << "None of the elements is equal to 10\n";
	}
}

int main() {
	case_true();
	case_false();
	return 0;
}