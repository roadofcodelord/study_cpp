#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    std::vector<int> a;

    int target_1 = 4;
    int target_2 = 9;
    int target_3 = 14;

    int answer_1 = 10;
    int answer_2 = 5;
    int answer_3 = 3;

    for (int i = 0; i < answer_1; ++i){
        a.push_back(target_1);
    }

    for (int i = 0; i < answer_2; ++i){
        a.push_back(target_2);
    }

    for (int i = 0; i < answer_3; ++i){
        a.push_back(target_3);
    }

    std::cout << "Vector a: " << std::endl;
    for (int i = 0; i < a.size(); ++i){
        std::cout << a[i] << ", ";
    }
    std::cout << std::endl;
    
    int result_1 = std::count(a.begin(), a.end(), target_1);
    std::cout << "Number of " << target_1 << " : " << result_1 << std::endl;

    int result_2 = std::count(a.begin(), a.end(), target_2);
    std::cout << "Number of " << target_2 << " : " << result_2 << std::endl;

    int result_3 = std::count(a.begin(), a.end(), target_3);
    std::cout << "Number of " << target_3 << " : " << result_3 << std::endl;
 
    return 0;
}