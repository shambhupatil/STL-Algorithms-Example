#include<algorithm>
#include<vector>
#include<iostream>
#include<string>
#include<random>

template<typename T>
void print(std::vector<T>& v) {
    for (auto a : v) std::cout << a << " ";
    std::cout << '\n';
}

void case1(){
    std::vector<int> v{1,1,2,2,2,3,4,5};
    auto it = std::upper_bound(begin(v),end(v),2);
    if(it==end(v)){
        std::cout<<"No element greater than 2 found\n";
    }else{
        std::cout<<"Element greater than 2 is at "<<distance(begin(v),it)<<" index\n";
    }
}

void case2(){
    std::vector<std::string> v{"a","b","aa","bb","aaa","bbb"};
    auto it = std::upper_bound(begin(v),end(v),"aaa",[](std::string i, std::string j){
        if(i.size()<j.size()) return true;
        else if(i.size()==j.size()) return i<j;
        else return false;
    });
    if(it==end(v)){
        std::cout<<"No element greater than aaa found\n";
    }else{
        std::cout<<"Element greater than aaa is at "<<distance(begin(v),it)<<" index\n";
    }
}

// Greater than
int main(){
    case1();
    case2();
}