#include <stdio.h>
#include <string.h>
int main()
{
    char f[100][100],x;
    char str[100] = "";
    int n;
    printf("Enter the no. of frames : ");
    scanf("%d",&n);
    for(int i = 0;i < n;i++){
        printf("Frame%d : ",i+1);
        scanf("%s",&f[i]);
    }
    printf("AT THE SENDER\n");
    printf("Data as frames:\n");
    for(int i = 0;i < n;i++){
        printf("Frame%d : %d%s\n",i+1,strlen(f[i])+1,f[i]);
        x = strlen(f[i])+1;
        strcat(str,f[i]);
    }
    printf("Data transmitted:\n");
     for(int i = 0;i < n;i++){
        printf("%d%s",strlen(f[i])+1,f[i]);
     }
     printf("\n");
    printf("AT THE RECEIVER\n");
    printf("The data after removing count char : %s\n",str);
    printf("The data in frame form:\n");
    for(int i = 0;i < n;i++){
        printf("Frame%d : %s\n",i+1,f[i]);
    }
    return 0;
}
