// 4. WAP to find the area of the circle. Take radius of circle from user as input and print the result in below given format.
 #include<stdio.h>
 int main()
 {
 	float radius,area;
 	printf("enter a radius of circle:\n");
 	scanf("%f",&radius);
 	area=3.14*radius*radius;
 	printf("area of circle is %.2f",area);
 }
