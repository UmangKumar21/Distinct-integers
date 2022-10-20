#include <stdio.h>
#include <stdlib.h>
int main() {
    int u;
    scanf("%d",&u);
    int arr[u];
    for(int i=0;i<u;i++){
        scanf("%d",&arr[i]);
    }
    int c=0,v=0;
    for(int i=0;i<u;i++){
        for(int j=0;j<i;j++){
            if(arr[i]!=arr[j]){
                c++;
            }
        }
        if(c==v)
            printf("%d ",arr[i]);
        c=0;
        v++;
    }
}
