#include <stdio.h>

void patt1()
{
    int i,j,k;

    for(i = 5; i >= 1;i--)
    {
        for(j = 4; j >= i;j--)
        {
          printf(" ");
        }
        for(k = 1;k <= i; k++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
}

/*------------------------------------*/

void patt2()
{
    int i,j,k;

    for(i = 5; i >= 1;i--)
    {
        for(j = 4; j >= i;j--)
        {
          printf(" ");
        }
        for(k = 1;k <= i; k++)
        {
            printf("%d",k);
        }
        printf("\n");
    }
}

/*------------------------------------*/

void patt3()
{
    char i,j,k;

    for(i = 'E';i >= 'A';i--)
    {
        for(j = 'E';j > i;j--)
        {
            printf(" ");
        }
        for(k = 'A'; k <= i;k++)
        {
            printf("%c ",i);
        }
        printf("\n");
    }
}

/*-------------------------------------*/

void patt4()
{
    char i,j,k;

    for(i = 'E';i >= 'A';i--)
    {
        for(j = 'E';j > i;j--)
        {
            printf(" ");
        }
        for(k = 'A'; k <= i;k++)
        {
            printf("%c ",k);
        }
        printf("\n");
    }
}

/*-------------------------------------*/

 void patt5()
 {
    int x = 1;
    int h = 5;
    int s = h-1;
    int j,k,i;

    for(i = 0; i < h;i++)
    {
        for (j = s;j > i; j--)
        {
            printf(" ");
        }
        for(k = 0;k < x;k++)
        {
            printf("*");
        }
        x += 2;
        printf("\n");
    }
 }

 /*-------------------------------------*/

 void patt6()
 {
    int n = 5;
    int z = 1;
    int i,j,k;

    for(i = 1;i <= n;i++)
    {
     for(j = 4;j >= i;j--)
     {
         printf(" ");
     }
     for(k = 0;k < z;k++)
     {
         printf("%d",i);
     }
     z += 2;
     printf("\n");
    }
 }

 /*--------------------------------------*/

 void patt7()
 {
    int n = 5;
    int z = 1;
    int i,j,k;
    for(i = 1;j >= i;i++)
    {
        for(j = 4;j >= i;j--)
        {
            printf(" ");
        }
        for(k = 1;k <= z;k++)
        {
            printf("%d",z);
        }
        z += 2;
        printf("\n");
    }
 }

 /*--------------------------------------*/

 void patt8()
 {
    int n = 5;
    int z = 1;
    int i,j,k;
    for(i = 1;i <= n;i++)
    {
        for(j = 4;j >= i;j--)
        {
            printf(" ");
        }
        for(k = 1;k <= z;k++)
        {
            printf("%d",z);
        }
        z += 2;
        printf("\n");
    }
 }

 /*--------------------------------------*/

 void patt9()
 {
    int n = 5;
    int z = 1;
    int i,j,k;
    for(i = 1;i <= n;i++)
    {
        for(j = 4;j >= i;j--)
        {
            printf(" ");
        }
        for(k = 1;k <= z;k++)
        {
            printf("%d",k);
        }
        z += 2;
        printf("\n");
    }
 }

  /*--------------------------------------*/

  void patt10()
  {
    int n = 5;
    int z = 1;
    int i,j,k;
    for(i = 1;i <= n;i++)
    {
        for(j = 4;j >= i;j--)
        {
            printf(" ");
        }
        for(k = z;k >= 1;k--)
        {
            printf("%d",k);
        }
        z += 2;
        printf("\n");
    }
  }

int main()
{
    patt1();
    printf("\n-------------------\n");
    patt2();
    printf("\n-------------------\n");
    patt3();
    printf("\n-------------------\n");
    patt4();
    printf("\n-------------------\n");
    patt5();
    printf("\n-------------------\n");
    patt6();
    printf("\n-------------------\n");
    patt7();
    printf("\n-------------------\n");
    patt8();
    printf("\n-------------------\n");
    patt9();
    printf("\n-------------------\n");
    patt10();
}