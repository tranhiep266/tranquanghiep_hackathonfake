#include <stdio.h>
int main(){
	int rows,cols,arr[100][100],menu,arru[100],n;
	for (;;){
		printf("\nMENU\n");
		printf("1. Nhap kich co va gia tri cac phan tu cua mang\n");
		printf("2. In gia tri cac phan tu cua mang theo ma tran\n");
		printf("3. In ra cac phan tu nam tren duong bien va tinh tich\n");
		printf("4. In ra cac phan tu nam tren duong cheo chinh\n");
		printf("5. In ra cac phan tu nam tren duong cheo phu\n");
		printf("6. Sap xep duong cheo chinh theo thu tu tang dan\n");
		printf("7. Tim kiem mot phan tu va in ra vi tri cua phan tu do trong mang\n");
		printf("8. Thoat\n");
		printf("Lua chon cua ban: \n");
		scanf("%d",&menu);
		printf("\n");
		// nhap kich co va gia tri cac phan tu cua mang
		if (menu==1){
			for(;;){
				printf("Nhap so hang: ");
			    scanf("%d",&rows);
				if(rows>0&&rows<101){
					break;
				}
			}
			for(;;){
				printf("Nhap so cot: ");
			    scanf("%d",&cols);
				if(cols>0&&cols<101){
					break;
				}
			}
			printf("Nhap cac gia tri phan tu cua mang: \n");
			for(int i=0;i<rows;i++){
				for(int j=0;j<cols;j++){
					printf("Nhap arr[%d][%d]: ",i,j);
					scanf("%d",&arr[i][j]);
				}
			}
			printf("\n");
		}
		
		//In giá tr? các ph?n t? c?a m?ng theo ma tr?n
		else if (menu==2){
			for(int i=0;i<rows;i++){
				for(int j=0;j<cols;j++){
					printf("%4d",arr[i][j]);
				}
				printf("\n");
			}
			printf("\n");
		}
		
		//In ra các ph?n t? n?m trên du?ng biên và tính tích
		else if (menu==3){
			int product=1;
			printf("Cac phan tu nam tren duong bien: \n");
			for(int i=0;i<rows;i++){
				for(int j=0;j<cols;j++){
					if(i==0||i==rows-1||j==0||j==cols-1){
						printf("%4d",arr[i][j]);
						product*=arr[i][j];
					}
				}
			}
			printf("\n");
			printf("Tich cac phan tu do: %d\n",product);
			printf("\n");
		}
		
		
		//In ra các ph?n t? n?m trên du?ng chéo chính
		else if (menu==4){
			if(rows==cols){
				printf("Cac phan tu nam tren duong cheo chinh: \n");
				for(int i=0;i<rows;i++){
					for(int j=0;j<cols;j++){
						if(i==j){
							printf("%4d",arr[i][j]);
						}
					}
				}
			}else{
				printf("Khong co duong cheo chinh");
			}
			printf("\n");
		}
		
		
		//In ra các ph?n t? n?m trên du?ng chéo ph?
		else if (menu==5){
			if(rows==cols){
				printf("Cac phan tu nam tren duong cheo phu: \n");
				for(int i=0;i<rows;i++){
					printf("%4d",arr[i][cols-i-1]);
				}
			}else{
				printf("Khong co duong cheo phu");
			}
			printf("\n");
		}
		
		
		//S?p x?p du?ng chéo chính theo th? t? tang d?n 
		else if (menu==6){
			int add=0;
			if(rows==cols){
				for(int k=0;k<rows;k++){
					for(int i=0;i<rows;i++){
					    for(int j=0;j<cols;j++){
				    		if(i==j){
				    			arru[add]=arr[i][j];
				    			add++;
					    	}
				    	}
			    	}
				}
		    	for(int i=0;i<rows;i++){
			    	for(int j=0; j<rows;j++){
		    			if(arru[i]>arru[j]){
			    			int temp = arru[i];
			    			arru[i]=arru[j];
			    			arru[j]=temp;
		    			}
		    		}
	    		}
	    		printf("Cac phan tu trong mang sau khi sap xep la:\n");
    			for(int i=0;i<rows;i++){
	    			printf("%d\t",arru[i]);
	    		}
			}else{
				printf("Khong co duong cheo chinh");
	    	}
	    	printf("\n");
		}
		
		
		//Tìm ki?m m?t ph?n t? và in ra v? trí c?a ph?n t? dó trong m?ng
		else if (menu==7){
			int find,posi;
			printf("Tim kiem phan tu: ");
			scanf("%d",&find);
			for(int i=0;i<rows;i++){
				for(int j=0;j<cols;j++){
					if(find==arr[i][j]){
						printf("Vi tri cua phan tu do: arr[%d][%d]\n",i,j);
					}
				}
			}
		}
		
		
		//Thoat
		else if (menu==8){
			printf("Thoat");
			break;
		}
	}
	return 0;
}
