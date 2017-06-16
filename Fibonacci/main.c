//
//  main.c
//  Fibonacci
//
//  Created by a20161104573 on 2017/6/16.
//  Copyright © 2017年 a20161104573. All rights reserved.
//

#include <stdio.h>

int main()
{
    int f1,f2,f3,i,n,j,a;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        f1=f2=f3=1;
        scanf("%d",&a);
        for(j=3;j<=a;j++)
        {
            f3=f1+f2;
            f1=f2;
            f2=f3;
        }
        printf("%d\n",f3);
    }
    return 0;
}
