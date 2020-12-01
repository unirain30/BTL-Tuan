#include "ThuVien.h"

void nhapthongtinphim(List l, Phim &a){
	int ma, h;
	printf("Nhap ma phim: ");
	scanf("%d", &ma);
	h = kiemtramaphim(l, ma);
	while(h == 1){
		scanf("%d", &ma);
		h = kiemtramaphim(l, ma);
		if(h == 0){
			continue;
		}
	}
	a.maphim = ma;
	printf("Nhap ten phim: ");
	fflush(stdin);
	fgets(a.tenphim, sizeof(a.tenphim), stdin);
	a.tenphim[strlen(a.tenphim) - 1] = '\0';
	printf("Nhap ten tac gia: ");
	fflush(stdin);
	fgets(a.tentacgia, sizeof(a.tentacgia), stdin);
	a.tentacgia[strlen(a.tentacgia) - 1] = '\0';
	printf("Nhap nam san xuat: ");
	scanf("%d", &a.namsanxuat);
	printf("\n");
}
