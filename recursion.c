// When fn call itself problem eg;
// Tower of hanoi, DFS of graph, InOrder, PreOrder, PostOrder

// When recursive fn calling itself one time then its linear recursion otherwise ,
// if it calling itself more than one time then its tree recursion.

// Space complexity of recursion is O(n)
// Recursion       ||   Time complexity
// Tail recursion  --> O(n)
// Head recursion  --> O(n)
// Tree recursion  --> O(2^n)
#include<stdio.h>
int f(int n)
{
    static int r = 0;
    if(n <= 0) return 1;
    if(n>3)
    {
        r = n;
        return f(n-2)+2;
    }
    return f(n-1)+r;
}

int main()
{
    int d = f(5); // The output will be 18 because in fn f() r is static so its value will share all subsequence calls without change
    // If r is not static then what will be 3.
    printf("%d",d);
    return 0;
}