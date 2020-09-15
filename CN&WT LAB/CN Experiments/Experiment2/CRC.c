#include<stdio.h>
#include<string.h>

int main(){
    int klen,mlen,i,j;
    char a[100],a1[100],k[100],k1[100],temp[100],quot[100],rem[100];
    printf("Enter the data : ");
    scanf("%s",a);
    strcpy(a1,a);
    mlen = strlen(a);
    printf("Enter the Polynomial : ");
    scanf("%s",k);
    klen = strlen(k);
    strcpy(k1,k);
    for(i = 1;i < klen;i++){
        strcat(a,"0");
    }
    printf("String after adding zeroes : %s\n",a);
    for(i = 0;i < klen;i++){
            temp[i] = a[i];
    }
    for(i = 0;i < mlen;i++){
        quot[i] = temp[0];
        if(quot[i] == '0'){
            for(j = 0;j < klen;j++)
                k[j] = '0';
        }
        else{
            for(j = 0;j < klen;j++)
                k[j] = k1[j];
        }
        for(j = klen-1;j>0;j--) {
            if(temp[j] == k[j]){
                rem[j-1] = '0';
            }
            else{
                rem[j-1] = '1';
            }
        }
		rem[klen-1] = a[i+klen];
		strcpy(temp,rem);
    }
	strcpy(rem,temp);
    quot[mlen] = '\0';
    rem[klen-1] = '\0';
	printf("Remainder : %s \n",rem);
	printf("Quotient : %s \n",quot);
	printf("Data At Receiver Side : ");
	strcat(a1,rem);
	printf("%s",a1);
    return 0;
}
