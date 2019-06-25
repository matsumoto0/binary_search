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
    int a = 0;
    for(i = 0; i < n; i++){
        a += A[i];
    }
    ub = a;
    while(ub - lb > 1){
        int m = (lb + ub) / 2;
        
        int cnt = 1;
        int sum = 0;
        
        for(int i = 0; i < n; i++){
            if(A[i] > m){
            
                cnt += k;
                
            }if(sum + A[i] > m){
                    cnt++;
                    sum = A[i];
                }else{
                    sum += A[i];
                }
            }
            
            if(cnt <= k) ub = m;
            else lb = m;
        }
    
        
        
    
        
        printf("%d\n", ub);
        
        
        
  return 0;

}
