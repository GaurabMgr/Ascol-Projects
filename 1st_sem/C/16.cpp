#include<stdio.h>
#include<math.h>
main(){
	printf("Name: Gaurab Ale Magar\n");
	printf("Read the values of coefficients a,b,c of quadratric eqn and find root of it\n");
	float a,b,c,root,discriminant;
	printf("Enter the value of quadratic coefficients a,b and c: ");
	scanf("%f%f%f",&a,&b,&c);
	discriminant=pow(b,2)-(4*a*c);
	if(discriminant>0){
		printf("\nThe roots are %f and %f",(-b+pow(discriminant,0.5))/(2*a),(-b-pow(discriminant,0.5))/(2*a));
	}else if(discriminant<0){
		float realpart=-(b/(2*a));
		float imaginarypart=pow(-discriminant,0.5)/(2*a);
		printf("\nThe roots are %f+i%f and %f-i%f",realpart,imaginarypart,realpart,imaginarypart);
	}else{
		printf("\nThe root is %f",(-b+pow(discriminant,0.5))/(2*a));
	}
}
