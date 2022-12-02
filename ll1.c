#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main(){
    int t;
    scanf("%d",&t);
    int arr[t];
    for (int i = 0; i < t; i++)
    {
        scanf("%d",&arr[i]);
    }
    float f,sum=0;
    for(int i=0;i<t;i++){
        sum+=arr[i];
    }
    f=sum/t;
    printf("%.1f",f);
}