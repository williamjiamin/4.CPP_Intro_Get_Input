//乐学偶得版权所有，主讲人：William 公众号：乐学Fintech 网站：lexueoude.com
// Created by william from lexueoude.com
//

#include <iostream>

using namespace std;

int main() {
    cout << "输入你的名字：" << flush;
    string name;
    cin >> name;
    cout << "你好：" << name << endl;

    cout << "输入你的性别：" << flush;
    string sex;
    cin >> sex;
    cout << "您的性别为" << sex << endl;

    cout << "输入你的年龄：" << flush;
    int age;
    cin >> age;
    cout << "您的年龄为" << age << endl;

    return 0;
}