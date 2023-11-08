#include<iostream>
//algo 1.1E
//Euclid's algorith from HCF
//m,n 
//r = m % n
//if r == 0 then n is the HCF
//else 
//m = n ; n = r 
//
[[nodiscard]] int HCF(int n1, int n2){
	auto m = n1;
	auto n = n2 ;
	if(m<n){
		m = n2 ;
		n = n1 ;
	}
	while(1){
		auto r = m % n;
		if(r==0)
			return n;
		else{
			m = n ;
			n = r;
		}
	}
	return n;
}
int main(){
	int hcf = HCF(25,20);
	std::cout<<hcf<<std::endl;
	hcf = HCF(119,544);
	std::cout<<hcf<<std::endl;
	hcf = HCF(29,79);
	std::cout<<hcf<<std::endl;
	return 1;
}
