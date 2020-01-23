//
//  fibonacci.c
//
//
//  Created by Virtualizacion05 on 16/01/20.
//

#include "fibonacci.h"
void fi_iter(int n);
long long int fi_re(long long int n,long long int c,long long int a);

int main(void){
    clock_t start_t, end_t;
    double total;
    long long int fibonacci1;
    int n;
    FILE * fp;
    fp=fopen ( "iterativo.dat", "w" );
    for(int i=1; i<=40;i++){
      n=i;
      start_t=clock();
      fi_iter(n);
      end_t=clock();
      fprintf(fp,"%d %lf\n",n,total);
      total=((double)(end_t-start_t))/(CLOCKS_PER_SEC);
    }
    fclose ( fp );
    fp=fopen ( "recursivo.dat", "w" );
    for(int i=1; i<=40;i++){
      n=i;
      start_t=clock();
      fibonacci1=fi_re(n,1,0);
      printf("%lld\n", fibonacci1);
      end_t=clock();
      total=((double)(end_t-start_t))/(CLOCKS_PER_SEC);
      fprintf(fp,"%d %lf\n",n,total);
    }
}

void fi_iter(int n){
    long long int a=1,b=0,c=0;
    for(int i=1;i<=n;i++){
        c=a+b;
        a=b;
        b=c;
        printf("%lld ", c);
    }
    printf("%lld\n", c);
}


long long int fi_re(long long int n,long long  int c,long long  int a){
  long long int b=0;
  b=c+a;
  if(n>=0){
    n--;
    printf("%lld ",c);
    c=fi_re(n,a,b);
  }
  return c;
}
