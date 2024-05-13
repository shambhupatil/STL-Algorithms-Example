#include<algorithm>
#include<vector>
#include<iostream>


void case1() {
	std::vector<int> v{ 1,2,3,4,5,6,7,8 };
	int n = std::count_if(v.begin(), v.end(), [](int i) {return i % 2; });
	std::cout << "There are " << n << " number of odd numbers\n";
}


void case2() {
	std::vector<std::string> v{ "cats","dog","sand","and","cat" };
	int n = std::count_if(v.begin(), v.end(), [](std::string s) {return s.size()==3; });
	std::cout << "There are " << n << " number of words with size 3\n";
}

int main() {
	case1();
	case2();
	return 0;
}