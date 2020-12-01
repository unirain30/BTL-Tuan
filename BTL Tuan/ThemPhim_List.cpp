#include "ThuVien.h"

void themphim_list(List &l, Phim a){
	l.data[l.last] = a;
	l.last++;
}
