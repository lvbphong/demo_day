#include "PhanSo.h"
#include <math.h>

PhanSo::PhanSo(){
	tu=0;
	mau=1;
}
	
	PhanSo::PhanSo(int t, int m){
		tu=t;
		mau=m;
	}
	PhanSo& PhanSo::operator+=(const PhanSo& src){
	tu=tu*src.mau+mau*src.tu;
	mau=mau*src.mau;
	return *this;
	} //B=+=A
	const PhanSo PhanSo::operator+(const PhanSo& src) const{
	PhanSo temp;
	temp.tu=tu*src.mau+mau*src.tu;
	temp.mau=mau*src.mau;
	return temp;
	} //C=A+B
	bool PhanSo::operator==(const PhanSo& src) const{
	return((tu==src.tu)&&(mau==src.mau));
	}
	PhanSo& PhanSo::operator++(){
	tu=tu+mau;
	return *this;
	}// ++ tien to ++A
	PhanSo PhanSo::operator++(int){
	PhanSo temp=*this;
	++(*this);
	return temp;
	} // ++ hau to A++
	 ostream& operator<<(ostream& out,const PhanSo& src){
		out <<src.tu<<"/"<<src.mau;
		return out;
	}
