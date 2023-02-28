#include<stdio.h>
#include<math.h>

double calcProb(double rating1,double rating2){

	double p =(1.0 / (1.0 + pow(10, ((rating1-rating2) / 400))));
	
	return p;
}

void CalcK(int K){
	double age1=31.0,age2=17.0,matchnumber1=19.0,matchnumber2=11.0;
	double rating1,rating2;
	int Ka,Kb;
	double players[3][3] = {   {rating1,matchnumber1,age1},{rating2,matchnumber2,age2}  };
	
	if(matchnumber1<30){
	K = 40;
	}	
	if(matchnumber1>30 && rating1<2400.0){
	K = 20;
	}
	if(matchnumber1>30 && rating1>2400.0){
	K = 10;
	}
	if(age1<18 && rating1<3400.0){
	K = 40;
	}



	if(matchnumber2<30){
	Kb = 40;
	}	
	if(matchnumber2>30 && rating2<2400.0){
	Kb = 20;
	}
	if(matchnumber2>30 && rating2>2400.0){
	Kb = 10;
	}
	if(age2<18 && rating2<3400.0){
	Kb = 40;
	}
}

void calcRating(double rating1,double rating2){
		int m,Ka,Kb,a,b;
		rating1=1200.0,rating2=1000.0;
		

	if(m==1){
	rating1 += (CalcK(Ka))*(1 – (calcProb(a)));
	rating2 += (CalcK(Kb))*(0 - (calcProb(b)));

	}
	if(m==2){
	rating1 += (CalcK(Ka))*(0 – (calcProb(a)));
	rating2 += (CalcK(Kb))*(1 - (calcProb(b)));

	}
	if(m==0){
	rating1 += (CalcK(Ka))*(0.5 – (calcProb(a)));
	rating2 += (CalcK(Kb))*(0.5 - (calcProb(b)));
	}
	
}

void main(){
	double a = calcProb(1000.0,1200.0);
	printf("Probablity of player 1:%f\n",a);
	double b = calcProb(1200.0,1000.0);
	printf("Probablity of player 2:%f\n",b);
	
	int m;
	printf("who will win 1 or 2 or 0?\n",m);
	scanf("%d\n",&m);
	printf("last ratings are:%f and %f\n",CalcRating(rating1,rating2));
	
	system("Pause\n");
	return 0;
}





