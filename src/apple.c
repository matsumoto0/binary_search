#include <stdio.h>

int n;
int k;
int A[100000];


int main(){
  int i, lb, ub;
  scanf("%d%d", &n, &k);
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }
    
    
   
    
    lb = 0;
    ub = 1000000000;
    while(ub - lb > 1){
        int m = (lb + ub) / 2;
        int b = 0;
        for(i = 0; i < n; i++){
            b += (A[i] + m - 1)/ m ;
            
        }
        if(k >= b){
            ub = m;
            
        }
        else{
            lb = m;
            
        }
            
            
    }
    
    printf("%d\n", ub);
    
  return 0;
}
