#include <stdio.h>
#include <stdlib.h>
int gcd(int, int);
int main(){
    int n1,n2,res;
    printf("enter the numbers : ");
    scanf("%d %d",&n1, &n2);
    res = gcd(n1, n2);
    printf("the gcd of %d and %d is %d",n1, n2, res);
    return 0;
}
int gcd(int x, int y){
    int rem;
    rem = x%y;
    if(rem == 0){
        return y;
    }
    else{
        return gcd(y, rem);
    }
}