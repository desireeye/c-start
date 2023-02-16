#include <stdio.h>
/* take a integer 
output 1 :
     value= 5 , square= 25 cube = 125
output 2 :
  value  sqaure cube 
  5       25     125 */
void main() {
	int a,b;
	printf(" enter a value first number  =");
	scanf("%d",&a);
	
	//printf("Entered value = %d",a);
	//printf("entered value = %d",a); 
	
	printf(" enter a value first value =");
	//printf("\n value b =");
	scanf("%d",&b);
	int max =a<b?b:a;
	int min =a>b?b:a;
	printf("\n max = %d",max);
	printf("\n min = %d",min);
	
	//printf("entered value = %d",b);
	//printf("result = %d",a*b);
	//printf("\nvalue\tsqaure\tcube");
	//printf("\n%d\t%d\t%d",a,a*a,a*a*a);
	
	
	
	
	

}
