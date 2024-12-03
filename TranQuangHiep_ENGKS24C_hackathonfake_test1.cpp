#include <stdio.h>
int main(){
	int arr[100],menu,length,currentLength;
	for(;;){
		printf("\nMENU\n");
		printf("1. Nhap so phan tu can nhap va cac gia tri cac phan tu\n");
		printf("2. In ra gia tri cac phan tu dang quan ly\n");
		printf("3. In ra gia tri lon nhat cua mang\n");
		printf("4. In ra cac phan tu la so nguyen to trong mang\n");
		printf("5. Them mot phan tu vao trong mang\n");
		printf("6. Xoa mot phan tu trong mang\n");
		printf("7. Sap xep mang theo thu tu tang dan\n");
		printf("8. Tim kiem phan tu va in ra vi tri index cua phan tu do\n");
		printf("9. Thoat\n");
		printf("Lua chon cua ban: ");
		scanf("%d",&menu);
		if(menu==1){
			for(;;){
				printf("Nhap so phan tu can nhap: ");
				scanf("%d",&length);
				if(0<length&&length<100){
					currentLength=length;
					break;
				}
			}
			printf("Gia tri cac phan tu: \n");
			for(int i=0;i<currentLength;i++){
				scanf("%d",&arr[i]);
			}
			printf("\n");
		}
		
		else if(menu==2){
			for(int i=0;i<currentLength;i++){
				printf("%4d",arr[i]);
			}
			printf("\n");
		}
		
		else if(menu==3){
			int max=arr[0];
			for(int i=0;i<currentLength;i++){
				if(max<arr[i]){
					max=arr[i];
				}
			}
			printf("Gia tri lon nhat cua mang: %d\n",max);
		}
		
		else if(menu==4){
			printf("Cac phan tu la so nguyen to trong mang: \n");
			for(int i=0;i<currentLength;i++){
				int temp=1;
				if(arr[i]<2){
					temp=0;
				}else{
					for(int j=2;j*j<=arr[i];j++){
					   if(arr[i]%j==0){
						temp=0;
						break;
					    }
				    }
				}
				if(temp){
					printf("%4d",arr[i]);
				}
			}
            printf("\n");
		}
		
		else if(menu==5){
			int add;
			currentLength++;
			printf("Them phan tu vao mang: ");
			scanf("%d",&add);
			arr[currentLength-1]=add;
			for(int i=0;i<currentLength;i++){
				printf("%4d",arr[i]);
			}
			printf("\n");
		}
		
		else if(menu==6){
			int del;
			for(;;){
				printf("Xoa phan tu vi tri: ");
				scanf("%d",&del);
				if(0<del&&del<currentLength+1){
					for(int i=del-1;i<currentLength+1;i++){
						arr[i]=arr[i+1];
					}
					currentLength--;
					break;
				}
			}
			for(int i=0;i<currentLength;i++){
				printf("%4d",arr[i]);
			}
			printf("\n");
		}
		
		else if(menu==7){
			for(int i=0;i<currentLength;i++){
				for(int j=0; j<currentLength;j++){
		        	if(arr[i]<arr[j]){
			        	int temp = arr[i];
						arr[i]=arr[j];
			    		arr[j]=temp;
		        	}
		    	}
	    	}
	    	printf("Cac phan tu trong mang sau khi sap xep la:\n");
    			for(int i=0;i<currentLength;i++){
	    			printf("%4d",arr[i]);
	    	    }
	    	printf("\n");
		}
		
		else if(menu==8){
			int find,torf=0;
			printf("Tim phan tu: ");
			scanf("%d",&find);
			for(int i=0;i<currentLength;i++){
				if(arr[i]==find){
					printf("Phan tu o vi tri: %d",i+1);
					torf=1;
				}
			}
			if(!torf){
				printf("Khong tim thay");
			}
		}
		
		else if(menu==9){
			printf("Thoat\n");
			break;
		}
	}
	return 0;
}
