#include<algorithm>
#include<vector>
#include<iostream>
#include<string>

template<typename T>
void print(std::vector<T>& v) {
    for (auto a : v) std::cout << a << " ";
    std::cout << '\n';
}


void case1(){
    std::vector<int> u{1,2,3,4,5,6,5};
    std::vector<int> v{2,5,4};
    auto it = std::search(begin(u),end(u),begin(v),end(v));
    if(it!=end(u)){
        std::cout<<"Elements found at "<<distance(begin(u),it)<<"th index\n";
    }else{
        std::cout<<"No range not present\n";
    }
}

void case2(){
    std::vector<std::string> u{"a","bb","ccc","d","e"};
    std::vector<int> v{1,2,3,1};
    auto it = std::search(begin(u),end(u),begin(v),end(v),[](std::string a, int b){
        return a.size()==b;
    });
    if(it!=end(u)){
        std::cout<<"Elements found at "<<distance(begin(u),it)<<"th index\n";
    }else{
        std::cout<<"No range not present\n";
    }
}

void case3(){
    std::vector<int> u{1,2,3,3,3,3,5,4};
    auto it = std::search_n(begin(u),end(u),4,3);
    if(it!=end(u)){
        std::cout<<"Sequence found at "<<distance(begin(u),it)<<"th index\n";
    }
    else{
        std::cout<<"Sequence not found\n";
    }
}

void case4(){
    std::vector<std::string> u{"a","b","c","dd","ff","cc"};
    auto it = std::search_n(begin(u),end(u),3,1,[](std::string a, int b){
        return a.size()==b;
    });
    if(it!=end(u)){
        std::cout<<"Sequence found at "<<distance(begin(u),it)<<"th index\n";
    }
    else{
        std::cout<<"Sequence not found\n";
    }
}

int main(){
    case1();
    case2();
    case3();
    case4();
}