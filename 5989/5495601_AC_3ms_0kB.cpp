#include<bits/stdc++.h>

using namespace std;

int main()
{
    int test;

    scanf("%d",&test);

    getchar();

    while(test--)
    {
       char str[60];

       bool possibleflag = true;
       gets(str);

       int len = strlen(str);

       for(int i=0;i<len;i++)
       {
           if(str[i]=='D')
           {
               possibleflag = false;
               break;
           }
       }

       if(possibleflag)
        printf("Possible\n");
       else
        printf("You shall not pass!\n");


    }

    return 0;
}