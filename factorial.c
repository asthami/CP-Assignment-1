#include<stdio.h>
int factorial(int n ,int *f){
   int i ;
   *f=1 ;

   for(i=1 ; i<=n ; i++){
    *f=*f *i ;
   }
 printf("%d",*f) ;
}
int factorial(int ,int*) ;
int main(){
int f ,n,r;
printf("enter num : ") ;
scanf("%d",&n) ;
factorial(n,&f) ;

    return 0 ;
}
