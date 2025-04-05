//
//  revertArray.cpp
//  HelloWorld
//
//  Created by fys on 2025/4/4.
//

#include "revert_array.hpp"

/**
 反转一个数组
 使用两个指针，分别指向数组
 */
std::vector<int> revert(std::vector<int> arr){
    if(arr.size() < 1){
        return arr;
    }
    int sp = 0;
    int ep = arr.size() - 1;
    while(ep > sp){
        int temp = arr[sp];
        arr[sp] = arr[ep];
        arr[ep] = temp;
        sp++;
        ep--;
    }
    return arr;
}


