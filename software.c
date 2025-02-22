#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct faculty
{
	char name[30];
	char fname[30];
	char mname[30];
	char qaulification[10];
	char specialisation[20];
	int salary;
	int experience;
	int contact;
}
struct student
{
	char name[30];
	char scholarno[12];
	char fname[30];
	char mname[30];
	char course[15];
	int year;
	int dateofbirth;
	int contact;
}
struct stuff
{
	char name[30];
	char post[15];
	int salary;
	int contact;
}
struct books
{
	char bookid[10];
	char subject[30];
	char title[30];
	char author[30];
	char issuedby[30];
	int dateofissue;
	int dateofreturn;
}
void main()
{
	struct faculty s[100];
	File *fp;
	int i,m;
	fp=fopen("flrecord","wb");
	if(fb==NULL)
	{
		printf("\n can't create file writing impossible'");
		getch();
		exit(0);
	}
	printf("Enter total number of faculty = ");
	scanf("%d",&m);
	printf("\n Enter info of %d faculty:");
	for(i=0;i<=n;i++)
	{
		printf("\n Enter the name of %d faculty",i+1);
		printf("\n Enter the father's name of %d faculty",i+1);
		printf("\n Enter the mother's name of %d faculty",i+1);
		printf("\n Enter the qualification of %d student",i+1);
		printf("\n Enter the specialisation of %d student",i+1);
		fflush(stdin);
		scanf("%d",&s[10],salary);
		scanf("%d",&s[5],experience);
		scanf("%d",&s[10],contact);
		fwrite(&s[i],sizeof(struct faculty),1,fp);
	}
}
{
	struct student s[100];
	File *fp;
	int i,n;
	fp=fopen("strecord","wb");
	if(fb==NULL)
	{
		printf("\n can't create file writing impossible'");
		getch();
		exit(0);
	}
	printf("Enter total number of student = ");
	scanf("%d",&n);
	printf("\n Enter info of %d student:");
	for(i=0;i<=n;i++)
	{
		printf("\n Enter the name of %d student",i+1);
		printf("\n Enter the scholar number of %d student",i+1);
		printf("\n Enter the father's name of %d student",i+1);
		printf("\n Enter the mother's name of %d student",i+1);
		printf("\n Enter the course of %d student",i+1);
		fflush(stdin);
		scanf("%d",&s[i],year);
		scanf("%d",&s[i],dateofbirth);
		scanf("%d",&s[i],contact);
		fwrite(&s[i],sizeof(struct student),1,fp);
	}
}
{
	struct staff s[100];
	File *fp;
	int i,n;
	fp=fopen("sfrecord","wb");
	if(fb==NULL)
	{
		printf("\n can't create file writing impossible'");
		getch();
		exit(0);
	}
	printf("Enter total number of staff members = ");
	scanf("%d",&n);
	printf("\n Enter info of %d staff members:");
	for(i=0;i<=n;i++)
	{
		printf("\n Enter the name of %d staff member",i+1);
		printf("\n Enter the post of staff member",i+1);
		fflush(stdin);
		scanf("%d",&s[10],salary);
		scanf("%d",&s[10],contact);
		fwrite(&s[i],sizeof(struct staff),1,fp);
	}
}
{
	struct books s[100];
	File *fp;
	int i,n;
	fp=fopen("bkrecord","wb");
	if(fb==NULL)
	{
		printf("\n can't create file writing impossible'");
		getch();
		exit(0);
	}
	printf("Enter total number of books = ");
	scanf("%d",&n);
	printf("\n Enter info of %d book:");
	for(i=0;i<=n;i++)
	{
		printf("\n Enter the bookid of %d book",i+1);
		printf("\n Enter the subject of %d book",i+1);
		printf("\n Enter the title of %d book",i+1);
		printf("\n Enter the author's name' of %d book",i+1);
		printf("\n Enter the name of person who issued %d book",i+1);
		fflush(stdin);
		scanf("%d",&s[8],dateofissue);
		scanf("%d",&s[8],dateofreturn);
		fwrite(&s[i],sizeof(struct staff),1,fp);
	}
	printf("\n Data saved successfully");
	close(fp);
	getch();
}

//faculty data read

{
	struct faculty s[100]
	File *fr;
	int i;
	fr=fopen("flrecord","rb");
	if(fr==NULL)
	{
		printf("\n Can't open file reading impossible'");
		getch();
		exit(0);
	}
	printf("\n Info of all faculties");
	i=0;
	while(fread(&s[i],sizeof[struct faculty],1,fr))
	{
		printf("\n Name of %d faculty",i+1);
		puts(s[i],name);
		printf("\n father's name of %d faculty",i+1);
		puts(s[i],fname);
		printf("\n mother's name of %d faculty",i+1);
		puts(s[i],mname);
		printf("\n qualification of %d faculty",i+1);
		puts(s[i],qualification);
		printf("\nSpecialisation of %d faculty",i+1);
		puts(s[i],specialisation);
		
		
		printf("\n salary of %d faculty",i+1);
		printf("%d",s[i],salary);
		printf("\nExperience of %d faculty",i+1);
		printf("%d",s[i],experience);
		printf("\n contact of %d faculty",i+1);
		printf("%d",s[i],contact);
		i++;
	}
}

//student data read

{
	struct student s[100]
	File *fr;
	int i;
	fr=fopen("strecord","rb");
	if(fr==NULL)
	{
		printf("\n Can't open file reading impossible'");
		getch();
		exit(0);
	}
	printf("\n Info of all students");
	i=0;
	while(fread(&s[i],sizeof[struct student],1,fr))
	{
		printf("\n Name of %d student",i+1);
		puts(s[i],name);
		printf("\n scholar number of %d student",i+1);
		puts(s[i],scholarno);
		printf("\n father's name of %d student",i+1);
		puts(s[i],fname);
		printf("\n mother's name of %d student",i+1);
		puts(s[i],mname);
		printf("\n course of %d student",i+1);
		puts(s[i],course);
		
		printf("\n college year of %d student",i+1);
		printf("%d",s[i],year);
		printf("\n Date of birth of %d student",i+1);
		printf("%d",s[i],dateofbirth);
		printf("\n contact of %d student",i+1);
		printf("%d",s[i],contact);
		i++;
	}
}

//data of staff
{
	struct staff s[100]
	File *fr;
	int i;
	fr=fopen("sfrecord","rb");
	if(fr==NULL)
	{
		printf("\n Can't open file reading impossible'");
		getch();
		exit(0);
	}
	printf("\n Info of all staffs");
	i=0;
	while(fread(&s[i],sizeof[struct staff],1,fr))
	{
		printf("\n Name of %d staff",i+1);
		puts(s[i],name);
		printf("\n working post of %d staff",i+1);
		puts(s[i],post);
		
		printf("\nSalary of %d staff",i+1);
		printf("%d",s[i],staff);
		printf("\n contact of %d student",i+1);
		printf("%d",s[i],contact);
		i++;
	}
}
//data of books
{
	struct books s[100]
	File *fr;
	int i;
	fr=fopen("bkrecord","rb");
	if(fr==NULL)
	{
		printf("\n Can't open file reading impossible'");
		getch();
		exit(0);
	}
	printf("\n Info of all books");
	i=0;
	while(fread(&s[i],sizeof[struct books],1,fr))
	{
		printf("\n bookID of %d book",i+1);
		puts(s[i],bookid);
		printf("\n subject of %d book",i+1);
		puts(s[i],scholarno);
		printf("\n title of %d book",i+1);
		puts(s[i],fname);
		printf("\n author of %d book",i+1);
		puts(s[i],mname);
		printf("\n issuedby of %d book",i+1);
		puts(s[i],issuedby);
		
		printf("\n date of issue of %d student",i+1);
		printf("%d",s[i],dateofissue);
		printf("\n Date of return of %d student",i+1);
		printf("%d",s[i],dateofreturn);
		i++;
	}
	fclose(fr);
	getch();
}








