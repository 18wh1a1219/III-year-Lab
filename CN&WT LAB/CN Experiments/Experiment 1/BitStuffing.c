#include<stdio.h>
 int main(){
   int n,count = 0,a[100],b[100],i=0,j=0;
   printf("Enter no. of frames: ");
   scanf("%d",&n);
   printf("Enter Bits : \n");
   for(i = 0;i < n;i++){
    scanf("%d",&a[i]);
   }
   for(i = 0;i < n;i++){
     b[j] = a[i];
     if(a[i] == 1){
         count += 1;
     }
     else{
          count = 0;
     }
     if(count == 5 && i != n-1){
           j++;
           b[j] = 0;
           count = 0;
     }
     j++;
  }
    printf("Data After Bit Stuffing : 01111110 ");
    for(i = 0;i < j;i++){
    printf("%d",b[i]);
    }
    printf(" 01111110 \n\n");
    printf("Data At Receiver :\n");
    printf("Data received : 01111110 ");
    for(i = 0;i < j;i++){
        printf("%d",b[i]);
    }
    printf(" 01111110\n");
    printf("Data After De-Stuffing : ");
    count = 0;
    for(i = 0;i < j;i++){
        if(b[i] == 1){
            count++;
        }
        else{
            count = 0;
        }
        printf("%d",b[i]);
        if(count == 5){
            i++;
        }
    }
    return 0;
}
