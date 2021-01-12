#include <stdio.h>
int main(){
    int size,f = 0;
    printf("Enter the window size:\n");
    scanf("%d",&size);
    while(1){
        for(int i = f;i < size;i++){
            printf("Frame %d has been transmitted\n",i);
        }
        printf("Enter the last acknowledgement received:\n");
        scanf("%d",&f);
        if(f >= size){
            break;
        }
    }
    printf("All frames are transmitted");
    return 0;
}
