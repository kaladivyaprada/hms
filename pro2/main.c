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
   int i,n,branch;
   printf("Enter the Number of students:");
   scanf("%d",&n);
   printf("Enter the details of students\n",&n);
   for(i=0; i<n; i++){
    printf("Enter Name , USN, Branch and percentage of the student %d",i+1);
    scanf("%s%s%s%f",s[i].name,s[i].USN,s[i].branch, &s[i].percentage);
   };
   printf("Enter the branch to be Search");
   scanf("%s", branch);
   printf("Display the student belong to particular Branch");
   for(i=0; i<n; i++){
        if(strcmp(s[i].branch,branch)== 0)
        printf("%s\t%s\t%s\t%f\n",s[i].name,s[i].USN,s[i].branch,&s[i].percentage);
   };
   return 0;
}
