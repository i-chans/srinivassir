#include <stdio.h>


int get_input()
{
    int n;
    printf("enter a number");
    scanf("%d",&n);
    return n;
}

int add_one(int a)
{
    a+=1;
    return a;
    
}

void output(int b,int c)
{
    printf("value before %d and after adding one %d",b,c);
}

int main()
{
    int x=get_input();
    int y=add_one(x);
    add_one(x);
    output(x,y);
    
}
