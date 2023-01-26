#include<stdio.h>
int main(){
    int a[1000][3],i,j,n,stopage[1000],total=0;
    scanf("%d",&n);
    for(i= 0; i<n;i++){
        for(j=0;j<2;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i= 0; i<n;i++){
        total = total + a[i][1]-a[i][0];
        stopage[i]= total;
    }
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            if(stopage[j]> stopage[j+1]){
                int temp =stopage[j];
                stopage[j] = stopage[j+1];
                stopage[j+1] = temp;
            }
        }
    }
//    for(i= 0; i<n;i++){
//        printf("%d ", stopage[i]);
//    }
    printf("%d ", stopage[i-1]);
    return 0;
}
