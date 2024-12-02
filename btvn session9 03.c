#include <stdio.h>
int main() {
    int num[100];
    int n;
    printf("Nhap so luong phan tu: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Nhap phan tu thu %d: ",i);
        scanf("%d",&num[i]);
    }
    int index;
    printf("Nhap vi tri muon xoa: ");
    scanf("%d",&index);
    if(index>=0 && index<n){
        for(int i=index;i<n-1;i++){
            num[i]=num[i+1];
        }
        printf("Mang sau khi xoa: ");
        for(int i=0;i<n;i++){
            printf("%d ",num[i]);
        }
    }else{
        printf("Vi tri khong hop le");
    }
    return 0;
}
