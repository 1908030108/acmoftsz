#include <stdio.h>

int main(void){
    int c,n,i, j;
    scanf("%d",&c);
    while(c--){
        int a[100][100] = {0};
        scanf("%d",&n);
        for(i = 0; i < n; i++){
            for(j = 0; j <= i; j++)
                scanf("%d",&a[i][j]);
        }
        for(i = n-1; i >=0; i--){
            for(j = 0; j <= i; j++){
                if(a[i-1][j]+a[i][j]>a[i][j+1]+a[i-1][j])
                    a[i-1][j] = a[i-1][j]+a[i][j];
                else
                    a[i-1][j] = a[i-1][j] + a[i][j+1];
            }
        }
        printf("%d\n",a[0][0]);
    }
return 0;
}
