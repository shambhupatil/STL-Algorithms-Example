#include<algorithm>
#include<vector>
#include<iostream>
#include<string>


void case_false() {
	std::vector<int> v{ 1,2,3,4,5,6,7 };
	if(std::all_of(v.begin(), v.end(), [](int i){return i==10;})){
		std::cout << "All of the elements are equal to 10'\n";
	}
	else {
		std::cout << "All of the elements are not equal to 10'\n";
	}
}

void case_true() {
	std::vector<int> v{ 10,10,10,10,10,10,10 };
	if (std::all_of(v.begin(), v.end(), [](int i) {return i == 10; })) {
		std::cout << "All of the elements are equal to 10'\n";
	}
	else {
		std::cout << "All of the elements are not equal to 10'\n";
	}
}

int main() {
	case_true();
	case_false();
	return 0;
}