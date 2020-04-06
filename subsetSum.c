#include <stdio.h>
int sumsTo(int x[],int n, int k, int v){
    if(v == 0 && k == 0){
        return true;
    }
    if(v != 0 && k == 0){
        return false;
    }
    if (n == 0)
    {
        return false;
    }
    int res1 = 0;
    if (v >= x[0])
    {
        res1 = sumsTo(x+1,n-1,k-1,v-x[0]);
    }
    int res2 = sumsTo(x+1,n-1,k,v);
    return res1 + res2 >0;
    
    
}

int main(void){
    
    int x[] = {1,8,6,4,3};
    int k;
    int v;
    int n;
    k=3;
    v=9;
    n=5;
    printf("Your answer:%d\n",sumsTo(x,n,k,v)) ;
    printf("Expexted: 0\n");
    k=2;
    v=9;
    printf("Your answer:%d\n",sumsTo(x,n,k,v));
    printf("Expected: 1\n");
    return 1;
  
    
}

