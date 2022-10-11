// NAMA		: Alvian Syiham Risal
// NRP		: 5018221057    
// Jurusan	: Teknik Perkapalan

#include <iostream>
#include <cmath>

#define GRAVITASI 10 //10 m/s^2
#define START_PENGUKURAN 1 //pengukuran dimulai dari 1 meter
#define SUDUT 45 //sudut elevasi tembakan

float mencari_V0(int v)
{
	
	  	 if(v>=1 && v<=10){
  	 	v += 1;
	   }else if(v>=11 && v<=20){
	   	v += 3;
	   }else if (v>=21 && v<=30){
	   	v += 5;
	   }
	float d = v;
	if(d>=30){
		return d=30;
	}else{
	return v;	
	}
  	 
}

int speed_dgn_loss(int v)
{
  	 if(v>=1 && v<=10){
  	 	v -= 1;
	   }else if(v>=11 && v<=20){
	   	v -= 3;
	   }else if (v>=21 && v<=30){
	   	v -= 5;
	   }
	
	int s = (pow(v,2) * sin(2*45)) / 10;
    return s;
}

int main() {
    /* tulis kode utama kalian disini */
  	int v;
  	/* input adalah kecepatan tangensial maksimum roller */
  	 std::cin >> v;  
  	std::cout << speed_dgn_loss(v) << " " << mencari_V0(v) << std::endl;
    return 0;
}
