#include<stdio.h>
void main()
{
    int i=1,n,counter=1;
    printf("Enter n : ");
    scanf("%d",&n);
    if(n%2==0){
    while(i<=n-1){
        printf("%d\t",counter);
        counter = counter + 2;
        i++;
        }
        }else{
            while(i<=n){
        printf("%d\t",counter);
        counter = counter + 2;
        i++;
        }
    }
}

