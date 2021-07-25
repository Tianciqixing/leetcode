#include<stdio.h>
#include<stdlib.h>

char * longestCommonPrefix(char ** strs, int strsSize){
    int curStrNum = 0, curStrPos = 0, maxStrLen = 200;
    char *commPreStr, tmpChar = 0;
    commPreStr = (char *)malloc(maxStrLen * sizeof(char));

    for (curStrPos = 0; curStrPos < maxStrLen; curStrPos ++) {
        for (curStrNum = 0; curStrNum < strsSize; curStrNum++) {

            if (!(*((char *)strs + maxStrLen * curStrNum + curStrPos)))
                goto back;

            if (curStrNum == 0) {
                tmpChar = (*((char *)strs + maxStrLen * curStrNum + curStrPos));
                continue;
            }
            if ((*((char *)strs + maxStrLen * curStrNum + curStrPos)) == tmpChar) {

                if (curStrNum == strsSize - 1)
                    commPreStr[curStrPos] = tmpChar;

                continue;
            }
            else {
                goto back;
            }
        }
    }
    back:
    commPreStr[curStrPos] = '\0';
    return commPreStr;
}

int main(void)
{
    char strs[][200] = {"flower", "flow", "flight"}, *tmpStr = NULL;
    /*
     * 传参的方式有问题，
     * 调用的函数strs[0][0]
     * 其实为指针数组strs[0]的[0]元素
     * 会发生segment fault
     */
    tmpStr = longestCommonPrefix((char **)strs, sizeof(strs)/sizeof(strs[0]));

    printf("%s\n", tmpStr);
}