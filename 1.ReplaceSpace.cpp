/*************************************************************************
	> File Name: 19.ReplaceSpace.cpp
	> Author: xiaxue
	> Mail: 1915223862@qq.com
	> Created Time: 2020年08月25日 星期二 21时13分50秒
 ************************************************************************/
#include <iostream>
using namespace std;

class Solution {
public:
string replaseSpace(string s) {
    if (s.empty()) return s;
    int l1 = s.length() - 1;
    for (int i = 0; i <= l1; i++) {
        if (s[i] == ' ') {
            s += "00";
        }
    }
    int l2 = s.length() - 1;
    for (int i = l2; i >= 0; i--) {
        int temp = s[i];
        if (temp == ' ') {
            s[l2--] = '0';
            s[l2--] = '2';
            s[l2--] = '%';
        } else {
            s[l2--] = temp;
        }
    }
    return s;
}
};

