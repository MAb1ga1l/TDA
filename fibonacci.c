//
//  fibonacci.c
//  
//
//  Created by Virtualizacion05 on 16/01/20.
//

#include "fibonacci.h"
int fi_iter(int n);
int fi_re(int n);

int main(void){
    int n=8;
    int fibonacci1=fi_iter(n);
    printf("resultado 1 = %d \n",fibonacci1);
    
}

int fi_iter(int n){
    int a=1,b=0,c=0;
    for(int i=2;i<=n;i++){
        c=a+b;
        a=b;
        b=c;
    }
    return c;
}
