#include <stdio.h>
#include <math.h>
int main(){
    int num[100];
    int n=0;
    int x=0;
    while(x!=8){
        printf("menu\n");
        printf("1. Nhap so phan tu can nhap va gia tri cac phan tu\n");
        printf("2. In ra gia tri cac phan tu dang quan ly\n");
        printf("3. In ra gia tri cac phan tu chan va tinh tong\n");
        printf("4. In ra gia tri lon nhat va nho nhat trong mang\n");
        printf("5. In ra cac phan tu la so nguyen to trong mang va tinh tong\n");
        printf("6. Nhap vao mot so va thong ke trong mang co bao nhieu phan tu do\n");
        printf("7. Them mot phan tu vao vi tri chi dinh\n");
        printf("8. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d",&x);
        switch(x){
            case 1:
                printf("Nhap so phan tu: ");
                scanf("%d",&n);
                for(int i=0;i<n;i++) {
                    printf("Nhap phan tu thu %d: ", i+1);
                    scanf("%d",&num[i]);
                }
                break;
            case 2:
                printf("Gia tri cac phan tu dang quan ly: ");
                for(int i=0;i<n;i++){
                    printf("%d ",num[i]);
                }
                printf("\n");
                break;
            case 3:
                {
                    int sum=0;
                    printf("Cac phan tu chan: ");
                    for(int i=0;i<n;i++){
                        if(num[i]%2==0){
                            printf("%d ",num[i]);
                            sum+=num[i];
                        }
                    }
                    printf("\nTong cac phan tu chan: %d\n",sum);
                }
                break;
            case 4:
                {
                    int max=num[0],min=num[0];
                    for(int i=1;i<n;i++) {
                        if(num[i]>max){
                        	max=num[i];
						} 
                        if(num[i]<min){
                        	min=num[i];
						}
                    }
                    printf("Gia tri lon nhat: %d\n",max);
                    printf("Gia tri nho nhat: %d\n",min);
                }
                break;
            case 5:
                {
                    int sum=0;
                    printf("Cac phan tu la so nguyen to: ");
                    for(int i=0;i<n;i++){
                        int soNguyenTo=1;
                        if(num[i]<2){
                            soNguyenTo=0;
                        }else {
                           
                            for(int j=2;j<=num[i]/2;j++){
                                if(num[i]%j==0){
                                    soNguyenTo=0;
                                    break;
                                }
                            }
                        }
                        if(soNguyenTo){
                            printf("%d ",num[i]);
                            sum+=num[i];
                        }
                    }
                    printf("\nTong cac phan tu la so nguyen to: %d\n",sum);
                }
                break;
            case 6:
                {
                    int count=0,x;
                    printf("Nhap vao so can tim: ");
                    scanf("%d",&x);
                    for(int i=0;i<n;i++){
                        if(num[i] == x){
                        	count++;
						}
                    }
                    printf("So %d xuat hien %d la\n",x,count);
                }
                break;
            case 7:
                {
                    int index,value;
                    printf("Nhap vi tri muon them: ");
                    scanf("%d",&index);
                    if(index>=0 && index<=n){
                        printf("Nhap gia tri muon them: ");
                        scanf("%d",&value);
                        for(int i=n;i>index;i--){
                            num[i]=num[i-1];
                        }
                        num[index]=value;
                        n++;
                        printf("Da them phan tu %d vao vi tri %d\n",value,index);
                    } else {
                        printf("Vi tri khong hop le\n");
                    }
                }
                break;
            case 8:
                printf("Thoat chuong trinh\n");
                break;
            default:
                printf("Lua chon khong hop le, vui long chon lai\n");
        }
    }
    return 0;
}
