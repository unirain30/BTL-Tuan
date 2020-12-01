#include "ThuVien.h"

int kiemtramaphim(List l, int ma){
	for(int i = 0; i < l.last; i++){
		if(l.data[i].maphim == ma){
			printf("Trung ma phim. Moi ban nhap lai.\n");
			return 1;
		}
	}
	return 0;
}
