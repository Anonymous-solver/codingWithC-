#include <bits/stdc++.h>
using namespace std;

int main(){
    char input[100],*l,*r,*temp,tempprod[20],productions[25][50];
    int i=0,j=0,flag=0,cnt=0;
    printf("Enter the productions: ");
    scanf("%s",input);
    l = strtok(input,"->");
    r = strtok(NULL,"->");
    temp = strtok(r,"|");
    while(temp){
        if(temp[0]== l[0])  {
            flag = 1;
            sprintf(productions[i++],"%s'->%s%s'",l,temp+1,l);
            cnt++;
        }
        else
            sprintf(productions[i++],"%s->%s%s'",l,temp,l);

        temp = strtok(NULL,"|");
    }
    if(flag == 0)
        printf("The given productions don't have Left Recursion");
    else
        for(j=cnt;j<i;j++){
            printf("\n%s",productions[j]);
        }

        for(j=0;j<cnt;j++){
            printf("\n%s",productions[j]);
        }
        printf("|\356\0");
}
