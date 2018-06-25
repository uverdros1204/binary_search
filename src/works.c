#include <stdio.h>

int n;
int k;
int A[100000];

int p(int m){ 
   int i,t,z ;
   t = 0;
   z = 1;
   for(i = 0; i < n; i++){
   if(A[i] > m){return 0;}
else {
      if ( t + A[i] > m){
          t = A[i];
          z = z + 1;}
      else {t= t + A[i];}}} 

  if (z <= k) return 1;
else return 0;}

int main(){
  int i, lb, ub;
  scanf("%d%d", &n, &k);
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }
lb = 0;
ub = 1000000;
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
