#include <iostream>
#include "TypesSizeMap.hpp"
#include "Timer.h"



int main() {


#ifdef false
    std::vector<int> vec(100, 0);

    {
        Timer t{};

        for (auto i = 0; i < vec.size(); i++) {
            vec[i] += 1;
        }
    }
#endif


    TypeSizesMap S;
    S.printSizes();




    return 0;
}
