#include "../include/bubble_sort.hpp"

std::vector<int> bubbleSort(std::vector<int> arr){
    //冒泡比较趟数
    for (int i = 0; i < arr.size(); i++) {
        //冒泡比较次数
        for (int j = 0; j < arr.size()-i-1; j++) {
            //从小到大排序
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
            //打印每次排序后的结果
            std::cout << i+1 << " 趟 第 " << j+1 << " 次排序后结果： ";
            for (int k = 0; k < arr.size(); k++) {
                std::cout << arr[k] << " ";
            }
            std::cout << std::endl;
        }
    }
    return arr;
}
