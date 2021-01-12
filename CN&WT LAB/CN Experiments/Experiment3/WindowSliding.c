#include<stdio.h>
int main(){
        int size,nf,j=0;
        printf("Enter the window size : ");
        scanf("%d",&size);
        printf("Enter the no. of frames : ");
        scanf("%d",&nf);
        int f[nf];
        printf("enter frames : ");
        for(int i = 0;i < nf;i++){
                scanf("%d",&f[i]);
        }
        while(j < nf){
                for(int i = j;i < j + size && i < nf;i++){
                        printf("%d  ",f[i]);
                }
                printf("\nAcknowledgement of above frames sent is received by sender\n");
                j = j + size;
        }
        return 0;
}
