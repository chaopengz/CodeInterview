//
// Created by cpz on 2017/12/27.
//

#ifndef CODEINTERVIEW_HEAD_H
#define CODEINTERVIEW_HEAD_H


#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <stack>
#include <queue>
#include <sstream>
#include <map>
#include <cstdlib>
#include <cstring>
#include <list>
#include <set>
#include <cmath>
#include <unordered_map>
#include <unordered_set>
//#define INT_MIN -10000000
//#define INT_MAX 1000000

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

struct ListNode {
    int val;
    ListNode *next;

    ListNode(int x) : val(x), next(nullptr) {};
};



#endif //CODEINTERVIEW_HEAD_H
