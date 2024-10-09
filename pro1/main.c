#include <stdio.h>
#include <stdlib.h>

int main()
{
   struct student{
   char name[20];
   char USN[20];
   char branch[10];
   float percentage;
   };
   struct student s[20];
   int i,n;
   printf("Enter the Number of students:");
   scanf("%d",&n);
   printf("Enter the details of students\n",&n);
   for(i=0; i<n; i++){
    printf("Enter Name , USN, Branch, percentage of the student:%d->",i+1);
    scanf("%s%s%s%f",s[i].name,s[i].USN,s[i].branch, &s[i].percentage);
   };
   printf("List of students whose percentage is in range of 90-100\n");
   for(i=0; i<n; i++){
    if(s[i].percentage>=90 && s[i].percentage<=100)
        printf("%s\t%s\t%s\t%f\n",s[i].name,s[i].USN,s[i].branch,s[i].percentage);
   }
    return 0;
}
