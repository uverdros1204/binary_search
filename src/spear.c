#include <stdio.h>

int n;
int k;
int A[100000];

int p(int m) {
    int i,z;
    z = 0;
    for(i = 0; i < n; i++){
    z = z +(A[i]/ m);}
    return z < k;}



int main(){
  int i, lb, ub;
  scanf("%d%d", &n, &k);
   
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
      lb = 0;
      ub = 1000000001; }
    while (ub - lb > 1){
        unsigned int m = (lb + ub) / 2;
        if (p(m)){
            ub = m;
        }
        else {
            lb = m;
        }
    }
    printf("%d\n" , lb);
  return 0;
}
