/* Enter your solutions in this file */
#include <stdio.h>
int max(int a[], int n){
  int large= a[0];
  for(int i=1;i<n;i++){
      if(a[i]>large){
      large=a[i];
      }
      }
      return large;
      }
int min(int a[], int n) {
   int small = a[0];
   for(int i=1;i<n;i++){
      if(a[i]<small){
      small=a[i];
      }
      }
      return small;
      }
float average(int a[], int n){
float sum=0;
for(int i=0;i<n;i++){
sum+=a[i];
}
float avg= sum/n;
return avg;
}
int mode(int a[],int n) {
   int repeatednum = 0, maxCount = 0;

   for (int i = 0; i < n; ++i) {
      int count = 0;
      
      for (int j = 0; j < n; ++j) {
         if (a[j] == a[i])
         ++count;
      }
      
      if (count > maxCount) {
         maxCount = count;
         repeatednum = a[i];
      }
   }

   return repeatednum;
}
int factors(int a, int x[]){
int count=0;
int h=0;
for(int i=2;a>1;++i){
while(a%i==0){

        ++count;
        x[h]=i;
        ++h;
        a=a/i;
        }
        }
        
        return count;
      
        }
