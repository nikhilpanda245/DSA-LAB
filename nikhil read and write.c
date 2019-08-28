#include<stdio.h>
#include<string.h>
struct data
	{
		long double id;
		char name[100];
	}
main()
{
   
   int i;
   
   void read();
   void write();
   read();
   write();
   
}

void read()
{
    int i;
	struct data a[5];
	for(i=0;i<=4;i++)
	{
	   printf("enter name\n");
	   scanf("%s",&a[i].name);
	   printf("enter id\n");
	   scanf("%lld",&a[i].id);
    }
	
}
void write()
{
	int i;
	 struct data a[5];
	 for(i=0;i<=4;i++)
    {
       printf("\nname=%s",a[i].name);
	   printf("\nid=%lld",a[i].id);
	}
}


	
		
	

	

