#include<stdio.h>
#include<iostream>


int main(){

int n;
int rev = 0;
int rem;
printf("enter int:");
scanf("%d",&n);

while(n!=0){

rem = n%10;
rev = rev *10 + rem;
 n /= 10;
}

printf("%d",&rev);

return 0;
}