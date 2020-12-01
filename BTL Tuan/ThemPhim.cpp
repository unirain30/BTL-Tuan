#include "ThuVien.h"

void themdau(List &l){
	Phim a;
	for(int i = l.last; i > 0; i--){
		l.data[i] = l.data[i - 1];
	}
	nhapthongtinphim(l, a);
	l.data[0] = a;
	l.last++;
}

void themcuoi(List &l){
	Phim a;
	nhapthongtinphim(l, a);
	themphim_list(l, a);
}

void thembatki(List &l){
	int h;
	Phim a;
	printf("Nhap vi tri can them: ");
	scanf("%d", &h);
	if(h > l.last){
		printf("Khong co vi tri can them");
		return;
	}
	for(int k = l.last; k >= h; k--){
		l.data[k] = l.data[k-1];
	}
	nhapthongtinphim(l, a);
	l.data[h-1] = a;
	l.last++;
}
