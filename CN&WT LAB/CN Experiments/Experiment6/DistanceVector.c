#include<stdio.h>
struct node
{
    unsigned dist[20];
    unsigned from[20];
}r[10];
int main()
{
    int cost[20][20],nodes,i,j,k,c=0;
    printf("Enter the number of nodes :");
    scanf("%d",&nodes);
    printf("\nEnter the cost matrix :");
    for(i = 0;i < nodes;i++)
    {
        for(j = 0;j < nodes;j++)
        {
            scanf("%d",&cost[i][j]);
            cost[i][i] = 0;
            r[i].dist[j] = cost[i][j];
            r[i].from[j] = j;
        }
    }
        do
        {
            c = 0;
            for(i = 0;i < nodes;i++){
                for(j = 0;j < nodes;j++){
                    for(k = 0;k < nodes;k++){
                        if(r[i].dist[j] > cost[i][k] + r[k].dist[j])
                        {
                            r[i].dist[j] = r[i].dist[k] + r[k].dist[j];
                            r[i].from[j] = k;
                            c++;
            }}}}
        }while(c != 0);
        for(i = 0;i < nodes;i++)
        {
            printf("\nFor router %d\n",i+1);
            for(j = 0;j < nodes;j++)
            {
                printf("\t\nnode %d via %d Distance %d ",j+1,r[i].from[j]+1,r[i].dist[j]);
            }
        }
    return 0;
}
