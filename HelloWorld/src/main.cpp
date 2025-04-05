//
//  main.cpp
//  HelloWorld
//
//  Created by fys on 2024/11/16.
//

#include <iostream>
//#include "../include/guess_number.hpp"
#include "../include/bubble_sort.hpp"
//#include "../include/revert_array.hpp"

/**
 主函数
 */
int main(int argc, const char * argv[]) {
    std::vector<int> arr{8, 3, 2, -5, 6, 10, 1};
    arr = bubbleSort(arr);
    for (int i = 0; i < arr.size(); i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}
