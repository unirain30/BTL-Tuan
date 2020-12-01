#include "ThuVien.h"

void sapxep_matang(List &l){
	Phim a;
	for(int i = 0; i < l.last; i++){
		for(int j = i+1; j < l.last; j++){
			if(l.data[j].maphim < l.data[i].maphim){
				a = l.data[j];
				l.data[j] = l.data[i];
				l.data[i] = a;
			}
		}
	}
}

void sapxep_magiam(List &l){
	Phim a;
	for(int i = 0; i < l.last; i++){
		for(int j = i+1; j < l.last; j++){
			if(l.data[j].maphim > l.data[i].maphim){
				a = l.data[j];
				l.data[j] = l.data[i];
				l.data[i] = a;
			}
		}
	}
}

void sapxep_namtang(List &l){
	Phim a;
	for(int i = 0; i < l.last; i++){
		for(int j = i+1; j < l.last; j++){
			if(l.data[j].namsanxuat < l.data[i].namsanxuat){
				a = l.data[j];
				l.data[j] = l.data[i];
				l.data[i] = a;
			}
		}
	}
}

void sapxep_namgiam(List &l){
	Phim a;
	for(int i = 0; i < l.last; i++){
		for(int j = i+1; j < l.last; j++){
			if(l.data[j].namsanxuat > l.data[i].namsanxuat){
				a = l.data[j];
				l.data[j] = l.data[i];
				l.data[i] = a;
			}
		}
	}
}

void sapxep_tentang(List &l){
	Phim a;
	for(int i = 0; i < l.last; i++){
		for(int j = i+1; j < l.last; j++){
			if( strcmp(l.data[j].tenphim, l.data[i].tenphim) > 0){
				a = l.data[j];
				l.data[j] = l.data[i];
				l.data[i] = a;
			}
		}
	}
}

void sapxep_tengiam(List &l){
	Phim a;
	for(int i = 0; i < l.last; i++){
		for(int j = i+1; j < l.last; j++){
			if( strcmp(l.data[j].tenphim, l.data[i].tenphim) < 0){
				a = l.data[j];
				l.data[j] = l.data[i];
				l.data[i] = a;
			}
		}
	}
}

void sapxep_tentgtang(List &l){
	Phim a;
	for(int i = 0; i < l.last; i++){
		for(int j = i+1; j < l.last; j++){
			if( strcmp(l.data[j].tentacgia, l.data[i].tentacgia) > 0){
				a = l.data[j];
				l.data[j] = l.data[i];
				l.data[i] = a;
			}
		}
	}
}

void sapxep_tentggiam(List &l){
	Phim a;
	for(int i = 0; i < l.last; i++){
		for(int j = i+1; j < l.last; j++){
			if( strcmp(l.data[j].tentacgia, l.data[i].tentacgia) < 0){
				a = l.data[j];
				l.data[j] = l.data[i];
				l.data[i] = a;
			}
		}
	}
}
