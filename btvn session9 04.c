#include <stdio.h>
int main(){
    int num[100];
    int n = 0;
    int x = 0;
    while (x!= 6){
        printf("MENU\n");
        printf("1. Nhap vao mang\n");
        printf("2. Hien thi mang\n");
        printf("3. Them phan tu\n");
        printf("4. Sua phan tu\n");
        printf("5. Xoa phan tu\n");
        printf("6. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d",&x);
        switch(x){
            case 1:
                printf("Nhap so luong phan tu: ");
                scanf("%d",&n);
                for (int i=0;i<n;i++){
                    printf("Nhap phan tu thu %d: ",i);
                    scanf("%d",&num[i]);
                }
                break;
            case 2:
                if(n==0){
                    printf("Mang rong. Chua co du lieu.\n");
                }else{
                    printf("Mang hien tai: ");
                    for(int i=0;i<n;i++){
                        printf("%d ",num[i]);
                    }
                    printf("\n");
                }
                break;
            case 3:
                if(n<100){
                    int value;
                    printf("Nhap gia tri can them: ");
                    scanf("%d",&value);
                    num[n]=value;
                    n++;
                    printf("Da them phan tu moi\n");
                }else{
                    printf("Mang da day, khong the them phan tu.\n");
                }
                break;
            case 4:
                {
                    int index, value;
                    printf("Nhap vi tri muon sua: ");
                    scanf("%d",&index);
                    if(index >= 0 && index<n){
                        printf("Nhap gia tri moi: ");
                        scanf("%d",&value);
                        num[index] = value;
                        printf("Da sua phan tu tai vi tri %d\n",index);
                    }else{
                        printf("Vi tri khong hop le\n");
                    }
                    break;
                }
            case 5:
                {
                    int index;
                    printf("Nhap vi tri muon xoa: ");
                    scanf("%d",&index);
                    if(index>=0 && index<n){
                        for(int i=index;i<n-1;i++){
                            num[i]=num[i+1];
                        }
                        n--;
                        printf("Da xoa phan tu tai vi tri %d\n",index);
                    }else{
                        printf("Vi tri khong hop le\n");
                    }
                    break;
                }
            case 6:
                printf("Thoat chuong trinh\n");
                break;
            default:
                printf("Lua chon khong hop le,chon lai: \n");
        }
    }
    return 0;
}
