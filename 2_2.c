#include <stdio.h>

/*
int reverse_positive(int arg)
{
   int num = 1;
   int i = 0, div = 0, res = 0, result = 0;
   long multi = 10;

    for (num = 1;; num++)
    {
        
        if (!(arg / multi))
        {
            break;
        }
        else
        {
            multi = 10 * multi;
           
        }
    }

    multi = multi / 10;
    int times = 1;
    for (i = 0; i < num ; i++) {
        
        res = arg % multi;
        div = arg / multi;
        printf("%d\n", div);
        result = result + times * div;
        multi = multi / 10;
        arg = res;
        times = 10 * times;
    }
    return result;
}

int reverse(int x)
{
    long arg;
    if(x = -0xFFFFFFFF)
    if ( x > 0) {
        arg = x;
       return reverse_positive(arg);
    } else if ( x < 0) {
        arg = -x;
        return -reverse_positive(-x);
    }
    else{
        return 0;
    }

}
*/
/*
int reverse(int x){
    int num = 1;
    int i = 0, div = 0;
    long res = 0;
    long multi = 10;
    long arg = 0;
    if ( x > 0){
        arg = x;
    }
    else if ( x < 0)
    {
        arg = -x;
    }
    long result = 0;
    for (num = 1;; num++)
    {
        
        if (!(arg / multi))
        {
            break;
        }
        else
        {
            multi = 10 * multi;
           
        }
    }

    multi = multi / 10;
    long times = 1;
    for (i = 0; i < num ; i++) {
        
        res = arg % multi;
        

        div = arg / multi;
        printf("%d\n", div);
        result = result + times * div;
        multi = multi / 10;        
        arg = res; 
        times = 10 * times;       
    }
    if ( x > 0 && result < 2,147,483,647){
       return result;
    }
    else if ( x < 0 && result < 2,147,483,648)
    {
        result = - result;
        return result;
        
    }
    else{
        return 0;
    }
}
*/
int reverse(int x) {
    int num = 10;
    unsigned long multi = 1000000000;
    int i = 0;
    unsigned long res = 0;
    unsigned long result = 0;
    unsigned long arg = 0;
    unsigned long div = 0;
    unsigned long times = 1;
    arg = x > 0 ? x : -x;
    printf("%ld\n", arg);
    for (i = 0; i < num; i++) {
        res = arg % multi;
        div = arg / multi;
        printf("%ld\n", div);
        multi = multi / 10;        
        arg = res; 
        if(!div)
           continue; 
        printf("%ld\n", times);
        result = result + times * div;
        printf("%ld\n", result);
        times = 10 * times;
    }
    if (x > 0 && result < 2147483647){
        return result;
    }
    if (x < 0 && result < 2147483648){
        return -result;
    }
    return 0;
}

void main()
{
    int input = 1534236469;
    reverse(input);
    printf("%d\n", reverse(input));

}