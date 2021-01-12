#include<stdio.h>
int main(){
        int n,root;
        printf("Enter the no. of nodes: ");
        scanf("%d",&n);
        int adjMat[n+1][n+1];
        printf("Enter adjacent matrix:\n");
        for(int i = 1;i <= n;i++){
        for(int j = 1;j <= n;j++){
        printf("enter connection of %d->%d : ",i,j);
        scanf("%d",&adjMat[i][j]);
        }
        }
        printf("Enter the root node: ");
        scanf("%d",&root);
        printf("Adjacent nodes of root node:\n");
        for(int i = 1;i <= n;i++){
        if(adjMat[root][i] == 1 && adjMat[i][root] == 1){
        printf("%d  ",i);
        }
        }
        printf("\n");
        return 0;
}
