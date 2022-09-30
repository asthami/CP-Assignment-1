#include<stdio.h>
int fact(int ,int*) ;
int main(){
int f ,n,r;
printf("enter num : ") ;
scanf("%d",&n) ;
fact(n,&f) ;

    return 0 ;
}
int fact(int n ,int *f){
   int i ;
   *f=1 ;
   
   for(i=1 ; i<=n ; i++){
    *f=*f *i ;
   }
 printf("%d",*f) ;
}