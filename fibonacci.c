//
//  fibonacci.c
//
//
//  Created by Virtualizacion05 on 16/01/20.
//

#include "fibonacci.h"
long long int fi_iter(int n);
long long int fi_re(long long int n,long long int c,long long int a);

int main(void){
    clock_t start_t, end_t, total_t;
    int n=10;
    long long int fibonacci1,fibonacci2;
    fibonacci1=fi_iter(n);
    printf("resultado iter = %lld \n",fibonacci1);
    fibonacci2=fi_re(n,1,0);
    printf("resultado recur = %lld \n",fibonacci2);
}

long long int fi_iter(int n){
    long long int a=1,b=0,c=0;
    for(int i=1;i<=n;i++){
        c=a+b;
        a=b;
        b=c;
    }
    return c;
}


long long int fi_re(long long int n,long long  int c,long long  int a){
  long long int b=0;
  b=c+a;
  if(n>=0){
    n--;
    c=fi_re(n,a,b);
  }
  return c;
}
