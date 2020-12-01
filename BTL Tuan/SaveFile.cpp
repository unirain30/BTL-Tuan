#include "ThuVien.h"

void luufile(List l){
	FILE *file;
	file = fopen("DS.txt","w");
	for(int i = 0; i < l.last; i++){
      fprintf(file, "%d\n", l.data[i].maphim);
      fputs(l.data[i].tenphim, file);
      fputs("\n", file);
      fputs(l.data[i].tentacgia, file);
      fputs("\n", file);
      fprintf(file, "%d", l.data[i].namsanxuat);
      fprintf(file, "\n");
	}
	fclose(file);
}
