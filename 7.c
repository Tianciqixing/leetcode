#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void StrRev(char *_tmpStr, int _num) {
    int i = 0, j = 0;
    char tmpChr = '\0';
    for (i = 0, j = _num - 1; i < j; i++, j--) {
        tmpChr = _tmpStr[i];
        _tmpStr[i] = _tmpStr[j];
        _tmpStr[j] = tmpChr;
    }
}

int reverse(int x)
{
    char tmpStr[11] = {'\0'},
         marginStr[11] = {'2', '1', '4', '7', '4', '8', '3', '6', '4', '7', '\0'};
    int flag = 0, retVal = 0;
    if (x < 0) {
        flag = 1;
        if (x == 0xFFFFFFFF) {
            return 0;
        }
        x = abs(x);
    }
    sprintf(tmpStr, "%d", x);
    StrRev(tmpStr, strlen(tmpStr));
    if (strlen(tmpStr) == 10 && strcmp(tmpStr, marginStr) > 0) {
        return retVal;
    } else {
        retVal = (flag ? -1 : 1) * atoi(tmpStr);
        return retVal;
    }
}

int main(void)
{
    int num1 = -123, num2 = 0;
    num2 = reverse(num1);
    printf("%d\n", num2);
    return 0;
}