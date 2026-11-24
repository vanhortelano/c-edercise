#include<stdio.h>

void partA();
void partB();
void partC();
void partD();
void partE();



int main(){


char choose;
printf("What part you want to see please choose[A-E]: ");
scanf("%c",&choose);

switch(choose){
	case 'A':
	partA();
	printf("Hello");
	break;
	
	case 'B':
	partB();
	printf("Hello");
	break;
	
	case 'C':
	partC();
	printf("Hello");
	break;
	
	case 'D':
	partD();
	printf("Hello");
	break;
	
	case 'E':
	partE();
	printf("Hello");
	break;
	
	default:
	printf("Sorry this is error please choose between the choices or try to uppercase your choices.");
	break;
	
}

return 0;
}

void partA(){
	int a=6;
	
	while(a<=66){
	printf("%d ",a);
	a+=2;
	}
	
	return;
}

void partB(){
	int a=7;
	
	while(a<=67){
	printf("%d ",a);
	a+=2;
	}
	
	return;
}

void partC(){
	int a=1,n=0;
	
	while(a<=15){
	n +=a;
	a++;}
	
	printf("%d ",n);
	return;
}

void partD(){
	int a=15,n=0;
	
	while(a<=45){
	n +=a;
	a+=2;
	}
	
	printf("%d ",n);
	return;
}

void partE(){
	int a=1,n=0;
	
	while(a<=50){
	n +=a;
	a+=3;
	}
	
	printf("%d ",n);
	return;
}



