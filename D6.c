#include <stdio.h>

int main(){
    int m,n;
    printf("Enter no of rows: ");
    scanf("%d", &m);
    printf("Enter no of cols: ");
    scanf("%d", &n);
    int M1[m][n], M2[m][n], R[m][n];
    printf("Enter elements of first matrix:\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d", &M1[i][j]);
        }
    }
    printf("Enter elements of second matrix:\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d", &M2[i][j]);
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            R[i][j]=M1[i][j]+M2[i][j];
        }
    }
    printf("Resultant matrix:\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ", R[i][j]);
        }
        printf("\n");
    }
    return 0;
}
update 2026-02-07 #1
