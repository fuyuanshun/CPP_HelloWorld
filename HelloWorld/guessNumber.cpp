//
//  printName.cpp
//  HelloWorld
//
//  Created by fys on 2024/11/16.
//
#include <iostream>
#include <random>

using namespace std;

//声明方法
int getRandomNumber();

//猜数字主方法
int guessNumber(){
    cout << "欢迎来到猜数字小游戏～\n";
    int num = getRandomNumber();
    cout << "已成功生成随机数，猜猜看是多少吧！\n";
    //猜的次数
    int guessCount = 1;
    //接收用户输入变量
    int inputNum;
    //输入数字与随机数不相等时循环
    while(cin >> inputNum && inputNum != num){
        if(inputNum > num){
            cout << "大了一点哦~\n";
        } else if (inputNum < num){
            cout << "小了一点哦~\n";
        }
        cin.clear();
        guessCount++;
    }
    cout << "恭喜您猜对了！！总共猜了：" << guessCount << "次。" << endl;
    
    return 0;
}

int getRandomNumber(){
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> distrib(1,100);
    
    return distrib(gen);
}

