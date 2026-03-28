#include <stdio.h>

int main()
{
    int i,j,n;
    int A[10][10], B[10][10], C[10][10];

    scanf("%d",&n);

    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&A[i][j]);

    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&B[i][j]);

    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            C[i][j] = A[i][j] + B[i][j];

    printf("Addition:\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
            printf("%d ",C[i][j]);
        printf("\n");
    }

    int saddle, found=0;
    for(i=0;i<n;i++){
        int min=A[i][0], col=0;
        for(j=1;j<n;j++)
            if(A[i][j]<min){
                min=A[i][j];
                col=j;
            }
        int flag=1;
        for(j=0;j<n;j++)
            if(A[j][col]>min)
                flag=0;
        if(flag){
            saddle=min;
            found=1;
        }
    }
    if(found) printf("Saddle Point: %d\n",saddle);
    else printf("No Saddle Point\n");

    float det;
    if(n==2){
        det = A[0][0]*A[1][1] - A[0][1]*A[1][0];
        if(det!=0){
            printf("Inverse:\n");
            printf("%f %f\n",-A[0][1]/det, A[0][0]/det);
            printf("%f %f\n", A[1][0]/det,-A[1][1]/det);
        }
        else printf("No Inverse\n");
    }

    int sum1=0,sum2=0,flag=1;
    for(i=0;i<n;i++){
        int rowsum=0,colsum=0;
        for(j=0;j<n;j++){
            rowsum+=A[i][j];
            colsum+=A[j][i];
        }
        if(i==0) sum1=rowsum;
        if(rowsum!=sum1 || colsum!=sum1) flag=0;
        sum2+=A[i][i];
    }
    int diag2=0;
    for(i=0;i<n;i++)
        diag2+=A[i][n-i-1];
    if(sum2!=sum1 || diag2!=sum1) flag=0;

    if(flag) printf("Magic Square\n");
    else printf("Not Magic Square\n");

    return 0;
}
