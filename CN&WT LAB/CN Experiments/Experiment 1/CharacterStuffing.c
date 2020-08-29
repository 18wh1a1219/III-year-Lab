#include<stdio.h>
#include<string.h>
int main(){
    char s[30];
    int i,count = 0;
    printf("Enter the data : ");
    scanf("%s",s);
    printf("\n");
    printf("Data At Sender : ");
    printf("%s\n",s);
    printf("Data After Character Stuffing : dlestx");
    for(i = 0;i < strlen(s);i++){
        printf("%c",s[i]);
        if(s[i] == 'd'){
            count++;
        }
        else if(s[i] == 'l' && count == 1){
            count++;
        }
        else if(s[i] == 'e' && count == 2){
            count = 0;
            printf("dle");
        }
        else{
            count = 0;
        }
    }
    printf("dleetx\n\n");
    printf("Data At Receiver : \n");
    printf("Data After Destuffing : ");
    printf("%s\n",s);
    return 0;
}
