#include <stdio.h>

int n;
int k;
int A[100000];

    int p(int m) {
        int i,z;
        z = 0;
        for(i = 0; i < n; i++){
        if(z > k)
        {return 0;}
        else {
            if(A[i] % m == 0) {z = z +(A[i] / m);}
            else {z = z + 1 + (A[i] / m);}}}
            if (z <= k) return 1;
        else return 0;}
int main(){
  int i, lb, ub;
  scanf("%d%d", &n, &k);

      for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }
    lb = 0;
    ub = 1000000000 ;
    while (ub - lb > 1){
        unsigned int m = (lb + ub) / 2;
        if (p(m)){
            ub = m;
            
        }
        else {
        lb = m;
              }
}
printf("%d\n" , ub);
  return 0;
}
