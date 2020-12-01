#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

typedef struct{
	int maphim;
	char tenphim[60];
	char tentacgia[60];
	int namsanxuat;
}Phim;

typedef struct{
	Phim data[1000];
	int last;
}List;

void taolist(List &l);

void docfile(List &l);

void docphim_file(FILE *file, Phim &a);

void themphim_list(List &l, Phim a);

void chon(List l);

void menu();

void menu_khac();

void kiemtra_list(List l);

void demdanhsach(List l);

void menu_themphim();

void themdau(List &l);

void themcuoi(List &l);

void thembatki(List &l);

void nhapthongtinphim(List l, Phim &a);

int kiemtramaphim(List l, int ma);

void inphim(Phim a);

void inlist(List l);

void menu_timphim();

void timphim_ma(List l);

void timphim_tenphim(List l);

void timphim_tentg(List l);

void suaphim(List &l);

void menu_xoaphim();

void xoaphim_dau(List &l);

void xoaphim_cuoi(List &l);

void xoaphim_vitri(List &l);

void menu_sapxep();

void sapxep_matang(List &l);

void sapxep_magiam(List &l);

void sapxep_namtang(List &l);

void sapxep_namgiam(List &l);

void sapxep_tentang(List &l);

void sapxep_tengiam(List &l);

void sapxep_tentgtang(List &l);

void sapxep_tentggiam(List &l);

void luufile(List l);

void randomname(char* ten);

void listtest();
