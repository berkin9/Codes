                                  /////INTERSTELLAR PROGRAMMING GAME/////

#include<stdio.h>
#include<time.h>



int main(void){
	int a,guess; 
	a=srand()%10;
	int j,r,i;
	j=srand()%1;
	int counter=0;
	planet_one(a,guess);
	planet_two(a,guess);
	planet_three(r,i);
	planet_four(int c, int u);
	planet_five(int c, int u);
	planet_six(int n);
	planet_seven(int a,int b,int u);
	planet_eight(int m);

	
	
}


int planet_one(int a,int guess){
	printf("I selected a number between 1 and 10\n");
	a=rand()%10;
	int counter=0;
	int j,r,p;
	j=srand()%1;
	
while(1){
	printf("please make a guess\n");

	scanf("%d",&guess);
	if(a<guess){
		printf("lower\n");
		counter++;
		
	}
	else if(a>guess){
		printf("higher\n");
		counter++;
	}
	else{
		counter++;
		printf("correct you guessed in %d trial\n",counter);
		break;
	}
}	
}

int planet_two(int a,int guess){
	printf("I selected a number between 1 and 20\n");
	a=srand()%20;
	int counter=0;
	int j,r,p;
	j=srand()%1;

	if(j==0){
	
	
while(1){
	printf("please make a guess\n");

	scanf("%d",&guess);
	if(a==guess){
		counter++;
		printf("correct you guessed in %d trial\n",counter);
		break;

		
	}
	else if(a>guess){
		printf("lower\n");
		counter++;
	}
	else{
		printf("higher\n",counter);
		counter++;
	}
	
	
}
}
else{
	while(1){
	
		if(a<guess){
			printf("lower\n");
			counter++;
		
	}
		else if(a>guess){
			printf("higher\n");
			counter++;
	}
		else{
			counter++;
			printf("correct you guessed in %d trial\n",counter);
	}
}
}
}

int planet_three(int r ,int i ){
	int c=0;
	int counter=0;
	r=srand()%(23+1-7)+7;
	printf("You should reach %d by using 2,3 and 5 from 0.\n",r);

while(c<=r){
	printf("current value is %d\n",c);

	if(c<=r){
		if(c<r){
			printf("enter an increament value\n",i);
			scanf("%d",&i);

					if(i==2){
						c+=2;
						counter++;
					}
					else if(i==3){
						c+=3;
						counter++;
					}	
					else if(i==5){
						c+=5;
						counter++;
					}
					else{
						printf("You can only use 2,3 and 5!\n");
					}
		}
		else if(c==r){
			printf("You reached in %d trial.\n",counter);
			break;
		}
}
	
	else if(c>r){
		printf("current value is %d\n",c);
		printf("You passed\n");
		break;
		}
	
	
}
	return c;
}

int planet_four(int c, int u){
	
	for(i=0;i<3;i++){
	
	printf("Please roll the dice:");
	scanf("%d",&u);
	c=srand()%6;
	printf("You rolled %d Computer rolled:%d",u,c);
	if(u>c){
		printf("User won\n");
		counter++;
	}
	if(u<c){
		printf("Computer won\n");
		counter++;
	}
	if(u=c){
		printf("Draw!Please roll again\n");
	}
}
	
	
}

int planet_five(int c, int u){
	
	printf("Paper=1,rock=2,scissor=3\n");

	for(i=0;i<3;i++){
	
	scanf("%d",&u);
	c=srand()%3;
	printf("You selected %d Computer selected:%d",u,c);
	
	if(u=1 && c=2){
		printf("User won\n");
		counter++;
	}
	if(u=2 && c=3){
		printf("User won\n");
		counter++;
	}
	if(u=3 && c=1){
		printf("User won\n");
		counter++;
	}
	if(u=c){
		printf("Draw!Please roll again\n");
		counter++;
	}
	else{
		printf("Computer won\n");
		counter++;
	}
}
	
}

int planet_six(int n){
	int	n=srand()%255,i,a[10];
	
	printf("Computer selected number as %d",n);
	
	for(i=0;n>0;i++){	    
	a[i]=n%2;    
	n=n/2;    
	}
	
	printf("What is the digit 2 (question 1/3) :");
	scanf("%d",x);
	if(x=a[1]){
		printf("User enter %d correct\n",x);
	}
	else{
		printf("False\n");
	}
	
	printf("What is the digit 4 (question 2/3) :");
	scanf("%d",y);
	if(y=a[3]){
		printf("User enter %d correct\n",y);
	}
	else{
		printf("False\n");
	}
	

	printf("What is the digit 7 (question 3/3) :");
	scanf("%d",z);
	if(x=a[6]){
		printf("User enter %d correct\n",z);
	}
	else{
		printf("False\n");
	}

 
}

int planet_seven(int a,int b,int u){
	int counter=0;
	srand(time(NULL)); 

	a=srand()%20;
	b=srand()%20;

	printf("What is %d * %d?\n",a,b);
	time(&start);
	scanf("%d",u);
	time(&finish);
	while(){
	
		if(u=(a*b)){
			printf("Correct you spent %d seconds for that question which is %d hours on this planet\n",counter,counter);
			counter++;
		}
		else{
			return 1;
		}
	}
	
	
	
}

int planet_eight(int m){
	
	printf("Which number must be ?");
	printf("16-06-68-88-?-98");
	
	scanf("%d",m);

	
	if(m==78){
		printf("%correct\n");
	}
	else(){
		printf("%try again\n");

	}
	

	
	
	
	
}



	




