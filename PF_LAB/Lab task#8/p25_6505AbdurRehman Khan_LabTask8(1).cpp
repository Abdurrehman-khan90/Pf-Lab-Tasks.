#include<stdio.h>
void change(int *, float *,char *);

int main()
{
	int age;
	float cgpa;
	char grade;
	int *p_age=&age;
	float *p_cgpa=&cgpa;
	char *p_grade=&grade;
	printf("Enter age:\n");
	scanf("%d", &age);
	printf("Enter cgpa:\n");
	scanf("%f", &cgpa);
	printf("Enter grade:\n");
	scanf(" %c", &grade);
	printf("age\t = %d via pointer = %d  &age = %p  *p_age= %p", age,*p_age,&age,p_age);
	printf("cgpa = %.2f via_pointer = %.2f &cgpa = %p pCgpa = % p", cgpa,*p_cgpa,&p_cgpa,p_cgpa);
	printf("grade = %c via pointer = %c &grade = %p p_grade = %p", grade, *p_grade, &grade, p_grade);
	printf("&p_age = %p  &p_cgpa = %p &p_grade = %p", &p_age, &p_cgpa,&p_grade);
	printf("After Changing through pointers:\n");
	change(&age,&cgpa,&grade);
   printf("age = %d, cgpa = %.2f, grade = %c", *p_age,*p_cgpa,*p_grade);

	

	return 0;
}
void change(int *age, float *cgpa,char *grade)

{
    *age=*age+1;
	*cgpa=*cgpa+0.25;
	*grade=*grade+1;

	
	
}
	
