#include<algorithm>
#include<vector>
#include<iostream>


void case_sorted() {
	std::vector<int> v{ 1,2,3,4,5,5,5,5 };
	std::pair<std::vector<int>::iterator, std::vector<int>::iterator> bound = std::equal_range(v.begin(), v.end(), 5);
	if(bound.first!=v.end()){
		std::cout << "Element found between "<<std::distance(v.begin(),bound.first)<<" and "<< std::distance(v.begin(),bound.second)<<" index\n";
	}
	else {
		std::cout << "Element not found\n";
	}
}

bool comp(int i, int j) {
	if (i % 2 == 0 && j % 2 == 0) return i < j;
	if (i % 2 == 1 && j % 2 == 1) return i < j;
	if (i % 2 == 0 && j % 2 == 1) return true;
	return false;
}
void case_partitioned() {
	std::vector<int> v{ 2,4,4,4,6,1,2,3 };
	std::pair<std::vector<int>::iterator, std::vector<int>::iterator> bound = std::equal_range(v.begin(), v.end(), 4, comp);
	if (bound.first != v.end()) {
		std::cout << "Element found between " << std::distance(v.begin(), bound.first) << " and " << std::distance(v.begin(), bound.second) << " index\n";
	}
	else {
		std::cout << "Element not found\n";
	}
}

int main() {
	case_sorted();
	case_partitioned();
	return 0;
}