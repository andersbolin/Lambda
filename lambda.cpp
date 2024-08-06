/* Lambda functions in C++ */

#include <vector>
#include <algorithm>


bool AppliedToAll(std::vector<int>& vec, int value) {
    const auto isEven = [value](const int in){
        return in >= value;
    };

    return std::count_if(vec.begin(), vec.end(), 1);
}