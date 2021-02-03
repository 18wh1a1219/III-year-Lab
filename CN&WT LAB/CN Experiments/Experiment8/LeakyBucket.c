// Leaky Bucket
#include <stdio.h>

int main(){
    int n,op_rate,ip_lines,iter,sum=0;
    printf("Enter the bucket size and output rate:\n");
    scanf("%d %d",&n,&op_rate);
    printf("Enter the number of input lines:\n");
    scanf("%d",&ip_lines);
    int ip_rate[ip_lines];
    printf("Enter the input packet rate of %d lines:\n",ip_lines);
    for(int i = 0;i < ip_lines;i++){
        scanf("%d",&ip_rate[i]);
    }
    printf("Enter the number of iterations:\n");
    scanf("%d",&iter);
    for(int i = 1;i <= iter;i++){
        printf("Iteration %d:\n",i);
        for(int j = 0;j < ip_lines;j++){
            sum += ip_rate[j];
            if(sum <= n){
                printf("Input from line %d with rate %d is added to the bucket\n",j+1,ip_rate[j]);
                printf("Current bucket size is %d\n",sum);
            }
            else{
                printf("Input from line %d with rate %d is thrown out of the bucket\n",j+1,ip_rate[j]);
                sum -= ip_rate[j];
                printf("Current bucket size is %d\n",sum);
            }
        }
        if(sum <= op_rate){
            printf("Packet sent to output line at rate %d\n",sum);
            sum = 0;
            printf("Current bucket size is %d\n\n",sum);
        }
        else{
            printf("Packet sent to output line at rate %d\n",op_rate);
            sum -= op_rate;
            printf("Current bucket size is %d\n\n",sum);
        }
    }
    return 0;
}
