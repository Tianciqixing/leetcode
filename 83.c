#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* deleteDuplicates(struct ListNode *head){
    if (!head)
        return head;

    struct ListNode *pNode = head;
    while (pNode->next != NULL) {
        if (pNode->val == pNode->next->val) {
            pNode->next = pNode->next->next;
            continue;
        }
        pNode = pNode->next;
    }

    return head;
}

int main(void) {
    struct ListNode *pHead = NULL;

    pHead = (struct ListNode *)malloc(sizeof(struct ListNode));
    pHead->val = 1;
    pHead->next = NULL;

    pHead->next = (struct ListNode *)malloc(sizeof(struct ListNode));
    pHead->next->val = 1;
    pHead->next->next = NULL;

    pHead->next->next = (struct ListNode *)malloc(sizeof(struct ListNode));
    pHead->next->next->val = 2;
    pHead->next->next->next = NULL;

    deleteDuplicates(pHead);
}