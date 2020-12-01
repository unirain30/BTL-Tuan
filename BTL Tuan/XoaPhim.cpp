#include "ThuVien.h"

void xoaphim_cuoi(List &l){
	l.last--;
}

void xoaphim_dau(List &l){
	for(int i = 0; i < l.last; i++){
		l.data[i] = l.data[i+1];
	}
	l.last--;
}

void xoaphim_vitri(List &l){
	int h;
	printf("Nhap vi tri can xoa: ");
	scanf("%d", &h);
	if(h > l.last){
		printf("Khong co vi tri can xoa !\n");
		return;
	}
	for(int i = h - 1; i < l.last; i++){
		l.data[i] = l.data[i+1];
	}
	l.last--;
}
