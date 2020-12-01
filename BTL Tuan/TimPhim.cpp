#include "ThuVien.h"

void timphim_ma(List l){
	int ma;
	printf("Nhap ma phim can tim: ");
	scanf("%d", &ma);
	for(int i = 0; i < l.last; i++){
		if(l.data[i].maphim == ma){
			printf("Phim tim thay tai vi tri %d\n", i+1);
   		printf("\n--------------------------------Danh sach--------------------------------\n");
   		printf(" Ma Phim");
   		printf("       Ten Phim");
   		printf("           Ten tac gia");
   		printf("               Nam san xuat\n");
			inphim(l.data[i]);
			printf("\n------------------------------Het danh sach------------------------------\n");
			printf("\n");
			return;
		}
	}
	printf("Khong co phim can tim!\n");
}

void timphim_tenphim(List l){
	char ten[60];
	printf("Nhap ten phim can tim: ");
	fflush(stdin);
	fgets(ten, sizeof(ten), stdin);
	ten[strlen(ten) - 1] = '\0';
	for(int i = 0; i < l.last; i++){
		if( strcmp(l.data[i].tenphim,ten) == 0){
			printf("Phim tim thay tai vi tri %d\n", i+1);
		   printf("\n--------------------------------Danh sach--------------------------------\n");
   		printf(" Ma Phim");
   		printf("       Ten Phim");
   		printf("           Ten tac gia");
   		printf("               Nam san xuat\n");
			inphim(l.data[i]);
			printf("\n------------------------------Het danh sach------------------------------\n");
			printf("\n");
			return;
		}
	}
	printf("Khong co phim can tim!\n");
}

void timphim_tentg(List l){
	char ten[60];
	int d=0;
	printf("Nhap ten tac gia cua phim can tim: ");
	fflush(stdin);
	fgets(ten, sizeof(ten), stdin);
	ten[strlen(ten) - 1] = '\0';
	for(int i = 0; i < l.last; i++){
		if( strcmp(l.data[i].tentacgia,ten) == 0){
			d++;
			printf("Sach tim thay tai vi tri %d\n", i+1);
		   printf("\n--------------------------------Danh sach--------------------------------\n");
   		printf(" Ma Phim");
   		printf("       Ten Phim");
   		printf("           Ten tac gia");
   		printf("               Nam san xuat\n");
			inphim(l.data[i]);
			printf("\n------------------------------Het danh sach------------------------------\n");
			printf("\n");
		}
	}
	if(d == 0){
		printf("Khong co phim can tim!\n");
	}
}
