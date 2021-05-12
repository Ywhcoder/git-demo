/*
 * @Author: YangWeiHan
 * @Date: 2021-05-12 16:12:59
 * @LastEditTime: 2021-05-12 16:44:51
 * @FilePath: /TestDemo/test.cpp
 */
#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;
int main(int argc, char **argv)
{
    vector<int> test = {1, 2, 3, 4, 5};
    sort(test.begin(), test.end(),true);
    for (auto i : test)
    {
        cout << i << endl;
    }
}