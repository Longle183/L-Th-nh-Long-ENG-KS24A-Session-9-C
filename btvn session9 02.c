#include <stdio.h>
int main(){
    int num[5] = {1,2,3,4,5};
    int n = 5;
    int index,value;
    printf("Nhap vi tri muon sua: ");
    scanf("%d",&index);
    if (index >= 0 && index < n){
        printf("Nhap gia tri moi: ");
        scanf("%d",&value);
        num[index]=value;
        printf("Mang sau khi sua: ");
        for (int i=0;i<n;i++){
            printf("%d ",num[i]);
        }
        printf("\n");
    } else {
        printf("Vi tri khong hop le");
    }
    return 0;
}

