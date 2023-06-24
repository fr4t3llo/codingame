#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
int main(){
    int n;
    std::cin >> n; std::cin.ignore();
    std::vector<int> myvec;
    myvec.push_back(0);
    for (int i = 0; i < n; i++){
        int t;
        std::cin >> t; std::cin.ignore();
        myvec.push_back(t);
    };
    std::sort(myvec.begin(), myvec.end());
    std::vector<int>::iterator it = myvec.begin();
    std::vector<int>::iterator it2 = myvec.end();
    int i = 0;
    if (myvec[n] == 00){
        std::cout << myvec[n - 1]; 
        exit(0);
    }
    while (it != it2){
        if (myvec[i] == 0){
            std::cout << myvec[i + 1]; 
            exit(0);
        }
        i++;
        it++;
    }
}
