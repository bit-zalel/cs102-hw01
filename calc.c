#include <stdio.h>
#include <stdlib.h>

 int main(int argc, char *argv[])
 { 
	if(argc ="4"){
 	char op = *argv[1];
 	double num1 =atof(argv[2]);
 	double num2 =atof(argv[3]);

 	double num3 = num1*num2;
 	double num4 = num1/num2;
 	double num5 = num1+num2;
 	double num6 = num1-num2;
	
	if(op == 'x'){
		printf("%f\n", num3);
	}
	if(op == '/'){
		printf("%f\n", num4);
	}
	if(op == '-'){
		printf("%f\n", num6);
	}
	if(op == '+'){
		printf("%f\n", num5);
	}
	
 	
 	
 		
return 0;
}
}