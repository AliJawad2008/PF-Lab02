#include <stdio.h>
int main(){
int s=1,marks;
int pass=0;
int fail=0;
int highest=0,student1=0,student2=0,student3=0,student4=0,student5=0,total=0;
float avg;
for (;s <=5;s++)
{
printf("Enter student marks : ");
scanf("%d",&marks);
if (marks < 0 || marks > 100){
printf("Invalid marks");
return 0;
}
if (marks >= 50)
pass++;
else
fail++;
if ( s ==1 )
student1=marks;
else if ( s==2)
student2=marks;
else if ( s==2)
student3=marks;
else if ( s==3)
student3=marks;
else if ( s==4)
student4=marks;
else if ( s==5)
student5=marks;
total +=marks;
if ( highest < marks)
highest = marks;
}
avg = (float) total / 5;
printf("Total students are 5\n");
printf("student 1 marks  are %d\nstudent 2 marks  are %d\nstudent 3 marks  are %d\nstudent 4 marks  are %d\nstudent 4 marks  are %d\nstudent 5 marks  are %d\n",student1,student2,student3,student4,student5);
printf("Average of the class is %.2f\nHighest marks are %d\nStudents passed are %d\nStudents failed are %d\nTotal is %d",avg,highest,pass,fail,total);
return 0;
}
