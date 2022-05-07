#include<iostream>
#include<vector>

double sum(std::vector<double> &vec){

    double ans = 0;
    for(size_t i = 0; i < vec.size(); i++){
        ans += vec[i];
    }

    return ans;
}
