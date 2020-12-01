#include "ThuVien.h"

void docsach_file(FILE *file, Phim &a){
	fscanf(file, "%d", &a.maphim);
	fgets(a.tenphim, sizeof(a.tenphim), file);
	fgets(a.tenphim, sizeof(a.tenphim), file);
	a.tenphim[strlen(a.tenphim) - 1] = '\0';
	fgets(a.tentacgia, sizeof(a.tentacgia), file);
	a.tentacgia[strlen(a.tentacgia) - 1] = '\0';
	fscanf(file, "%d", &a.namsanxuat);
}

void docfile(List &l){
	FILE *file;
	file = fopen("DS.txt","r");
	while(!feof(file)){
		Phim a;
		docsach_file(file, a);
		themphim_list(l, a);
	}
	fclose(file);
}
