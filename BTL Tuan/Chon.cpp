#include "ThuVien.h"

void chon(List l){
	int i;
	menu();
	scanf("%d", &i);
	while(i > 10){
		printf("Khong co lua chon. Moi ban nhap lai: \n");
		menu();
		scanf("%d", &i);
	}
	while(i <= 9){
		if(i == 1){
			docfile(l);
			inlist(l);
		}
		if(i == 2){
			int o;
			printf("Chon vi tri muon them sach: \n");
			menu_themphim();
			scanf("%d", &o);
			while(o > 3){
				printf("Khong co lua chon. Moi ban nhap lai: \n");
				menu_themphim();
				scanf("%d", &o);
			}
			if(o == 1){
				themdau(l);
				inlist(l);
			}
			if(o == 2){
				themcuoi(l);
				inlist(l);
			}
			if(o == 3){
				thembatki(l);
				inlist(l);
			}
		}
		if(i == 3){
			int o;
			printf("Tim phim theo: \n");
			menu_timphim();
			scanf("%d", &o);
			while(o > 3){
				printf("Khong co lua chon. Moi ban nhap lai:\n");
				menu_timphim();
				scanf("%d", &o);
			}
			if(o == 1){
				timphim_ma(l);
			}
			if(o == 2){
				timphim_tenphim(l);
			}
			if(o == 3){
				timphim_tentg(l);
			}
		}
		if(i == 4){
			suaphim(l);
			inlist(l);
		}
		if(i == 5){
			int o;
			printf("Chon cach xoa phim: \n");
			menu_xoaphim();
			scanf("%d", &o);
			while(o > 3){
				printf("Khong co lua chon. Moi ban nhap lai: \n");
				menu_xoaphim();
				scanf("%d", &o);
			}
			if(o == 1){
				xoaphim_dau(l);
				inlist(l);
			}
			if(o == 2){
				xoaphim_cuoi(l);
				inlist(l);
			}
			if(o == 3){
				xoaphim_vitri(l);
				inlist(l);
			}
		}
		if(i == 6){
			int o;
			printf("Chon cach sap xep: \n");
			menu_sapxep();
			scanf("%d", &o);
			while(o > 8){
				printf("Khong co lua chon. Moi ban nhap lai: \n");
				menu_sapxep();
				scanf("%d", &o);
			}
			if(o == 1){
				sapxep_matang(l);
				inlist(l);
			}
			if(o == 2){
				sapxep_magiam(l);
				inlist(l);
			}
			if(o == 3){
				sapxep_tentang(l);
				inlist(l);
			}
			if(o == 4){
				sapxep_tengiam(l);
				inlist(l);
			}
			if(o == 5){
				sapxep_tentgtang(l);
				inlist(l);
			}
			if(o == 6){
				sapxep_tentggiam(l);
				inlist(l);
			}
			if(o == 7){
				sapxep_namtang(l);
				inlist(l);
			}
			if(o == 8){
				sapxep_namgiam(l);
				inlist(l);
			}
		}
		if(i == 7){
			luufile(l);
		}
		if(i == 8){
			int o;
			printf("Chon option: \n");
			menu_khac();
			scanf("%d", &o);
			while(o > 2){
				printf("Khong co lua chon. Moi ban nhap lai: \n");
				menu_khac();
				scanf("%d", &o);
			}
			if(o == 1){
				demdanhsach(l);
			}
			if(o == 2){
				kiemtra_list(l);
			}
		}
		if(i == 9){
			listtest();
		}
		menu();
		scanf("%d", &i);
	}
	if(i == 10){
		return;
	}
}
