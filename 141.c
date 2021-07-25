#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

bool hasCycle(struct ListNode *head) {
    struct ListNode *pFast = NULL, *pLow = NULL;

    if (!head)
        return false;

    pFast = head;
    pLow = head;

    while (pFast && pFast->next) {
        pFast = pFast->next->next;
        pLow = pLow->next;

        if (pFast == pLow)
            return true;
    }

    return false;
}

int main(void)
{
    struct ListNode *pHead = NULL;

    pHead = (struct ListNode *)malloc(sizeof(struct ListNode));
    pHead->val = 1;

    pHead->next = (struct ListNode *)malloc(sizeof(struct ListNode));
    pHead->next->val = 2;
    pHead->next->next = pHead;

    hasCycle(pHead);
}