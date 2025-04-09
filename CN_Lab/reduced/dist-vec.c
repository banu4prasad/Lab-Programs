#include <stdio.h>

typedef struct { unsigned dist[20], from[20]; } Node;
Node rt[20];

int main() {
    int dmat[20][20], n, i, j, k, count;
    
    printf("Number of nodes: ");
    scanf("%d", &n);
    
    printf("Cost matrix:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++) {
            scanf("%d", &dmat[i][j]);
            rt[i].dist[j] = dmat[i][j] = (i == j) ? 0 : dmat[i][j];
            rt[i].from[j] = j;
        }
    
    do {
        count = 0;
        for (i = 0; i < n; i++)
            for (j = 0; j < n; j++)
                for (k = 0; k < n; k++)
                    if (rt[i].dist[j] > dmat[i][k] + rt[k].dist[j]) {
                        rt[i].dist[j] = dmat[i][k] + rt[k].dist[j];
                        rt[i].from[j] = k;
                        count++;
                    }
    } while (count != 0);
    
    for (i = 0; i < n; i++) {
        printf("\nState for router %d\n", i + 1);
        for (j = 0; j < n; j++)
            printf("Node %d via %d Distance %d\n", j + 1, rt[i].from[j] + 1, rt[i].dist[j]);
    }
    
    return 0;
}