//
//  fibonacci.c
//
//
//  Created by Virtualizacion05 on 16/01/20.
//

#include "fibonacci.h"
float fi_iter(int n);
float fi_re(int n, int c,int a);

int main(void){
    int n=8;
    float fibonacci1=0,fibonacci2=0;
    fibonacci1=fi_iter(n);
    printf("resultado iter = %f \n",fibonacci1);
    fibonacci2=fi_re(n,1,0);
    printf("resultado recur = %f \n",fibonacci2);

}

float fi_iter(int n){
  clock_t start_t, end_t, total_t;
  start_t = clock();
    int a=1,b=0,c=0;
    for(int i=2;i<=n;i++){
        c=a+b;
        a=b;
        b=c;
    }
    end_t=clock();
    total_t=(double)(end_t - start_t) / CLOCKS_PER_SEC;
    return total_t;
}


float fi_re(int n, int c, int a){
  clock_t start_t, end_t, total_t;
  start_t = clock();
  int b=0;
  b=c+a;
  if(n>0){
    n--;
    c=fi_re(n,a,b);
  }
  end_t=clock();
  total_t=(double)(end_t - start_t) / CLOCKS_PER_SEC;
  return total_t;
}
