#include"test.hpp"

int main(){
    std::vector<double> vec(100, 1.0);

    auto val = sum(vec);

    std::cout << val << std::endl;

    return 0;
}
