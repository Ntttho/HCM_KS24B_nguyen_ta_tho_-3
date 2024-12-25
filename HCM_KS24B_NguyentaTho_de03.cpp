#include<stdio.h>
#include<math.h>
const int max=100;
int main(){
	int t=1;
	int arr[max], size=0;
	int count_nt;
	int min, max, min2;
	int them, themvl;
	int dele;
	int start, mid, end;
	int len;
	while(t){
		int n; 
		printf("================================menu=================================\n");
		printf("1. nhap so phan tu va gia tri cho mang\n");
		printf("2. in ra cac gia tri cac phan tu trong mang (theo dang) \n");
		printf("3. dem so luong cac so nguyen trong mang\n");
		printf("4. tim gia tri nho thu hai trong mang\n");
		printf("5. them mot phan tu vao vi tri ngau nhien trong mang\n");
		printf("6.xoa phan tu cu the trong mang\n");
		printf("7. sap xep mang theo thu tu giam dan(insertion sort) \n");
		printf("8. cho nguoi dung nhap tu ban phim va tim phan tu do trong mang(binary search)\n");
		printf("9. xoa toan bo phan tu bi trung lap va hien thi phan tu doc nhat co o trong mang\n");
		printf("10. dao nguoc thu tu cac phan tu trong mang\n");
		printf("=====================================================================\n");
		printf("nhap lua chon cua ban: "); scanf("%d",&n);
		switch(n){
			case 1:
				printf("nhap so luong phan tu can them: ");scanf("%d",&size);
				if(size<=0){
					size=1;
				} else if(size>100){
					size=100;
				}
				for(int i=0;i<size;i++){
					printf("arr[%d] = ",i);scanf("%d",&arr[i]);
				}
				break;
			case 2:
				if(size!=0){
					for(int i=0;i<size;i++){
						printf("arr[%d]=%d",i,arr[i]);
						if(i!=size-1){
							printf(", ");
						}
					}
					printf("\n");
				} else {printf("mang chua khai bao gia tri\n");
				}
				break;
			case 3:
				count_nt=0;
				for(int i=0;i<size;i++){
					int check=1;
					int num=arr[i];
						if(num<2){
							check=0; 
						}
					for(int j=2;j<=sqrt(num) && num>=2;j++){
						if(num>=2 && num%j==0){
							check=0;
							break;
						}
					}
					if(check!=0){
						count_nt++;
					}
				}
				printf("mang co %d so nguyen to!\n",count_nt);
				 
				break;
			case 4:
				min=arr[0]; max=arr[0];
				for(int i=0;i<size;i++){
					if(min>arr[i]){
						min=arr[i];
					}
					if(max<arr[i]){
						max=arr[i];
					}
				}//co min co max
				min2=min;
				for(int i=0;i<size;i++){
					if( arr[i]>min && arr[i]<max ){
						min2=arr[i];
						max=arr[i];
					}
				}
				printf("gia tri nho thu 2 trong mang la: %d\n",min2);
				break;
			case 5: 
				printf("nhap vi tri ban muon them:"); scanf("%d",&them);
				if(them<=0){
					them=0;
				} else if(size>=max){
					size=0;
				} else if(them>size){
					them=size;
				}
				size++;
				printf("nhap gia tri ban muon them vao mang: ");scanf("%d",&themvl);
				for(int i=size; i>them;i--){
					arr[i]=arr[i-1];
				}
				arr[them]=themvl;
				break;
			case 6: 
				if(size<=max){
					printf("nhap vi tri ban muon xoa: "); scanf("%d",&dele);
					if(dele<size && dele >0){
					for(int i=dele;i<size;i++){
						arr[i]=arr[i+1];
					}
					size--;
				}
				}
				break;
			case 7: 
				for(int i=1;i<size;i++){
					int j=i-1;
					int key=arr[i];
					while(j>=0 && key>arr[j]){
						arr[j+1]=arr[j];
						j--;
					}
					arr[j+1]=key;
				}
				break;
			case 8:
				start=0; end=size-1;
				while(start>=end){
					
				}
				break;
			case 9: 
				
				break;
			case 10:
				len=size-1;
				for(int i=0;i<size/2;i++){
					int temp=arr[i];
					arr[i]=arr[len];
					arr[len]=temp;
					len--;
				}
				break;
			default:
				break;
		}
	}
	
	return 0;
}
