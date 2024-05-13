#include<algorithm>
#include<vector>
#include<iostream>
#include<string>


void element_exist() {
	std::vector<int> v{ 1,2,3,4,5,6,7,7 };
	auto it = std::adjacent_find(v.begin(), v.end());
	if (it == v.end()) {
		std::cout << "No Adjacent elemnt found\n";
	}
	else {
		std::cout << "Adjacent element found at " << distance(v.begin(), it) << " and is " << *it << '\n';
	}
}


void element_doesnot_exist() {
	std::vector<int> v{ 1,2,3,4,5,6,7 };
	auto it = std::adjacent_find(v.begin(), v.end());
	if (it == v.end()) {
		std::cout << "No Adjacent elemnt found\n";
	}
	else {
		std::cout << "Adjacent element found at " << distance(v.begin(), it) << " and is " << *it << '\n';
	}
}

bool custom_predicate(int i, int j) {
	return (i * 11 == j) || (j * 11 == i);
}
void element_exist_with_predicate() {
	std::vector<int> v{ 1,2,3,4,44,6,7 };
	auto it = std::adjacent_find(v.begin(), v.end(), custom_predicate);
	if (it == v.end()) {
		std::cout << "No Adjacent elemnt found\n";
	}
	else {
		std::cout << "Adjacent element found at " << distance(v.begin(), it) << " and is " << *it << '\n';
	}
}



int main() {
	element_exist();
	element_doesnot_exist();
	element_exist_with_predicate();
	return 0;
}