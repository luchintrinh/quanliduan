#include<bits/stdc++.h>
using namespace std;
float pi=3.14;
//cau 1
float a[4];
void nhap(){
	for(int i=0; i<3; i++){
		cin>>a[i];
	}
}
void xetkhoang(){
	bool check=true;
	for(int i=0; i<3; i++){
		if(a[i]<pi||a[i]>2*pi){
			check=false;
			break;
		}
	}
	if(check==false) cout<<"NOT all of three numbers is in the range pi....2pi"<<endl;
	else cout<<"ALL of three numbers is in the range pi....2pi"<<endl;
}
int main(){
	nhap();
	xetkhoang();
}
// heehe da them doan nay nha
