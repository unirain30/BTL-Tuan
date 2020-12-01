#include "ThuVien.h"

void suaphim(List &l){
	int ma;
	printf("Nhap ma phim muon sua: ");
	scanf("%d", &ma);
	for(int i = 0; i < l.last; i++){
		if(l.data[i].maphim == ma){
			printf("Nhap ten phim moi: ");
			fflush(stdin);
			fgets(l.data[i].tenphim, sizeof(l.data[i].tenphim), stdin);
			l.data[i].tenphim[strlen(l.data[i].tenphim) - 1] = '\0';
			printf("Nhap ten tac gia moi: ");
			fflush(stdin);
			fgets(l.data[i].tentacgia, sizeof(l.data[i].tentacgia), stdin);
			l.data[i].tentacgia[strlen(l.data[i].tentacgia) - 1] = '\0';
			printf("Nhap nam san xuat moi: ");
			scanf("%d", &l.data[i].namsanxuat);
			return;
		}
	}
	printf("Khong co phim can sua !\n");
}
