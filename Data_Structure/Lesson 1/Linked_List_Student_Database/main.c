#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "conio.h"
#include "stdint.h"

#define Dprintf(...) {  fflush(stdout);\
						fflush(stdin);\
						printf(__VA_ARGS__);\
						fflush(stdout);\
						fflush(stdin);}

//effictive data
struct sdata
{
	int id;
	char name[40];
	float height;
};

//linked list node
struct sstudent
{
	struct sdata student;
	struct sstudent* pnextstudent;
};

struct sstudent * gpfirststudent=NULL;

//APIs

void add_student()
{
	struct sstudent * pnewstudent,*plaststudent;
	char temp_text[40];
	if (gpfirststudent==NULL)
	{
		pnewstudent=(struct sstudent *)malloc(sizeof(struct sstudent));
		gpfirststudent=pnewstudent;
	}
	else
	{
		pnewstudent=(struct sstudent *)malloc(sizeof(struct sstudent));
		plaststudent=gpfirststudent;
		while(plaststudent->pnextstudent)
		{
			plaststudent=plaststudent->pnextstudent;
		}
		plaststudent->pnextstudent=pnewstudent;
	}
	//fill data of student
	Dprintf("\nEnter student id: ");
	gets(temp_text);
	pnewstudent->student.id=atoi(temp_text);
	Dprintf("\nEnter student full name: ");
	gets(pnewstudent->student.name);
	Dprintf("\nEnter student height: ");
	gets(temp_text);
	pnewstudent->student.height=atof(temp_text);
	pnewstudent->pnextstudent=NULL;
}

int delete_student()
{
	char temp_text[40];
	unsigned int sel_id;
	Dprintf("\nEnter the student id to be deleted: ");
	gets(temp_text);
	sel_id=atoi(temp_text);
	if(gpfirststudent)
	{
		struct sstudent* pselstudent=gpfirststudent,*pprevstudent=NULL;
		while(pselstudent != NULL)
		{
			if(pselstudent->student.id==sel_id)
			{
				if(pprevstudent==NULL)
				{
					gpfirststudent=pselstudent->pnextstudent;
					free(pselstudent);
					return 1;
				}
				else
				{
					pprevstudent->pnextstudent=pselstudent->pnextstudent;
					free(pselstudent);
					return 1;
				}
			}
			pprevstudent=pselstudent;
			pselstudent=pselstudent->pnextstudent;
		}
		Dprintf("\nID not found!");
		return 0;
	}
	else
	{
		printf("Empty List");
	}
	return 0;

}

void view_student()
{
	struct sstudent* pselstudent=gpfirststudent;
	int count=0;
	if(gpfirststudent==NULL)
	{
			Dprintf("\nEmpty List");
	}
	else
	{
		while(pselstudent)
		{
			Dprintf("\nRecord number %d",count+1);
			Dprintf("\n\t ID=%d",pselstudent->student.id);
			Dprintf("\n\t Name=%s",pselstudent->student.name);
			Dprintf("\n\t Height=%f",pselstudent->student.height);
			count++;
			pselstudent=pselstudent->pnextstudent;
		}
	}
}

void delete_all()
{
	struct sstudent* pselstudent=gpfirststudent;
	if(gpfirststudent==NULL)
	{
				Dprintf("\nEmpty List");
	}
	else
	{
		while(pselstudent)
		{
		struct sstudent* ptempstudent=pselstudent;
		pselstudent=pselstudent->pnextstudent;
		free(ptempstudent);
		}
		gpfirststudent=NULL;
	}
}

int GetNth(int index)
{
	int count=0;
	struct sstudent*pcurstudent=gpfirststudent;
	if(gpfirststudent==NULL)
	{
		Dprintf("\nEmpty List");
	}
	else
	{
		while(pcurstudent != NULL)
		{
			if(count==index)
			{
				Dprintf("\nRecord of index %d",count);
				Dprintf("\n\t ID=%d",pcurstudent->student.id);
				Dprintf("\n\t Name=%s",pcurstudent->student.name);
				Dprintf("\n\t Height=%f",pcurstudent->student.height);

				return 1;
			}
			pcurstudent=pcurstudent->pnextstudent;
			count++;
		}
		Dprintf("\nIndex is higher than the list size");
		return 0;
	}
	return 0;

}

int getCount(void)
{
	int count=0;
	if(gpfirststudent==NULL)
	{
		Dprintf("\nEmpty List");
	}
	else
	{
		struct sstudent* pcurstudent=gpfirststudent;
		while(pcurstudent != NULL)//count will be init with 1 if the condtion was pcur->pnext !=NULL
		{
			count++;
			pcurstudent=pcurstudent->pnextstudent;
		}
		Dprintf("\nNumber of students= %d",count);
	}
	return count;
}

//getcount using recursive method
int getCount2(struct sstudent*pcurstudent)
{
	int count_temp=0;
	if(gpfirststudent==NULL)
	{
				Dprintf("\nEmpty List");
	}
	else
	{
		static int count=0;
			if(pcurstudent!=NULL)
			{
				count++;
				pcurstudent=pcurstudent->pnextstudent;
				getCount2(pcurstudent);
			}
			else
			{
				Dprintf("\nNumber of students= %d",count);
				count_temp=count;
				count=0;//to use it from initial value for the next time you want to count
				return count_temp;
			}

	}
	return count_temp;
}

void nthnoderev(void)
{
	char text_temp[40];
	Dprintf("\nEnter element index from the last: ");
	gets(text_temp);
	int len=getCount();
	int index=len-atoi(text_temp)-1;
	GetNth(index);
}

void nthnoderev2(void)
{
	if(gpfirststudent==NULL)
	{
		printf("\nEmpty List");
	}
	else
	{
		char text_temp[40];
		Dprintf("\nEnter element index from the last: ");
		int index=atoi(gets(text_temp));
		struct sstudent*prefstudent=gpfirststudent,*pmainstudent=gpfirststudent;
		for(int i=0;i<index+1;i++)
		{
			prefstudent=prefstudent->pnextstudent;
		}
		while(prefstudent)
		{
			prefstudent=prefstudent->pnextstudent;
			pmainstudent=pmainstudent->pnextstudent;
		}
		Dprintf("\nRecord Data");
		Dprintf("\n\t ID=%d",pmainstudent->student.id);
		Dprintf("\n\t Name=%s",pmainstudent->student.name);
		Dprintf("\n\t Height=%f",pmainstudent->student.height);
	}

}

void midlist(void)
{
	struct sstudent*pfaststudent=gpfirststudent,*pslowstudent=gpfirststudent;
	int num_students=getCount();
	if(gpfirststudent==NULL)
	{
		Dprintf("\nEmpty List");
	}
	else
	{
		if((num_students%2)!=0)//odd number of students
		{
			while(pfaststudent->pnextstudent)
			{
				pfaststudent=pfaststudent->pnextstudent->pnextstudent;
				pslowstudent=pslowstudent->pnextstudent;
			}
			Dprintf("\nRecord Data");
			Dprintf("\n\t ID=%d",pslowstudent->student.id);
			Dprintf("\n\t Name=%s",pslowstudent->student.name);
			Dprintf("\n\t Height=%f",pslowstudent->student.height);
		}
		else //even number of students
		{
			GetNth(num_students/2);
		}
	}
}

void rev_list(void)
{
	struct sstudent*pprevstudent=gpfirststudent;
	struct sstudent*pcurstudent=gpfirststudent;
	struct sstudent*pnextst=gpfirststudent;
	if(gpfirststudent==NULL)
	{
		Dprintf("\nEmpty list");
	}
	else
	{
		pcurstudent=pcurstudent->pnextstudent;
		pprevstudent->pnextstudent=NULL;
		while(pcurstudent != NULL)
		{
			pnextst=pcurstudent->pnextstudent;
			pcurstudent->pnextstudent=pprevstudent;
			pprevstudent=pcurstudent;
			pcurstudent=pnextst;
		}
		gpfirststudent=pprevstudent;
	}
}

int main(void)
{
	char temp_text[40];
	int op=1;
	while(1)
	{
		Dprintf("\n===================================================");
		Dprintf("\n\t Choose one of the followint options \n");
		Dprintf("\n1:Add Student");
		Dprintf("\n2:Delete Student");
		Dprintf("\n3:View Students");
		Dprintf("\n4:Delete All Student");
		Dprintf("\n5:View specific student data");
		Dprintf("\n6:Show the number of students");
		Dprintf("\n7:View specific student data (index in reverse)");
		Dprintf("\n8:Show the data of the middle student");
		Dprintf("\n9:Reverse List of students");
		Dprintf("\nEnter Choice number: ");
		gets(temp_text);
		switch(atoi(temp_text))
		{
		case 1:
			add_student();
			break;
		case 2:
			delete_student();
			break;
		case 3:
			view_student();
			break;
		case 4:
			delete_all();
			break;
		case 5:
		{
			char temp_text2[40];
			Dprintf("\nEnter the student index: ");
			int index=atoi(gets(temp_text2));
			GetNth(index);
		}
			break;
		case 6:
			getCount2(gpfirststudent);
			break;
		case 7:
			nthnoderev2();
			break;
		case 8:
			midlist();
			break;
		case 9:
			rev_list();
			break;
		default:
			Dprintf("Wrong option Try again")
			break;
		case 0:
			op=0;
		}
		if(op==0)
			break;
	}
	return 0;
}
