
/*
给定单向链表的一个节点指针，定义一个函数在O(1)时间删除该结点。

假设链表一定存在，并且该节点一定不是尾节点。

样例
输入：链表 1->4->6->8
      删掉节点：第2个节点即6（头节点为第0个节点）

输出：新链表 1->4->8

*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {

        auto p = node->next;

        node->val = p->val;
        node->next = p->next;
        // 这两步的作用就是将 *(node->next) 赋值给 *node，所以可以合并成一条语句：
        // *node = *(node->next);

        delete p;
    }
};