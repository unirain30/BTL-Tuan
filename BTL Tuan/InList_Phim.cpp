#include "ThuVien.h"

void inphim(Phim a){
	printf("  %-13d", a.maphim);
	printf("%-25s", a.tenphim);
	printf("%-30s", a.tentacgia);
	printf("%-7d\n", a.namsanxuat);
}

void inlist(List l){
   printf("\n----------------------------------Danh sach----------------------------------\n");
   printf(" Ma Phim");
   printf("       Ten Phim");
   printf("               Ten tac gia");
   printf("               Nam san xuat\n");
	for(int i = 0; i < l.last; i++){
		inphim(l.data[i]);
	}
   printf("\n--------------------------------Het danh sach--------------------------------\n");
	printf("\n");
}
