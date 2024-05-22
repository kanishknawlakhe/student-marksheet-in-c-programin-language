#include<stdio.h>
#include<conio.h>
struct marksheet
{
	int rollno,clas,english,hindi,sec,math,computer,science,so,sanskrit,day,month,year,evs,moral,gk,total,pass,fail,date,academic,stream,stream1,ip,acc,bus,academic1,physic,chemistry,biology,stream3,econamic,physical,stream2;
	char name[10],sname[10],section[2];
	float per;
};
main()
{
	struct marksheet ob;
	printf("\n\t\t\t!! MAKE A MARKSHEET FROM YOUR CHOICE !!");
	printf("\n\n-----------------------------------------------------------------------------------------------");
	printf("\n\nEnter your standard for making a marksheet = ");
	scanf("%d",&ob.clas);
	printf("\n-----------------------------------------------------------------------------------------------");
	printf("\n\nPlease enter your marks under 100.");
	printf("\n\n-----------------------------------------------------------------------------------------------");
		if(ob.clas==0||ob.clas==13)
		{
			printf("\nEnd programe");
			exit(0);
		}
		//1-5 class
		else if(ob.clas>0&&ob.clas<=5)
		{
			printf("\n\nYou are in %d standard",ob.clas);
			printf("\n\nPLEASSE ENTER YOUR GIVEN INFORMATION");
			printf("\n\nEnter your name = ");
			scanf("%s",&ob.name);
			printf("\nEnter your surname = ");
			scanf("%s",&ob.sname);
			printf("\nEnter your roll no = ");
			scanf("%d",&ob.rollno);
			printf("\nEnter your section = ");
			scanf("%s",&ob.section);
			printf("\nEnter your date of birth (DD/MM/YYYY) = ");
			scanf("%d/%d/%d",&ob.day,&ob.month,&ob.year);
			printf("\nEnter your academic year (yyyy-yyyy) = ");
			scanf("%d-%d",&ob.academic,&ob.academic1);
			printf("\nEnter your english marks = ");
			scanf("%d",&ob.english);
			printf("\nEnter your hindi marks = ");
			scanf("%d",&ob.hindi);
			printf("\nEnter your mathematic marks = ");
			scanf("%d",&ob.math);
			printf("\nEnter your computer marks = ");
			scanf("%d",&ob.computer);
			printf("\nEnter your evs marks = ");
			scanf("%d",&ob.evs);
			printf("\nEnter your moral marks = ");
			scanf("%d",&ob.moral);
			printf("\nEnter your G.K marks = ");
			scanf("%d",&ob.gk);
			if(ob.clas>0&&ob.clas<=5)
		{
			if (ob.english>40)
			{
				ob.pass++;
			}
			else
			{
				ob.fail++;
			}
			if (ob.hindi>40)
			{
				ob.pass++;
			}
			else
			{
				ob.fail++;
			}
			if (ob.math>40)
			{
				ob.pass++;
			}
			else
			{
				ob.fail++;
			}
			if (ob.evs>40)
			{
				ob.pass++;
			}
			else
			{
				ob.fail++;
			}
			if (ob.computer>40)
			{
				ob.pass++;
			}
			else
			{
				ob.fail++;
			}
			if (ob.moral>40)
			{
				ob.pass++;
			}
			else
			{
				ob.fail++;
			}
			if (ob.gk>40)
			{
				ob.pass++;
			}
			else
			{
				ob.fail++;
			}
		}
			ob.total=ob.english+ob.hindi+ob.math+ob.computer+ob.evs+ob.moral+ob.gk;
			ob.per=ob.total/7;
			}
			//6-8 class
		else if(ob.clas>5&&ob.clas<=8)
		{
			printf("\n\nYou Are In %d Standard",ob.clas);
			printf("\n\nPLEASSE ENTER YOUR GIVEN INFORMATION");
			printf("\n\nEnter your name = ");
			scanf("%s",&ob.name);
			printf("\nEnter your surname = ");
			scanf("%s",&ob.sname);
			printf("\nEnter your roll no = ");
			scanf("%d",&ob.rollno);
			printf("\nEnter your section = ");
			scanf("%s",&ob.section);
			printf("\nEnter your date of birth (DD/MM/YYYY) = ");
			scanf("%d/%d/%d",&ob.day,&ob.month,&ob.year);
			printf("\nEnter your academic year (yyyy-yyyy) = ");
			scanf("%d-%d",&ob.academic,&ob.academic1);
			printf("\nEnter your english marks = ");
			scanf("%d",&ob.english);
			printf("\nEnter your hindi marks = ");
			scanf("%d",&ob.hindi);
			printf("\nEnter your mathematic marks = ");
			scanf("%d",&ob.math);
			printf("\nEnter your science marks = ");
			scanf("%d",&ob.science);
			printf("\nEnter your social science marks = ");
			scanf("%d",&ob.so);
			printf("\nEnter your computer marks = ");
			scanf("%d",&ob.computer);
			printf("\nEnter your sanskrit marks = ");
			scanf("%d",&ob.sanskrit);
			printf("\nEnter your Gk marks = ");
			scanf("%d",&ob.gk);
			if(ob.clas>5&&ob.clas<=8)
			{
			if (ob.english>40)
			{
				ob.pass++;
			}
			else
			{
				ob.fail++;
			}
			if (ob.hindi>40)
			{
				ob.pass++;
			}
			else
			{
				ob.fail++;
			}
			if (ob.math>40)
			{
				ob.pass++;
			}
			else
			{
				ob.fail++;
			}
			if (ob.science>40)
			{
				ob.pass++;
			}
			else
			{
				ob.fail++;
			}
			if (ob.computer>40)
			{
				ob.pass++;
			}
			else
			{
				ob.fail++;
			}
			if (ob.so>40)
			{
				ob.pass++;
			}
			else
			{
				ob.fail++;
			}
			if (ob.gk>40)
			{
				ob.pass++;
			}
			else
			{
				ob.fail++;
			}
			if(ob.sanskrit>40)
			{
				ob.pass++;
			}
			else
			{
				ob.fail++;
			}
			}
			ob.total=ob.english+ob.hindi+ob.math+ob.computer+ob.so+ob.science+ob.gk+ob.sanskrit;
			ob.per=ob.total/8;
		}
		//9-10 class
		else if(ob.clas>8&&ob.clas<11)
		{
			printf("\n\nYou Are In %d Standard",ob.clas);
			printf("\n\nPLEASSE ENTER YOUR GIVEN INFORMATION");
			printf("\n\nEnter your name = ");
			scanf("%s",&ob.name);
			printf("\nEnter your surname = ");
			scanf("%s",&ob.sname);
			printf("\nEnter your Roll no = ");
			scanf("%d",&ob.rollno);
			printf("\nEnter your Section = ");
			scanf("%s",&ob.section);
			printf("\nEnter your date of birth (DD/MM/YYYY) = ");
			scanf("%d/%d/%d",&ob.day,&ob.month,&ob.year);
			printf("\nEnter your Academic year (yyyy-yyyy) = ");
			scanf("%d-%d",&ob.academic,&ob.academic1);
			printf("\nEnter your English marks = ");
			scanf("%d",&ob.english);
			printf("\nEnter your Hindi marks = ");
			scanf("%d",&ob.hindi);
			printf("\nEnter your Mathematicath marks = ");
			scanf("%d",&ob.math);
			printf("\nEnter your Physic marks = ");
			scanf("%d",&ob.science);
			printf("\nEnter your Social Science marks = ");
			scanf("%d",&ob.so);
			printf("\nEnter your Computer marks = ");
			scanf("%d",&ob.computer);
			if(ob.clas>8&&ob.clas<11)
			{
			if (ob.english>40)
			{
				ob.pass++;
			}
			else
			{
				ob.fail++;
			}
			if (ob.hindi>40)
			{
				ob.pass++;
			}
			else
			{
				ob.fail++;
			}
			if (ob.math>40)
			{
				ob.pass++;
			}
			else
			{
				ob.fail++;
			}
			if (ob.science>40)
			{
				ob.pass++;
			}
			else
			{
				ob.fail++;
			}
			if(ob.so>40)
			{
				ob.pass++;
			}
			else
			{
				ob.fail++;
			}
			if (ob.computer>40)
			{
				ob.pass++;
			}
			else
			{
				ob.fail++;
			}
			}
			ob.total=ob.english+ob.hindi+ob.math+ob.computer+ob.science+ob.so;
			ob.per=ob.total/7;	
		}
		//11-12 class
		else if(ob.clas>10&&ob.clas<=12)
		{
			printf("\n\nPlease select your stream \n\n1: Commerce\n2: Maths science\n3: Biology\n\nEnter your number according to your stream = ");
			scanf("%d",&ob.stream);
			//commerce
			if(ob.stream==1)
			{
				printf("\n-----------------------------------------------------------------------------------------------");
				printf("\n\nPlease select your Additional subject\n\n1: IP\n2: ECONAMIC\n\nEnter your number according to your additional subject = ");
				scanf("%d",&ob.stream1);
				//ip
				if(ob.stream1==1)
				{
					printf("\n-----------------------------------------------------------------------------------------------");
					printf("\n\nYou Are In %d Standard",ob.clas);
					printf("\n\nYou are in COMMERCE stream & your optional subject is IP");
					printf("\n\n-----------------------------------------------------------------------------------------------");
					printf("\n\nPLEASSE ENTER YOUR GIVEN INFORMATION");
					printf("\n\nEnter your name = ");
					scanf("%s",&ob.name);
					printf("\nEnter your surname = ");
					scanf("%s",&ob.sname);
					printf("\nEnter your roll no = ");
					scanf("%d",&ob.rollno);
					printf("\nEnter your section = ");
					scanf("%s",&ob.section);
					printf("\nEnter your date of birth (DD/MM/YYYY) = ");
					scanf("%d/%d/%d",&ob.day,&ob.month,&ob.year);
					printf("\nEnter your academic year (yyyy-yyyy) = ");
					scanf("%d-%d",&ob.academic,&ob.academic1);
					printf("\nEnter your english marks = ");
					scanf("%d",&ob.english);
					printf("\nEnter your hindi marks = ");
					scanf("%d",&ob.hindi);
					printf("\nEnter your IP marks = ");
					scanf("%d",&ob.ip);
					printf("\nEnter your Accountancy marks = ");
					scanf("%d",&ob.acc);
					printf("\nEnter your Business marks = ");
					scanf("%d",&ob.bus);
					if(ob.stream1==1)
					{
						if (ob.english>40)
						{
							ob.pass++;
						}
						else
						{
							ob.fail++;
						}
						if (ob.hindi>40)
						{
							ob.pass++;
						}
						else
						{
							ob.fail++;
						}
						if (ob.ip>40)
						{
							ob.pass++;
						}
						else
						{
							ob.fail++;
						}
						if (ob.acc>40)
						{
							ob.pass++;
						}
						else
						{
							ob.fail++;
						}
						if(ob.bus>40)
						{
							ob.pass++;
						}
						else
						{
							ob.fail++;
						}
						ob.total=ob.english+ob.hindi+ob.acc+ob.bus+ob.ip;
						ob.per=ob.total/5;
					}
				}
				//econamics
				else if(ob.stream1==2)
				{
					printf("\n-----------------------------------------------------------------------------------------------");
					printf("\n\nYou Are In %d Standard",ob.clas);
					printf("\n\nYou are in COMMERCE stream & your optional subject is ECONAMIC");
					printf("\n\n-----------------------------------------------------------------------------------------------");
					printf("\n\nPLEASSE ENTER YOUR GIVEN INFORMATION");
					printf("\n\nEnter your name = ");
					scanf("%s",&ob.name);
					printf("\nEnter your surname = ");
					scanf("%s",&ob.sname);
					printf("\nEnter your roll no = ");
					scanf("%d",&ob.rollno);
					printf("\nEnter your section = ");
					scanf("%s",&ob.section);
					printf("\nEnter your date of birth (DD/MM/YYYY) = ");
					scanf("%d/%d/%d",&ob.day,&ob.month,&ob.year);
					printf("\nEnter your academic year (yyyy-yyyy) = ");
					scanf("%d-%d",&ob.academic,&ob.academic1);
					printf("\nEnter your english marks = ");
					scanf("%d",&ob.english);
					printf("\nEnter your hindi marks = ");
					scanf("%d",&ob.hindi);
					printf("\nEnter your Econamic marks = ");
					scanf("%d",&ob.econamic);
					printf("\nEnter your Accountancy marks = ");
					scanf("%d",&ob.acc);
					printf("\nEnter your Business marks = ");
					scanf("%d",&ob.bus);
					if(ob.stream1==2)
					{
						if (ob.english>40)
						{
							ob.pass++;
						}
						else
						{
							ob.fail++;
						}
						if (ob.hindi>40)
						{
							ob.pass++;
						}
						else
						{
							ob.fail++;
						}
						if (ob.econamic>40)
						{
							ob.pass++;
						}
						else
						{
							ob.fail++;
						}
						if (ob.acc>40)
						{
							ob.pass++;
						}
						else
						{
							ob.fail++;
						}
						if(ob.bus>40)
						{
							ob.pass++;
						}
						else
						{
							ob.fail++;
						}
						ob.total=ob.english+ob.hindi+ob.acc+ob.bus+ob.econamic;
						ob.per=ob.total/5;
					}
				}
		}
			//Maths science
			else if(ob.stream==2)
			{
				printf("\n-----------------------------------------------------------------------------------------------");
				printf("\nPlease select optional subject\n\n1: IP\n2: Physical Education\n3: Computer Science\n4: Hindi\n\nEnter your optional subject according to number = ");
				scanf("%d",&ob.stream2);
				//IP
				if(ob.stream2==1)
				{
					printf("\n-----------------------------------------------------------------------------------------------");
					printf("\n\nYou Are In %d Standard",ob.clas);
					printf("\n\nYou are in MATHS stream &your optional subject is IP");
					printf("\n\n-----------------------------------------------------------------------------------------------");
					printf("\n\nPLEASSE ENTER YOUR GIVEN INFORMATION");
					printf("\n\nEnter your name = ");
					scanf("%s",&ob.name);
					printf("\nEnter your surname = ");
					scanf("%s",&ob.sname);
					printf("\nEnter your roll no = ");
					scanf("%d",&ob.rollno);
					printf("\nEnter your section = ");
					scanf("%s",&ob.section);
					printf("\nEnter your date of birth (DD/MM/YYYY) = ");
					scanf("%d/%d/%d",&ob.day,&ob.month,&ob.year);
					printf("\nEnter your academic year (yyyy-yyyy) = ");
					scanf("%d-%d",&ob.academic,&ob.academic1);
					printf("\nEnter your English marks = ");
					scanf("%d",&ob.english);
					printf("\nEnter your Mathematic marks = ");
					scanf("%d",&ob.math);
					printf("\nEnter your physic marks = ");
					scanf("%d",&ob.physic);
					printf("\nEnter your Chemistry marks = ");
					scanf("%d",&ob.chemistry);
					printf("\nEnter your IP marks = ");
					scanf("%d",&ob.ip);
					if(ob.stream2==1)
					{
						if (ob.english>40)
						{
							ob.pass++;
						}
						else
						{
							ob.fail++;
						}
						if (ob.math>40)
						{
							ob.pass++;
						}
						else
						{
							ob.fail++;
						}
						if (ob.physic>40)
						{
							ob.pass++;
						}
						else
						{
							ob.fail++;
						}
						if (ob.chemistry>40)
						{
							ob.pass++;
						}
						else
						{
							ob.fail++;
						}
						if(ob.ip>40)
						{
							ob.pass++;
						}
						else
						{
							ob.fail++;
						}
						ob.total=ob.english+ob.physic+ob.math+ob.chemistry+ob.ip;
						ob.per=ob.total/5;
					}
				}
				//physical education
				else if(ob.stream2==2)
				{
					printf("\n-----------------------------------------------------------------------------------------------");
					printf("\n\nYou Are In %d Standard",ob.clas);
					printf("\n\nYou are in MATHS stream & your optional subject is Physical education");
					printf("\n\n-----------------------------------------------------------------------------------------------");
					printf("\n\nPLEASSE ENTER YOUR GIVEN INFORMATION");
					printf("\n\nEnter your name = ");
					scanf("%s",&ob.name);
					printf("\nEnter your surname = ");
					scanf("%s",&ob.sname);
					printf("\nEnter your roll no = ");
					scanf("%d",&ob.rollno);
					printf("\nEnter your section = ");
					scanf("%s",&ob.section);
					printf("\nEnter your date of birth (DD/MM/YYYY) = ");
					scanf("%d/%d/%d",&ob.day,&ob.month,&ob.year);
					printf("\nEnter your academic year (yyyy-yyyy) = ");
					scanf("%d-%d",&ob.academic,&ob.academic1);
					printf("\nEnter your English marks = ");
					scanf("%d",&ob.english);
					printf("\nEnter your Mathematic marks = ");
					scanf("%d",&ob.math);
					printf("\nEnter your physic marks = ");
					scanf("%d",&ob.physic);
					printf("\nEnter your Chemistry marks = ");
					scanf("%d",&ob.chemistry);
					printf("\nEnter your Physical Education marks = ");
					scanf("%d",&ob.physical);
					if(ob.stream2==2)
					{
						if (ob.english>40)
						{
							ob.pass++;
						}
						else
						{
							ob.fail++;
						}
						if (ob.math>40)
						{
							ob.pass++;
						}
						else
						{
							ob.fail++;
						}
						if (ob.physic>40)
						{
							ob.pass++;
						}
						else
						{
							ob.fail++;
						}
						if (ob.chemistry>40)
						{
							ob.pass++;
						}
						else
						{
							ob.fail++;
						}
						if(ob.physical>40)
						{
							ob.pass++;
						}
						else
						{
							ob.fail++;
						}
						ob.total=ob.english+ob.physic+ob.math+ob.chemistry+ob.physical;
						ob.per=ob.total/5;
					}
				}
				//computer science
				else if(ob.stream2==3)
				{
					printf("\n-----------------------------------------------------------------------------------------------");
					printf("\n\nYou Are In %d Standard",ob.clas);
					printf("\n\nYou are in MATHS stream & your optional subject is Computer Science");
					printf("\n\n-----------------------------------------------------------------------------------------------");
					printf("\n\nPLEASSE ENTER YOUR GIVEN INFORMATION");
					printf("\n\nEnter your name = ");
					scanf("%s",&ob.name);
					printf("\nEnter your surname = ");
					scanf("%s",&ob.sname);
					printf("\nEnter your roll no = ");
					scanf("%d",&ob.rollno);
					printf("\nEnter your section = ");
					scanf("%s",&ob.section);
					printf("\nEnter your date of birth (DD/MM/YYYY) = ");
					scanf("%d/%d/%d",&ob.day,&ob.month,&ob.year);
					printf("\nEnter your academic year (yyyy-yyyy) = ");
					scanf("%d-%d",&ob.academic,&ob.academic1);
					printf("\nEnter your English marks = ");
					scanf("%d",&ob.english);
					printf("\nEnter your Mathematic marks = ");
					scanf("%d",&ob.math);
					printf("\nEnter your physic marks = ");
					scanf("%d",&ob.physic);
					printf("\nEnter your Chemistry marks = ");
					scanf("%d",&ob.chemistry);
					printf("\nEnter your Computer Science marks = ");
					scanf("%d",&ob.computer);
					if(ob.stream2==3)
					{
						if (ob.english>40)
						{
							ob.pass++;
						}
						else
						{
							ob.fail++;
						}
						if (ob.math>40)
						{
							ob.pass++;
						}
						else
						{
							ob.fail++;
						}
						if (ob.physic>40)
						{
							ob.pass++;
						}
						else
						{
							ob.fail++;
						}
						if (ob.chemistry>40)
						{
							ob.pass++;
						}
						else
						{
							ob.fail++;
						}
						if(ob.computer>40)
						{
							ob.pass++;
						}
						else
						{
							ob.fail++;
						}
						ob.total=ob.english+ob.physic+ob.math+ob.chemistry+ob.computer;
						ob.per=ob.total/5;
					}
				}
				//hindi
				else if(ob.stream2==4)
				{
					printf("\n-----------------------------------------------------------------------------------------------");
					printf("\n\nYou Are In %d Standard",ob.clas);
					printf("\n\nYou are in MATHS stream & your optional subject is Hindi");
					printf("\n\n-----------------------------------------------------------------------------------------------");
					printf("\n\nPLEASSE ENTER YOUR GIVEN INFORMATION");
					printf("\n\nEnter your name = ");
					scanf("%s",&ob.name);
					printf("\nEnter your surname = ");
					scanf("%s",&ob.sname);
					printf("\nEnter your roll no = ");
					scanf("%d",&ob.rollno);
					printf("\nEnter your section = ");
					scanf("%s",&ob.section);
					printf("\nEnter your date of birth (DD/MM/YYYY) = ");
					scanf("%d/%d/%d",&ob.day,&ob.month,&ob.year);
					printf("\nEnter your academic year (yyyy-yyyy) = ");
					scanf("%d-%d",&ob.academic,&ob.academic1);
					printf("\nEnter your English marks = ");
					scanf("%d",&ob.english);
					printf("\nEnter your Mathematic marks = ");
					scanf("%d",&ob.math);
					printf("\nEnter your physic marks = ");
					scanf("%d",&ob.physic);
					printf("\nEnter your Chemistry marks = ");
					scanf("%d",&ob.chemistry);
					printf("\nEnter your Hindi marks = ");
					scanf("%d",&ob.hindi);
					if(ob.stream2==4)
					{
						if (ob.english>40)
						{
							ob.pass++;
						}
						else
						{
							ob.fail++;
						}
						if (ob.math>40)
						{
							ob.pass++;
						}
						else
						{
							ob.fail++;
						}
						if (ob.physic>40)
						{
							ob.pass++;
						}
						else
						{
							ob.fail++;
						}
						if (ob.chemistry>40)
						{
							ob.pass++;
						}
						else
						{
							ob.fail++;
						}
						if(ob.hindi>40)
						{
							ob.pass++;
						}
						else
						{
							ob.fail++;
						}
						ob.total=ob.english+ob.physic+ob.math+ob.chemistry+ob.hindi;
						ob.per=ob.total/5;
					}
				}
			}
			//biology
			else if(ob.stream==3)
			{
				printf("\n-----------------------------------------------------------------------------------------------");
				printf("\n\nPlease select optional subjects\n\n1: Physical education\n2: Maths\n3: Computer\n\nEnter your optional subjects according to number = ");
				scanf("%d",&ob.stream3);
				//physical education
				if(ob.stream3==1)
				{
					printf("\n-----------------------------------------------------------------------------------------------");
					printf("\n\nYou Are In %d Standard",ob.clas);
					printf("\n\nYou are in Biology stream & your optional subject is Physical Education");
					printf("\n\n-----------------------------------------------------------------------------------------------");
					printf("\n\nPLEASSE ENTER YOUR GIVEN INFORMATION");
					printf("\n\nEnter your name = ");
					scanf("%s",&ob.name);
					printf("\nEnter your surname = ");
					scanf("%s",&ob.sname);
					printf("\nEnter your roll no = ");
					scanf("%d",&ob.rollno);
					printf("\nEnter your section = ");
					scanf("%s",&ob.section);
					printf("\nEnter your date of birth (DD/MM/YYYY) = ");
					scanf("%d/%d/%d",&ob.day,&ob.month,&ob.year);
					printf("\nEnter your academic year = ");
					scanf("%d-%d",&ob.academic,&ob.academic1);
					printf("\nEnter your english marks = ");
					scanf("%d",&ob.english);
					printf("\nEnter your Physics marks = ");
					scanf("%d",&ob.physic);
					printf("\nEnter your Chemistry marks = ");
					scanf("%d",&ob.chemistry);
					printf("\nEnter your Biology marks = ");
					scanf("%d",&ob.biology);
					printf("\nEnter your Physical education marks = ");
					scanf("%d",&ob.physical);
					if(ob.stream3==1)
					{
						if (ob.english>40)
						{
							ob.pass++;
						}
						else
						{
							ob.fail++;
						}
						if (ob.physic>40)
						{
							ob.pass++;
						}
						else
						{
							ob.fail++;
						}
						if (ob.chemistry>40)
						{
							ob.pass++;
						}
						else
						{
							ob.fail++;
						}
						if (ob.biology>40)
						{
							ob.pass++;
						}
						else
						{
							ob.fail++;
						}
						if(ob.physical>40)
						{
							ob.pass++;
						}
						else
						{
							ob.fail++;
						}
						ob.total=ob.english+ob.physic+ob.chemistry+ob.biology+ob.physical;
						ob.per=ob.total/5;
					}
				}
				//Maths
				else if(ob.stream3==2)
				{
					printf("\n-----------------------------------------------------------------------------------------------");
					printf("\n\nYou Are In %d Standard",ob.clas);
					printf("\n\nYou are in Biology stream & your additional subject is Mathematic");
					printf("\n\n-----------------------------------------------------------------------------------------------");
					printf("\n\nPLEASSE ENTER YOUR GIVEN INFORMATION");
					printf("\n\nEnter your name = ");
					scanf("%s",&ob.name);
					printf("\nEnter your surname = ");
					scanf("%s",&ob.sname);
					printf("\nEnter your roll no = ");
					scanf("%d",&ob.rollno);
					printf("\nEnter your section = ");
					scanf("%s",&ob.section);
					printf("\nEnter your date of birth (DD/MM/YYYY) = ");
					scanf("%d/%d/%d",&ob.day,&ob.month,&ob.year);
					printf("\nEnter your academic year = ");
					scanf("%d-%d",&ob.academic,&ob.academic1);
					printf("\nEnter your english marks = ");
					scanf("%d",&ob.english);
					printf("\nEnter your Physics marks = ");
					scanf("%d",&ob.physic);
					printf("\nEnter your Chemistry marks = ");
					scanf("%d",&ob.chemistry);
					printf("\nEnter your Biology marks = ");
					scanf("%d",&ob.biology);
					printf("\nEnter your Mathematic marks = ");
					scanf("%d",&ob.math);
					if(ob.stream3==2)
					{
						if (ob.english>40)
						{
							ob.pass++;
						}
						else
						{
							ob.fail++;
						}
						if (ob.physic>40)
						{
							ob.pass++;
						}
						else
						{
							ob.fail++;
						}
						if (ob.chemistry>40)
						{
							ob.pass++;
						}
						else
						{
							ob.fail++;
						}
						if (ob.biology>40)
						{
							ob.pass++;
						}
						else
						{
							ob.fail++;
						}
						if(ob.math>40)
						{
							ob.pass++;
						}
						else
						{
							ob.fail++;
						}
						ob.total=ob.english+ob.physic+ob.chemistry+ob.biology+ob.math;
						ob.per=ob.total/5;
					}
					
				}
				//computer
				else if(ob.stream3==3)
				{
					printf("\n-----------------------------------------------------------------------------------------------");
					printf("\n\nYou Are In %d Standard",ob.clas);
					printf("\n\nYou are in Biology stream & your additional subject is Computer");
					printf("\n\n-----------------------------------------------------------------------------------------------");
					printf("\n\nPLEASSE ENTER YOUR GIVEN INFORMATION");
					printf("\n\nEnter your name = ");
					scanf("%s",&ob.name);
					printf("\nEnter your surname = ");
					scanf("%s",&ob.sname);
					printf("\nEnter your roll no = ");
					scanf("%d",&ob.rollno);
					printf("\nEnter your section = ");
					scanf("%s",&ob.section);
					printf("\nEnter your date of birth (DD/MM/YYYY) = ");
					scanf("%d/%d/%d",&ob.day,&ob.month,&ob.year);
					printf("\nEnter your academic year = ");
					scanf("%d-%d",&ob.academic,&ob.academic1);
					printf("\nEnter your english marks = ");
					scanf("%d",&ob.english);
					printf("\nEnter your Physics marks = ");
					scanf("%d",&ob.physic);
					printf("\nEnter your Chemistry marks = ");
					scanf("%d",&ob.chemistry);
					printf("\nEnter your Biology marks = ");
					scanf("%d",&ob.biology);
					printf("\nEnter your Computer marks = ");
					scanf("%d",&ob.computer);
					if(ob.stream3==3)
					{
						if (ob.english>40)
						{
							ob.pass++;
						}
						else
						{
							ob.fail++;
						}
						if (ob.physic>40)
						{
							ob.pass++;
						}
						else
						{
							ob.fail++;
						}
						if (ob.chemistry>40)
						{
							ob.pass++;
						}
						else
						{
							ob.fail++;
						}
						if (ob.biology>40)
						{
							ob.pass++;
						}
						else
						{
							ob.fail++;
						}
						if(ob.computer>40)
						{
							ob.pass++;
						}
						else
						{
							ob.fail++;
						}
						ob.total=ob.english+ob.physic+ob.chemistry+ob.biology+ob.computer;
						ob.per=ob.total/5;
					}
				}
	}
}
	printf("\n\n\t\t\t\t\t\tSTUDENT MARKSHEET");
	if(ob.clas>=1&&ob.clas<=5)
	{
		printf("\n\t|-----------------------------------------------------------------------------------------------|");
		printf("\n\t|\t\t\t\t\t\t\t\t\t\t\t\t|\n\t|\t\t\t--- NEHRU MONTESSORI SENIOR SECONDARY SCHOOL---\t\t\t\t|");
		printf("\n\t|\t\t\t\t\t\t\t\t\t\t\t\t|\n\t|-----------------------------------------------------------------------------------------------|");
		printf("\n\t|\t\t\t\t\t\t\t\t\t\t\t\t|\n\t|\tStudent name = %s %s\t\t\t\tRoll no = %d\t\t\t|",ob.name,ob.sname,ob.rollno);
		printf("\n\t|\tClass = %d\t\t\t\t\t\tD.O.B = %d/%d/%d\t\t|",ob.clas,ob.day,ob.month,ob.year);
		printf("\n\t|\tSection = %s\t\t\t\t\t\tAcademic year = %d-%d\t|",ob.section,ob.academic,ob.academic1);
		printf("\n\t|\t\t\t\t\t\t\t\t\t\t\t\t|\n\t|-----------------------------------------------------------------------------------------------|");
		printf("\n\t|No.\tSubjects\t\t|\t  Marks obtained\t|    Grade according to marks   |");
		printf("\n\t|-----------------------------------------------------------------------------------------------|");
		printf("\n\t|1.\tEnglish\t\t\t|\t\t%d\t\t|\t   100 - 90 = A+\t|",ob.english);
		printf("\n\t|2.\tHindi\t\t\t|\t\t%d\t\t|\t    90 - 80 = A\t\t|",ob.hindi);
		printf("\n\t|3.\tMathematic\t\t|\t\t%d\t\t|\t    80 - 70 = B+\t|",ob.math);
		printf("\n\t|4.\tEvs\t\t\t|\t\t%d\t\t|\t    70 - 60 = B\t\t|",ob.evs);
		printf("\n\t|5.\tComputer\t\t|\t\t%d\t\t|\t    60 - 50 = C\t\t|",ob.computer);
		printf("\n\t|6.\tMoral\t\t\t|\t\t%d\t\t|\t    50 - 40 = D\t\t|",ob.moral);
		printf("\n\t|7.\tG.K\t\t\t|\t\t%d\t\t|\t    40 - 30 = Fail\t|",ob.gk);
		printf("\n\t|-----------------------------------------------------------------------------------------------|");		
		if(ob.pass==7)
		{
			printf("\n\t|\tTotal of all subject    |\t\t%d\t\t|\tMin\t|\tMax\t|",ob.total);
			printf("\n\t|-----------------------------------------------------------------------------------------------|");
			printf("\n\t|\tPercentage\t\t|\t\t%.2f\t\t|\t40\t|\t100\t|",ob.per);
			printf("\n\t|-----------------------------------------------------------------------------------------------|");
			printf("\n\nYOU ARE PASS");
		}
		else if(ob.fail==5||ob.fail==6)
		{
			printf("\n\nyour failed");
		}
		else
		{
			printf("\n\nsupplymentry");
		}
		FILE *fp;
		fp= fopen("Marksheet for class 1 to 5.txt","w");
		fprintf(fp,"\n\t|-----------------------------------------------------------------------------------------------|");
		fprintf(fp,"\n\t|\t\t\t\t\t\t\t\t\t\t\t\t|\n\t|\t\t\t--- NEHRU MONTESSORI SENIOR SECONDARY SCHOOL---\t\t\t\t|");
		fprintf(fp,"\n\t|\t\t\t\t\t\t\t\t\t\t\t\t|\n\t|-----------------------------------------------------------------------------------------------|");
		fprintf(fp,"\n\t|\t\t\t\t\t\t\t\t\t\t\t\t|\n\t|\tStudent name = %s %s\t\t\t\tRoll no = %d\t\t\t|",ob.name,ob.sname,ob.rollno);
		fprintf(fp,"\n\t|\tClass = %d\t\t\t\t\t\tD.O.B = %d/%d/%d\t\t|",ob.clas,ob.day,ob.month,ob.year);
		fprintf(fp,"\n\t|\tSection = %s\t\t\t\t\t\tAcademic year = %d-%d\t|",ob.section,ob.academic,ob.academic1);
		fprintf(fp,"\n\t|\t\t\t\t\t\t\t\t\t\t\t\t|\n\t|-----------------------------------------------------------------------------------------------|");
		fprintf(fp,"\n\t|No.\tSubjects\t\t|\t  Marks obtained\t|    Grade according to marks   |");
		fprintf(fp,"\n\t|-----------------------------------------------------------------------------------------------|");
		fprintf(fp,"\n\t|1.\tEnglish\t\t\t|\t\t%d\t\t|\t   100 - 90 = A+\t|",ob.english);
		fprintf(fp,"\n\t|2.\tHindi\t\t\t|\t\t%d\t\t|\t    90 - 80 = A\t\t|",ob.hindi);
		fprintf(fp,"\n\t|3.\tMathematic\t\t|\t\t%d\t\t|\t    80 - 70 = B+\t|",ob.math);
		fprintf(fp,"\n\t|4.\tEvs\t\t\t|\t\t%d\t\t|\t    70 - 60 = B\t\t|",ob.evs);
		fprintf(fp,"\n\t|5.\tComputer\t\t|\t\t%d\t\t|\t    60 - 50 = C\t\t|",ob.computer);
		fprintf(fp,"\n\t|6.\tMoral\t\t\t|\t\t%d\t\t|\t    50 - 40 = D\t\t|",ob.moral);
		fprintf(fp,"\n\t|7.\tG.K\t\t\t|\t\t%d\t\t|\t    40 - 30 = Fail\t|",ob.gk);
		fprintf(fp,"\n\t|-----------------------------------------------------------------------------------------------|");
		fprintf(fp,"\n\t|\tTotal of all subject    |\t\t%d\t\t|\tMin\t|\tMax\t|",ob.total);
		fprintf(fp,"\n\t|-----------------------------------------------------------------------------------------------|");
		fprintf(fp,"\n\t|\tPercentage\t\t|\t\t%.2f\t\t|\t40\t|\t100\t|",ob.per);
		fprintf(fp,"\n\t|-----------------------------------------------------------------------------------------------|");
		if(ob.pass==7)
		{
		
			fprintf(fp,"\n\nYOU ARE PASS");
		}
		else if(ob.fail==5||ob.fail==6)
		{
			fprintf(fp,"\n\nyour failed");
		}
		else
		{
			fprintf(fp,"\n\nsupplymentry");
		}
		fclose(fp);
	}
	//6-8 class
	else if(ob.clas>5&&ob.clas<=8)
	{
		printf("\n\t|-----------------------------------------------------------------------------------------------|");
		printf("\n\t|\t\t\t\t\t\t\t\t\t\t\t\t|\n\t|\t\t\t--- NEHRU MONTESSORI SENIOR SECONDARY SCHOOL---\t\t\t\t|");
		printf("\n\t|\t\t\t\t\t\t\t\t\t\t\t\t|\n\t|-----------------------------------------------------------------------------------------------|");
		printf("\n\t|\t\t\t\t\t\t\t\t\t\t\t\t|\n\t|\tStudent name = %s %s\t\t\t\tRoll no = %d\t\t\t|",ob.name,ob.sname,ob.rollno);
		printf("\n\t|\tClass = %d\t\t\t\t\t\tD.O.B = %d/%d/%d\t\t|",ob.clas,ob.day,ob.month,ob.year);
		printf("\n\t|\tSection = %s\t\t\t\t\t\tAcademic year = %d-%d\t|",ob.section,ob.academic,ob.academic1);
		printf("\n\t|\t\t\t\t\t\t\t\t\t\t\t\t|\n\t|-----------------------------------------------------------------------------------------------|");
		printf("\n\t|No.\tSubjects\t\t|\t  Marks obtained\t|    Grade according to marks   |");
		printf("\n\t|-----------------------------------------------------------------------------------------------|");
		printf("\n\t|1.\tEnglish\t\t\t|\t\t%d\t\t|\t   100 - 90 = A+\t|",ob.english);
		printf("\n\t|2.\tHindi\t\t\t|\t\t%d\t\t|\t    90 - 80 = A\t\t|",ob.hindi);
		printf("\n\t|3.\tMathematic\t\t|\t\t%d\t\t|\t    80 - 70 = B+\t|",ob.math);
		printf("\n\t|4.\tScience\t\t\t|\t\t%d\t\t|\t    70 - 60 = B\t\t|",ob.science);
		printf("\n\t|5.\tSocial science\t\t|\t\t%d\t\t|\t    60 - 50 = C\t\t|",ob.so);
		printf("\n\t|6.\tSanskrit\t\t|\t\t%d\t\t|\t    50 - 40 = D\t\t|",ob.sanskrit);
		printf("\n\t|7.\tCompter\t\t\t|\t\t%d\t\t|\t    40 - 30 = Fail\t|",ob.computer);
		printf("\n\t|8.\tG.K\t\t\t|\t\t%d\t\t|\t\t\t\t|",ob.gk);
		printf("\n\t|-----------------------------------------------------------------------------------------------|");
		if(ob.pass==8)
 		{
			printf("\n\t|\tTotal of all subject    |\t\t%d\t\t|\tMin\t|\tMax\t|",ob.total);
			printf("\n\t|-----------------------------------------------------------------------------------------------|");
			printf("\n\t|\tPercentage\t\t|\t\t%.2f\t\t|\t40\t|\t100\t|",ob.per);
			printf("\n\t|-----------------------------------------------------------------------------------------------|");
			printf("\n\nYOU ARE PASS");
		}
		else if(ob.fail==6||ob.fail==7)
		{
			printf("\n\nyour failed");
		}
		else
		{		
			printf("\n\nsupplymentry");
		}
		FILE *fp;
		fp= fopen("Marksheet for class 6 to 8.txt","w");
		fprintf(fp,"\n\t|-----------------------------------------------------------------------------------------------|");
		fprintf(fp,"\n\t|\t\t\t\t\t\t\t\t\t\t\t\t|\n\t|\t\t\t--- NEHRU MONTESSORI SENIOR SECONDARY SCHOOL---\t\t\t\t|");
		fprintf(fp,"\n\t|\t\t\t\t\t\t\t\t\t\t\t\t|\n\t|-----------------------------------------------------------------------------------------------|");
		fprintf(fp,"\n\t|\t\t\t\t\t\t\t\t\t\t\t\t|\n\t|\tStudent name = %s %s\t\t\t\tRoll no = %d\t\t\t|",ob.name,ob.sname,ob.rollno);
		fprintf(fp,"\n\t|\tClass = %d\t\t\t\t\t\tD.O.B = %d/%d/%d\t\t|",ob.clas,ob.day,ob.month,ob.year);
		fprintf(fp,"\n\t|\tSection = %s\t\t\t\t\t\tAcademic year = %d-%d\t|",ob.section,ob.academic,ob.academic1);
		fprintf(fp,"\n\t|\t\t\t\t\t\t\t\t\t\t\t\t|\n\t|-----------------------------------------------------------------------------------------------|");
		fprintf(fp,"\n\t|No.\tSubjects\t\t|\t  Marks obtained\t|    Grade according to marks   |");
		fprintf(fp,"\n\t|-----------------------------------------------------------------------------------------------|");
		fprintf(fp,"\n\t|1.\tEnglish\t\t\t|\t\t%d\t\t|\t   100 - 90 = A+\t|",ob.english);
		fprintf(fp,"\n\t|2.\tHindi\t\t\t|\t\t%d\t\t|\t    90 - 80 = A\t\t|",ob.hindi);
		fprintf(fp,"\n\t|3.\tMathematic\t\t|\t\t%d\t\t|\t    80 - 70 = B+\t|",ob.math);
		fprintf(fp,"\n\t|4.\tScience\t\t\t|\t\t%d\t\t|\t    70 - 60 = B\t\t|",ob.science);
		fprintf(fp,"\n\t|5.\tSocial science\t\t|\t\t%d\t\t|\t    60 - 50 = C\t\t|",ob.so);
		fprintf(fp,"\n\t|6.\tSanskrit\t\t|\t\t%d\t\t|\t    50 - 40 = D\t\t|",ob.sanskrit);
		fprintf(fp,"\n\t|7.\tCompter\t\t\t|\t\t%d\t\t|\t    40 - 30 = Fail\t|",ob.computer);
		fprintf(fp,"\n\t|8.\tG.K\t\t\t|\t\t%d\t\t|\t\t\t\t|",ob.gk);
		fprintf(fp,"\n\t|-----------------------------------------------------------------------------------------------|");
		fprintf(fp,"\n\t|\tTotal of all subject    |\t\t%d\t\t|\tMin\t|\tMax\t|",ob.total);
		fprintf(fp,"\n\t|-----------------------------------------------------------------------------------------------|");
		fprintf(fp,"\n\t|\tPercentage\t\t|\t\t%.2f\t\t|\t40\t|\t100\t|",ob.per);
		fprintf(fp,"\n\t|-----------------------------------------------------------------------------------------------|");
		if(ob.pass==8)
		{
		
			fprintf(fp,"\n\nYOU ARE PASS");
		}
		else if(ob.fail==6||ob.fail==7)
		{
			fprintf(fp,"\n\nyour failed");
		}
		else
		{
			fprintf(fp,"\n\nsupplymentry");
		}
		fclose(fp);
	}
	//9-10 class
	else if(ob.clas>8&&ob.clas<11)
	{
		printf("\n\t|-----------------------------------------------------------------------------------------------|");
		printf("\n\t|\t\t\t\t\t\t\t\t\t\t\t\t|\n\t|\t\t\t--- NEHRU MONTESSORI SENIOR SECONDARY SCHOOL---\t\t\t\t|");
		printf("\n\t|\t\t\t\t\t\t\t\t\t\t\t\t|\n\t|-----------------------------------------------------------------------------------------------|");
		printf("\n\t|\t\t\t\t\t\t\t\t\t\t\t\t|\n\t|\tStudent name = %s %s\t\t\t\tRoll no = %d\t\t\t|",ob.name,ob.sname,ob.rollno);
		printf("\n\t|\tClass = %d\t\t\t\t\t\tD.O.B = %d/%d/%d\t\t|",ob.clas,ob.day,ob.month,ob.year);
		printf("\n\t|\tSection = %s\t\t\t\t\t\tAcademic year = %d-%d\t|",ob.section,ob.academic,ob.academic1);
		printf("\n\t|\t\t\t\t\t\t\t\t\t\t\t\t|\n\t|-----------------------------------------------------------------------------------------------|");
		printf("\n\t|No.\tSubjects\t\t|\t  Marks obtained\t|    Grade according to marks   |");
		printf("\n\t|-----------------------------------------------------------------------------------------------|");
		printf("\n\t|1.\tEnglish\t\t\t|\t\t%d\t\t|\t   100 - 90 = A+\t|",ob.english);
		printf("\n\t|2.\tHindi\t\t\t|\t\t%d\t\t|\t    90 - 80 = A\t\t|",ob.hindi);
		printf("\n\t|3.\tMathematic\t\t|\t\t%d\t\t|\t    80 - 70 = B+\t|",ob.math);
		printf("\n\t|4.\tScience\t\t\t|\t\t%d\t\t|\t    70 - 60 = B\t\t|",ob.science);
		printf("\n\t|5.\tSocial science\t\t|\t\t%d\t\t|\t    60 - 50 = C\t\t|",ob.so);
		printf("\n\t|7.\tCompter\t\t\t|\t\t%d\t\t|\t    50 - 40 = D\t\t|",ob.computer);
		printf("\n\t|-----------------------------------------------------------------------------------------------|");
		if(ob.pass==6)
 		{
			printf("\n\t|\tTotal of all subject    |\t\t%d\t\t|\tMin\t|\tMax\t|",ob.total);
			printf("\n\t|-----------------------------------------------------------------------------------------------|");
			printf("\n\t|\tPercentage\t\t|\t\t%.2f\t\t|\t40\t|\t100\t|",ob.per);
			printf("\n\t|-----------------------------------------------------------------------------------------------|");
			printf("\n\nYOU ARE PASS");
		}
		else if(ob.fail==4||ob.fail==5)
		{
			printf("\n\nyour failed");
		}
		else
		{		
			printf("\n\nsupplymentry");
		}
		FILE *fp;
		fp= fopen("Marksheet for class 9 to 10.txt","w");
		fprintf(fp,"\n\t|-----------------------------------------------------------------------------------------------|");
		fprintf(fp,"\n\t|\t\t\t\t\t\t\t\t\t\t\t\t|\n\t|\t\t\t--- NEHRU MONTESSORI SENIOR SECONDARY SCHOOL---\t\t\t\t|");
		fprintf(fp,"\n\t|\t\t\t\t\t\t\t\t\t\t\t\t|\n\t|-----------------------------------------------------------------------------------------------|");
		fprintf(fp,"\n\t|\t\t\t\t\t\t\t\t\t\t\t\t|\n\t|\tStudent name = %s %s\t\t\t\tRoll no = %d\t\t\t|",ob.name,ob.sname,ob.rollno);
		fprintf(fp,"\n\t|\tClass = %d\t\t\t\t\t\tD.O.B = %d/%d/%d\t\t|",ob.clas,ob.day,ob.month,ob.year);
		fprintf(fp,"\n\t|\tSection = %s\t\t\t\t\t\tAcademic year = %d-%d\t|",ob.section,ob.academic,ob.academic1);
		fprintf(fp,"\n\t|\t\t\t\t\t\t\t\t\t\t\t\t|\n\t|-----------------------------------------------------------------------------------------------|");
		fprintf(fp,"\n\t|No.\tSubjects\t\t|\t  Marks obtained\t|    Grade according to marks   |");
		fprintf(fp,"\n\t|-----------------------------------------------------------------------------------------------|");
		fprintf(fp,"\n\t|1.\tEnglish\t\t\t|\t\t%d\t\t|\t   100 - 90 = A+\t|",ob.english);
		fprintf(fp,"\n\t|2.\tHindi\t\t\t|\t\t%d\t\t|\t    90 - 80 = A\t\t|",ob.hindi);
		fprintf(fp,"\n\t|3.\tMathematic\t\t|\t\t%d\t\t|\t    80 - 70 = B+\t|",ob.math);
		fprintf(fp,"\n\t|4.\tScience\t\t\t|\t\t%d\t\t|\t    70 - 60 = B\t\t|",ob.science);
		fprintf(fp,"\n\t|5.\tSocial science\t\t|\t\t%d\t\t|\t    60 - 50 = C\t\t|",ob.so);
		fprintf(fp,"\n\t|7.\tCompter\t\t\t|\t\t%d\t\t|\t    50 - 40 = D\t\t|",ob.computer);
		fprintf(fp,"\n\t|-----------------------------------------------------------------------------------------------|");
		fprintf(fp,"\n\t|\tTotal of all subject    |\t\t%d\t\t|\tMin\t|\tMax\t|",ob.total);
		fprintf(fp,"\n\t|-----------------------------------------------------------------------------------------------|");
		fprintf(fp,"\n\t|\tPercentage\t\t|\t\t%.2f\t\t|\t40\t|\t100\t|",ob.per);
		fprintf(fp,"\n\t|-----------------------------------------------------------------------------------------------|");
		if(ob.pass==6)
		{
		
			fprintf(fp,"\n\nYOU ARE PASS");
		}
		else if(ob.fail==4||ob.fail==5)
		{
			fprintf(fp,"\n\nyour failed");
		}
		else
		{
			fprintf(fp,"\n\nsupplymentry");
		}
		fclose(fp);
	}	
	//11 - 12 class
	else if(ob.clas>=11)
	{
		//commerce
		if(ob.stream==1)
		{
			//IP
			if(ob.stream1==1)
			{
				printf("\n\t|-----------------------------------------------------------------------------------------------|");
				printf("\n\t|\t\t\t\t\t\t\t\t\t\t\t\t|\n\t|\t\t\t--- NEHRU MONTESSORI SENIOR SECONDARY SCHOOL---\t\t\t\t|");
				printf("\n\t|\t\t\t\t\t\t\t\t\t\t\t\t|\n\t|-----------------------------------------------------------------------------------------------|");
				printf("\n\t|\t\t\t\t\t\t\t\t\t\t\t\t|\n\t|\tStudent name = %s %s\t\t\t\tRoll no = %d\t\t\t|",ob.name,ob.sname,ob.rollno);
				printf("\n\t|\tClass = %d\t\t\t\t\t\tD.O.B = %d/%d/%d\t\t|",ob.clas,ob.day,ob.month,ob.year);
				printf("\n\t|\tSection = %s\t\t\t\t\t\tAcademic year = %d-%d\t|",ob.section,ob.academic,ob.academic1);
				printf("\n\t|\t\t\t\t\t\t\t\t\t\t\t\t|\n\t|-----------------------------------------------------------------------------------------------|");
				printf("\n\t|No.\tSubjects\t\t|\t  Marks obtained\t|    Grade according to marks   |");
				printf("\n\t|-----------------------------------------------------------------------------------------------|");
				printf("\n\t|1.\tEnglish\t\t\t|\t\t%d\t\t|\t   100 - 90 = A+\t|",ob.english);
				printf("\n\t|2.\tHindi\t\t\t|\t\t%d\t\t|\t    90 - 80 = A\t\t|",ob.hindi);
				printf("\n\t|3.\tIP\t\t\t|\t\t%d\t\t|\t    80 - 70 = B+\t|",ob.ip);
				printf("\n\t|4.\tAcc\t\t\t|\t\t%d\t\t|\t    70 - 60 = B\t\t|",ob.acc);
				printf("\n\t|5.\tBusiness\t\t|\t\t%d\t\t|\t    60 - 50 = C\t\t|",ob.bus);
				printf("\n\t|-----------------------------------------------------------------------------------------------|");
				if(ob.pass==5)
					{
						printf("\n\t|\tTotal of all subject    |\t\t%d\t\t|\tMin\t|\tMax\t|",ob.total);
						printf("\n\t|-----------------------------------------------------------------------------------------------|");
						printf("\n\t|\tPercentage\t\t|\t\t%.2f\t\t|\t40\t|\t100\t|",ob.per);
						printf("\n\t|-----------------------------------------------------------------------------------------------|");
						printf("\n\nYOU ARE PASS");
					}
					else if(ob.fail==4||ob.fail==5)
					{
						printf("\n\nyour failed");
					}
					else
					{
						printf("\n\nsupplymentry");
					}
					FILE *fp;
					fp= fopen("Marksheet for class Commerce IP.txt","w");
					fprintf(fp,"\n\t|-----------------------------------------------------------------------------------------------|");
					fprintf(fp,"\n\t|\t\t\t\t\t\t\t\t\t\t\t\t|\n\t|\t\t\t--- NEHRU MONTESSORI SENIOR SECONDARY SCHOOL---\t\t\t\t|");
					fprintf(fp,"\n\t|\t\t\t\t\t\t\t\t\t\t\t\t|\n\t|-----------------------------------------------------------------------------------------------|");
					fprintf(fp,"\n\t|\t\t\t\t\t\t\t\t\t\t\t\t|\n\t|\tStudent name = %s %s\t\t\t\tRoll no = %d\t\t\t|",ob.name,ob.sname,ob.rollno);
					fprintf(fp,"\n\t|\tClass = %d\t\t\t\t\t\tD.O.B = %d/%d/%d\t\t|",ob.clas,ob.day,ob.month,ob.year);
					fprintf(fp,"\n\t|\tSection = %s\t\t\t\t\t\tAcademic year = %d-%d\t|",ob.section,ob.academic,ob.academic1);
					fprintf(fp,"\n\t|\t\t\t\t\t\t\t\t\t\t\t\t|\n\t|-----------------------------------------------------------------------------------------------|");
					fprintf(fp,"\n\t|No.\tSubjects\t\t|\t  Marks obtained\t|    Grade according to marks   |");
					fprintf(fp,"\n\t|-----------------------------------------------------------------------------------------------|");
					fprintf(fp,"\n\t|1.\tEnglish\t\t\t|\t\t%d\t\t|\t   100 - 90 = A+\t|",ob.english);
					fprintf(fp,"\n\t|2.\tHindi\t\t\t|\t\t%d\t\t|\t    90 - 80 = A\t\t|",ob.hindi);
					fprintf(fp,"\n\t|3.\tIP\t\t\t|\t\t%d\t\t|\t    80 - 70 = B+\t|",ob.ip);
					fprintf(fp,"\n\t|4.\tAcc\t\t\t|\t\t%d\t\t|\t    70 - 60 = B\t\t|",ob.acc);
					fprintf(fp,"\n\t|5.\tBusiness\t\t|\t\t%d\t\t|\t    60 - 50 = C\t\t|",ob.bus);
					fprintf(fp,"\n\t|-----------------------------------------------------------------------------------------------|");
						if(ob.pass==5)
					{
						fprintf(fp,"\n\t|\tTotal of all subject    |\t\t%d\t\t|\tMin\t|\tMax\t|",ob.total);
						fprintf(fp,"\n\t|-----------------------------------------------------------------------------------------------|");
						fprintf(fp,"\n\t|\tPercentage\t\t|\t\t%.2f\t\t|\t40\t|\t100\t|",ob.per);
						fprintf(fp,"\n\t|-----------------------------------------------------------------------------------------------|");
						fprintf(fp,"\n\nYOU ARE PASS");
					}
					else if(ob.fail==4||ob.fail==5)
					{
						fprintf(fp,"\n\nyour failed");
					}
					else
					{
						fprintf(fp,"\n\nsupplymentry");
					}
					fclose(fp);
			}
			//econamic
			else if (ob.stream1==2)
			{
				printf("\n\t|-----------------------------------------------------------------------------------------------|");
				printf("\n\t|\t\t\t\t\t\t\t\t\t\t\t\t|\n\t|\t\t\t--- NEHRU MONTESSORI SENIOR SECONDARY SCHOOL---\t\t\t\t|");
				printf("\n\t|\t\t\t\t\t\t\t\t\t\t\t\t|\n\t|-----------------------------------------------------------------------------------------------|");
				printf("\n\t|\t\t\t\t\t\t\t\t\t\t\t\t|\n\t|\tStudent name = %s %s\t\t\t\tRoll no = %d\t\t\t|",ob.name,ob.sname,ob.rollno);
				printf("\n\t|\tClass = %d\t\t\t\t\t\tD.O.B = %d/%d/%d\t\t|",ob.clas,ob.day,ob.month,ob.year);
				printf("\n\t|\tSection = %s\t\t\t\t\t\tAcademic year = %d-%d\t|",ob.section,ob.academic,ob.academic1);
				printf("\n\t|\t\t\t\t\t\t\t\t\t\t\t\t|\n\t|-----------------------------------------------------------------------------------------------|");
				printf("\n\t|No.\tSubjects\t\t|\t  Marks obtained\t|    Grade according to marks   |");
				printf("\n\t|-----------------------------------------------------------------------------------------------|");
				printf("\n\t|1.\tEnglish\t\t\t|\t\t%d\t\t|\t   100 - 90 = A+\t|",ob.english);
				printf("\n\t|2.\tHindi\t\t\t|\t\t%d\t\t|\t    90 - 80 = A\t\t|",ob.hindi);
				printf("\n\t|3.\tEconamic\t\t|\t\t%d\t\t|\t    80 - 70 = B+\t|",ob.econamic);
				printf("\n\t|4.\tAcc\t\t\t|\t\t%d\t\t|\t    70 - 60 = B\t\t|",ob.acc);
				printf("\n\t|5.\tBusiness\t\t|\t\t%d\t\t|\t    60 - 50 = C\t\t|",ob.bus);
					printf("\n\t|-----------------------------------------------------------------------------------------------|");
				if(ob.pass==5)
					{
						printf("\n\t|\tTotal of all subject    |\t\t%d\t\t|\tMin\t|\tMax\t|",ob.total);
						printf("\n\t|-----------------------------------------------------------------------------------------------|");
						printf("\n\t|\tPercentage\t\t|\t\t%.2f\t\t|\t40\t|\t100\t|",ob.per);
						printf("\n\t|-----------------------------------------------------------------------------------------------|");
						printf("\n\nYOU ARE PASS");
					}
					else if(ob.fail==4||ob.fail==5)
					{
						printf("\n\nyour failed");
					}
					else
					{
						printf("\n\nsupplymentry");
					}
					FILE *fp;
					fp= fopen("Marksheet for class Commerce Econamic.txt","w");
					fprintf(fp,"\n\t|-----------------------------------------------------------------------------------------------|");
					fprintf(fp,"\n\t|\t\t\t\t\t\t\t\t\t\t\t\t|\n\t|\t\t\t--- NEHRU MONTESSORI SENIOR SECONDARY SCHOOL---\t\t\t\t|");
					fprintf(fp,"\n\t|\t\t\t\t\t\t\t\t\t\t\t\t|\n\t|-----------------------------------------------------------------------------------------------|");
					fprintf(fp,"\n\t|\t\t\t\t\t\t\t\t\t\t\t\t|\n\t|\tStudent name = %s %s\t\t\t\tRoll no = %d\t\t\t|",ob.name,ob.sname,ob.rollno);
					fprintf(fp,"\n\t|\tClass = %d\t\t\t\t\t\tD.O.B = %d/%d/%d\t\t|",ob.clas,ob.day,ob.month,ob.year);
					fprintf(fp,"\n\t|\tSection = %s\t\t\t\t\t\tAcademic year = %d-%d\t|",ob.section,ob.academic,ob.academic1);
					fprintf(fp,"\n\t|\t\t\t\t\t\t\t\t\t\t\t\t|\n\t|-----------------------------------------------------------------------------------------------|");
					fprintf(fp,"\n\t|No.\tSubjects\t\t|\t  Marks obtained\t|    Grade according to marks   |");
					fprintf(fp,"\n\t|-----------------------------------------------------------------------------------------------|");
					fprintf(fp,"\n\t|1.\tEnglish\t\t\t|\t\t%d\t\t|\t   100 - 90 = A+\t|",ob.english);
					fprintf(fp,"\n\t|2.\tHindi\t\t\t|\t\t%d\t\t|\t    90 - 80 = A\t\t|",ob.hindi);
					fprintf(fp,"\n\t|3.\tEconamic\t\t|\t\t%d\t\t|\t    80 - 70 = B+\t|",ob.econamic);
					fprintf(fp,"\n\t|4.\tAcc\t\t\t|\t\t%d\t\t|\t    70 - 60 = B\t\t|",ob.acc);
					fprintf(fp,"\n\t|5.\tBusiness\t\t|\t\t%d\t\t|\t    60 - 50 = C\t\t|",ob.bus);
					fprintf(fp,"\n\t|-----------------------------------------------------------------------------------------------|");
					if(ob.pass==5)
					{
						fprintf(fp,"\n\t|\tTotal of all subject    |\t\t%d\t\t|\tMin\t|\tMax\t|",ob.total);
						fprintf(fp,"\n\t|-----------------------------------------------------------------------------------------------|");
						fprintf(fp,"\n\t|\tPercentage\t\t|\t\t%.2f\t\t|\t40\t|\t100\t|",ob.per);
						fprintf(fp,"\n\t|-----------------------------------------------------------------------------------------------|");
						fprintf(fp,"\n\nYOU ARE PASS");
					}
					else if(ob.fail==4||ob.fail==5)
					{
						fprintf(fp,"\n\nyour failed");
					}
					else
					{
						fprintf(fp,"\n\nsupplymentry");
					}
					fclose(fp);
			}	
		}
		//maths science
		else if(ob.stream==2)
		{
			//ip
			if(ob.stream2==1)
			{
				printf("\n\t|-----------------------------------------------------------------------------------------------|");
				printf("\n\t|\t\t\t\t\t\t\t\t\t\t\t\t|\n\t|\t\t\t--- NEHRU MONTESSORI SENIOR SECONDARY SCHOOL---\t\t\t\t|");
				printf("\n\t|\t\t\t\t\t\t\t\t\t\t\t\t|\n\t|-----------------------------------------------------------------------------------------------|");
				printf("\n\t|\t\t\t\t\t\t\t\t\t\t\t\t|\n\t|\tStudent name = %s %s\t\t\t\tRoll no = %d\t\t\t|",ob.name,ob.sname,ob.rollno);
				printf("\n\t|\tClass = %d\t\t\t\t\t\tD.O.B = %d/%d/%d\t\t|",ob.clas,ob.day,ob.month,ob.year);
				printf("\n\t|\tSection = %s\t\t\t\t\t\tAcademic year = %d-%d\t|",ob.section,ob.academic,ob.academic1);
				printf("\n\t|\t\t\t\t\t\t\t\t\t\t\t\t|\n\t|-----------------------------------------------------------------------------------------------|");
				printf("\n\t|No.\tSubjects\t\t|\t  Marks obtained\t|    Grade according to marks   |");
				printf("\n\t|-----------------------------------------------------------------------------------------------|");
				printf("\n\t|1.\tEnglish\t\t\t|\t\t%d\t\t|\t   100 - 90 = A+\t|",ob.english);
				printf("\n\t|3.\tMathematic\t\t|\t\t%d\t\t|\t    90 - 80 = A\t\t|",ob.math);
				printf("\n\t|4.\tPhysic\t\t\t|\t\t%d\t\t|\t    80 - 70 = B+\t|",ob.physic);
				printf("\n\t|5.\tChemistry\t\t|\t\t%d\t\t|\t    70 - 60 = B\t\t|",ob.chemistry);
				printf("\n\t|2.\tIP\t\t\t|\t\t%d\t\t|\t    60 - 50 = C\t\t|",ob.ip);
				printf("\n\t|-----------------------------------------------------------------------------------------------|");
				if(ob.pass==5)
				{
					printf("\n\t|\tTotal of all subject    |\t\t%d\t\t|\tMin\t|\tMax\t|",ob.total);
					printf("\n\t|-----------------------------------------------------------------------------------------------|");
					printf("\n\t|\tPercentage\t\t|\t\t%.2f\t\t|\t40\t|\t100\t|",ob.per);
					printf("\n\t|-----------------------------------------------------------------------------------------------|");
					printf("\n\nYOU ARE PASS");
				}
				else if(ob.fail==3||ob.fail==4)
				{
					printf("\n\nyour failed");
				}
				else
				{
					printf("\n\nsupplymentry");
				}
				FILE *fp;
				fp= fopen("Marksheet for class Math science IP.txt","w");
				fprintf(fp,"\n\t|-----------------------------------------------------------------------------------------------|");
				fprintf(fp,"\n\t|\t\t\t\t\t\t\t\t\t\t\t\t|\n\t|\t\t\t--- NEHRU MONTESSORI SENIOR SECONDARY SCHOOL---\t\t\t\t|");
				fprintf(fp,"\n\t|\t\t\t\t\t\t\t\t\t\t\t\t|\n\t|-----------------------------------------------------------------------------------------------|");
				fprintf(fp,"\n\t|\t\t\t\t\t\t\t\t\t\t\t\t|\n\t|\tStudent name = %s %s\t\t\t\tRoll no = %d\t\t\t|",ob.name,ob.sname,ob.rollno);
				fprintf(fp,"\n\t|\tClass = %d\t\t\t\t\t\tD.O.B = %d/%d/%d\t\t|",ob.clas,ob.day,ob.month,ob.year);
				fprintf(fp,"\n\t|\tSection = %s\t\t\t\t\t\tAcademic year = %d-%d\t|",ob.section,ob.academic,ob.academic1);
				fprintf(fp,"\n\t|\t\t\t\t\t\t\t\t\t\t\t\t|\n\t|-----------------------------------------------------------------------------------------------|");
				fprintf(fp,"\n\t|No.\tSubjects\t\t|\t  Marks obtained\t|    Grade according to marks   |");
				fprintf(fp,"\n\t|-----------------------------------------------------------------------------------------------|");
				fprintf(fp,"\n\t|1.\tEnglish\t\t\t|\t\t%d\t\t|\t   100 - 90 = A+\t|",ob.english);
				fprintf(fp,"\n\t|3.\tMathematic\t\t|\t\t%d\t\t|\t    90 - 80 = A\t\t|",ob.math);
				fprintf(fp,"\n\t|4.\tPhysic\t\t\t|\t\t%d\t\t|\t    80 - 70 = B+\t|",ob.physic);
				fprintf(fp,"\n\t|5.\tChemistry\t\t|\t\t%d\t\t|\t    70 - 60 = B\t\t|",ob.chemistry);
				fprintf(fp,"\n\t|2.\tIP\t\t\t|\t\t%d\t\t|\t    60 - 50 = C\t\t|",ob.ip);
				fprintf(fp,"\n\t|-----------------------------------------------------------------------------------------------|");
				if(ob.pass==5)
				{
					fprintf(fp,"\n\t|\tTotal of all subject    |\t\t%d\t\t|\tMin\t|\tMax\t|",ob.total);
					fprintf(fp,"\n\t|-----------------------------------------------------------------------------------------------|");
					fprintf(fp,"\n\t|\tPercentage\t\t|\t\t%.2f\t\t|\t40\t|\t100\t|",ob.per);
					fprintf(fp,"\n\t|-----------------------------------------------------------------------------------------------|");
					fprintf(fp,"\n\nYOU ARE PASS");
				}
				else if(ob.fail==3||ob.fail==4)
				{
					fprintf(fp,"\n\nyour failed");
				}
				else
				{
					fprintf(fp,"\n\nsupplymentry");
				}
				fclose(fp);
			}
			//Physical Education
			if(ob.stream2==2)
			{
				printf("\n\t|-----------------------------------------------------------------------------------------------|");
				printf("\n\t|\t\t\t\t\t\t\t\t\t\t\t\t|\n\t|\t\t\t--- NEHRU MONTESSORI SENIOR SECONDARY SCHOOL---\t\t\t\t|");
				printf("\n\t|\t\t\t\t\t\t\t\t\t\t\t\t|\n\t|-----------------------------------------------------------------------------------------------|");
				printf("\n\t|\t\t\t\t\t\t\t\t\t\t\t\t|\n\t|\tStudent name = %s %s\t\t\t\tRoll no = %d\t\t\t|",ob.name,ob.sname,ob.rollno);
				printf("\n\t|\tClass = %d\t\t\t\t\t\tD.O.B = %d/%d/%d\t\t|",ob.clas,ob.day,ob.month,ob.year);
				printf("\n\t|\tSection = %s\t\t\t\t\t\tAcademic year = %d-%d\t|",ob.section,ob.academic,ob.academic1);
				printf("\n\t|\t\t\t\t\t\t\t\t\t\t\t\t|\n\t|-----------------------------------------------------------------------------------------------|");
				printf("\n\t|No.\tSubjects\t\t|\t  Marks obtained\t|    Grade according to marks   |");
				printf("\n\t|-----------------------------------------------------------------------------------------------|");
				printf("\n\t|1.\tEnglish\t\t\t|\t\t%d\t\t|\t   100 - 90 = A+\t|",ob.english);
				printf("\n\t|3.\tMathematic\t\t|\t\t%d\t\t|\t    90 - 80 = A\t\t|",ob.math);
				printf("\n\t|4.\tPhysic\t\t\t|\t\t%d\t\t|\t    80 - 70 = B+\t|",ob.physic);
				printf("\n\t|5.\tChemistry\t\t|\t\t%d\t\t|\t    70 - 60 = B\t\t|",ob.chemistry);
				printf("\n\t|2.\tPhysical Education\t|\t\t%d\t\t|\t    60 - 50 = C\t\t|",ob.physical);
				printf("\n\t|-----------------------------------------------------------------------------------------------|");
				if(ob.pass==5)
				{
					printf("\n\t|\tTotal of all subject    |\t\t%d\t\t|\tMin\t|\tMax\t|",ob.total);
					printf("\n\t|-----------------------------------------------------------------------------------------------|");
					printf("\n\t|\tPercentage\t\t|\t\t%.2f\t\t|\t40\t|\t100\t|",ob.per);
					printf("\n\t|-----------------------------------------------------------------------------------------------|");
					printf("\n\nYOU ARE PASS");
				}
				else if(ob.fail==4||ob.fail==5)
				{
					printf("\n\nyour failed");
				}
				else
				{
					printf("\n\nsupplymentry");
				}
				FILE *fp;
				fp= fopen("Marksheet for class Math science Physical Education.txt","w");
				fprintf(fp,"\n\t|-----------------------------------------------------------------------------------------------|");
				fprintf(fp,"\n\t|\t\t\t\t\t\t\t\t\t\t\t\t|\n\t|\t\t\t--- NEHRU MONTESSORI SENIOR SECONDARY SCHOOL---\t\t\t\t|");
				fprintf(fp,"\n\t|\t\t\t\t\t\t\t\t\t\t\t\t|\n\t|-----------------------------------------------------------------------------------------------|");
				fprintf(fp,"\n\t|\t\t\t\t\t\t\t\t\t\t\t\t|\n\t|\tStudent name = %s %s\t\t\t\tRoll no = %d\t\t\t|",ob.name,ob.sname,ob.rollno);
				fprintf(fp,"\n\t|\tClass = %d\t\t\t\t\t\tD.O.B = %d/%d/%d\t\t|",ob.clas,ob.day,ob.month,ob.year);
				fprintf(fp,"\n\t|\tSection = %s\t\t\t\t\t\tAcademic year = %d-%d\t|",ob.section,ob.academic,ob.academic1);
				fprintf(fp,"\n\t|\t\t\t\t\t\t\t\t\t\t\t\t|\n\t|-----------------------------------------------------------------------------------------------|");
				fprintf(fp,"\n\t|No.\tSubjects\t\t|\t  Marks obtained\t|    Grade according to marks   |");
				fprintf(fp,"\n\t|-----------------------------------------------------------------------------------------------|");
				fprintf(fp,"\n\t|1.\tEnglish\t\t\t|\t\t%d\t\t|\t   100 - 90 = A+\t|",ob.english);
				fprintf(fp,"\n\t|3.\tMathematic\t\t|\t\t%d\t\t|\t    90 - 80 = A\t\t|",ob.math);
				fprintf(fp,"\n\t|4.\tPhysic\t\t\t|\t\t%d\t\t|\t    80 - 70 = B+\t|",ob.physic);
				fprintf(fp,"\n\t|5.\tChemistry\t\t|\t\t%d\t\t|\t    70 - 60 = B\t\t|",ob.chemistry);
				fprintf(fp,"\n\t|2.\tPhysical Education\t|\t\t%d\t\t|\t    60 - 50 = C\t\t|",ob.physical);
				fprintf(fp,"\n\t|-----------------------------------------------------------------------------------------------|");
				if(ob.pass==5)
				{
					fprintf(fp,"\n\t|\tTotal of all subject    |\t\t%d\t\t|\tMin\t|\tMax\t|",ob.total);
					fprintf(fp,"\n\t|-----------------------------------------------------------------------------------------------|");
					fprintf(fp,"\n\t|\tPercentage\t\t|\t\t%.2f\t\t|\t40\t|\t100\t|",ob.per);
					fprintf(fp,"\n\t|-----------------------------------------------------------------------------------------------|");
					fprintf(fp,"\n\nYOU ARE PASS");
				}
				else if(ob.fail==3||ob.fail==4)
				{
					fprintf(fp,"\n\nyour failed");
				}
				else
				{
					fprintf(fp,"\n\nsupplymentry");
				}
			}
			//computer science
			if(ob.stream2==3)
			{
				printf("\n\t|-----------------------------------------------------------------------------------------------|");
				printf("\n\t|\t\t\t\t\t\t\t\t\t\t\t\t|\n\t|\t\t\t--- NEHRU MONTESSORI SENIOR SECONDARY SCHOOL---\t\t\t\t|");
				printf("\n\t|\t\t\t\t\t\t\t\t\t\t\t\t|\n\t|-----------------------------------------------------------------------------------------------|");
				printf("\n\t|\t\t\t\t\t\t\t\t\t\t\t\t|\n\t|\tStudent name = %s %s\t\t\t\tRoll no = %d\t\t\t|",ob.name,ob.sname,ob.rollno);
				printf("\n\t|\tClass = %d\t\t\t\t\t\tD.O.B = %d/%d/%d\t\t|",ob.clas,ob.day,ob.month,ob.year);
				printf("\n\t|\tSection = %s\t\t\t\t\t\tAcademic year = %d-%d\t|",ob.section,ob.academic,ob.academic1);
				printf("\n\t|\t\t\t\t\t\t\t\t\t\t\t\t|\n\t|-----------------------------------------------------------------------------------------------|");
				printf("\n\t|No.\tSubjects\t\t|\t  Marks obtained\t|    Grade according to marks   |");
				printf("\n\t|-----------------------------------------------------------------------------------------------|");
				printf("\n\t|1.\tEnglish\t\t\t|\t\t%d\t\t|\t   100 - 90 = A+\t|",ob.english);
				printf("\n\t|3.\tMathematic\t\t|\t\t%d\t\t|\t    90 - 80 = A\t\t|",ob.math);
				printf("\n\t|4.\tPhysic\t\t\t|\t\t%d\t\t|\t    80 - 70 = B+\t|",ob.physic);
				printf("\n\t|5.\tChemistry\t\t|\t\t%d\t\t|\t    70 - 60 = B\t\t|",ob.chemistry);
				printf("\n\t|2.\tComputer Science\t|\t\t%d\t\t|\t    60 - 50 = C\t\t|",ob.computer);
				printf("\n\t|-----------------------------------------------------------------------------------------------|");
				if(ob.pass==5)
				{
					printf("\n\t|\tTotal of all subject    |\t\t%d\t\t|\tMin\t|\tMax\t|",ob.total);
					printf("\n\t|-----------------------------------------------------------------------------------------------|");
					printf("\n\t|\tPercentage\t\t|\t\t%.2f\t\t|\t40\t|\t100\t|",ob.per);
					printf("\n\t|-----------------------------------------------------------------------------------------------|");
					printf("\n\nYOU ARE PASS");
				}
				else if(ob.fail==3||ob.fail==4)
				{
					printf("\n\nyour failed");
				}
				else
				{
					printf("\n\nsupplymentry");
				}
				FILE *fp;
				fp= fopen("Marksheet for class Math science add Computer Science.txt","w");
				fprintf(fp,"\n\t|-----------------------------------------------------------------------------------------------|");
				fprintf(fp,"\n\t|\t\t\t\t\t\t\t\t\t\t\t\t|\n\t|\t\t\t--- NEHRU MONTESSORI SENIOR SECONDARY SCHOOL---\t\t\t\t|");
				fprintf(fp,"\n\t|\t\t\t\t\t\t\t\t\t\t\t\t|\n\t|-----------------------------------------------------------------------------------------------|");
				fprintf(fp,"\n\t|\t\t\t\t\t\t\t\t\t\t\t\t|\n\t|\tStudent name = %s %s\t\t\t\tRoll no = %d\t\t\t|",ob.name,ob.sname,ob.rollno);
				fprintf(fp,"\n\t|\tClass = %d\t\t\t\t\t\tD.O.B = %d/%d/%d\t\t|",ob.clas,ob.day,ob.month,ob.year);
				fprintf(fp,"\n\t|\tSection = %s\t\t\t\t\t\tAcademic year = %d-%d\t|",ob.section,ob.academic,ob.academic1);
				fprintf(fp,"\n\t|\t\t\t\t\t\t\t\t\t\t\t\t|\n\t|-----------------------------------------------------------------------------------------------|");
				fprintf(fp,"\n\t|No.\tSubjects\t\t|\t  Marks obtained\t|    Grade according to marks   |");
				fprintf(fp,"\n\t|-----------------------------------------------------------------------------------------------|");
				fprintf(fp,"\n\t|1.\tEnglish\t\t\t|\t\t%d\t\t|\t   100 - 90 = A+\t|",ob.english);
				fprintf(fp,"\n\t|3.\tMathematic\t\t|\t\t%d\t\t|\t    90 - 80 = A\t\t|",ob.math);
				fprintf(fp,"\n\t|4.\tPhysic\t\t\t|\t\t%d\t\t|\t    80 - 70 = B+\t|",ob.physic);
				fprintf(fp,"\n\t|5.\tChemistry\t\t|\t\t%d\t\t|\t    70 - 60 = B\t\t|",ob.chemistry);
				fprintf(fp,"\n\t|2.\tComputer Science\t|\t\t%d\t\t|\t    60 - 50 = C\t\t|",ob.computer);
				fprintf(fp,"\n\t|-----------------------------------------------------------------------------------------------|");
				if(ob.pass==5)
				{
					fprintf(fp,"\n\t|\tTotal of all subject    |\t\t%d\t\t|\tMin\t|\tMax\t|",ob.total);
					fprintf(fp,"\n\t|-----------------------------------------------------------------------------------------------|");
					fprintf(fp,"\n\t|\tPercentage\t\t|\t\t%.2f\t\t|\t40\t|\t100\t|",ob.per);
					fprintf(fp,"\n\t|-----------------------------------------------------------------------------------------------|");
					fprintf(fp,"\n\nYOU ARE PASS");
				}
				else if(ob.fail==3||ob.fail==4)
				{
					fprintf(fp,"\n\nyour failed");
				}
				else
				{
					fprintf(fp,"\n\nsupplymentry");
				}
			}
			//hindi
			if(ob.stream2==4)
			{
				printf("\n\t|-----------------------------------------------------------------------------------------------|");
				printf("\n\t|\t\t\t\t\t\t\t\t\t\t\t\t|\n\t|\t\t\t--- NEHRU MONTESSORI SENIOR SECONDARY SCHOOL---\t\t\t\t|");
				printf("\n\t|\t\t\t\t\t\t\t\t\t\t\t\t|\n\t|-----------------------------------------------------------------------------------------------|");
				printf("\n\t|\t\t\t\t\t\t\t\t\t\t\t\t|\n\t|\tStudent name = %s %s\t\t\t\tRoll no = %d\t\t\t|",ob.name,ob.sname,ob.rollno);
				printf("\n\t|\tClass = %d\t\t\t\t\t\tD.O.B = %d/%d/%d\t\t|",ob.clas,ob.day,ob.month,ob.year);
				printf("\n\t|\tSection = %s\t\t\t\t\t\tAcademic year = %d-%d\t|",ob.section,ob.academic,ob.academic1);
				printf("\n\t|\t\t\t\t\t\t\t\t\t\t\t\t|\n\t|-----------------------------------------------------------------------------------------------|");
				printf("\n\t|No.\tSubjects\t\t|\t  Marks obtained\t|    Grade according to marks   |");
				printf("\n\t|-----------------------------------------------------------------------------------------------|");
				printf("\n\t|1.\tEnglish\t\t\t|\t\t%d\t\t|\t   100 - 90 = A+\t|",ob.english);
				printf("\n\t|3.\tMathematic\t\t|\t\t%d\t\t|\t    90 - 80 = A\t\t|",ob.math);
				printf("\n\t|4.\tPhysic\t\t\t|\t\t%d\t\t|\t    80 - 70 = B+\t|",ob.physic);
				printf("\n\t|5.\tChemistry\t\t|\t\t%d\t\t|\t    70 - 60 = B\t\t|",ob.chemistry);
				printf("\n\t|2.\tHindi\t\t\t|\t\t%d\t\t|\t    60 - 50 = C\t\t|",ob.hindi);
				printf("\n\t|-----------------------------------------------------------------------------------------------|");
				if(ob.pass==5)
				{
					printf("\n\t|\tTotal of all subject    |\t\t%d\t\t|\tMin\t|\tMax\t|",ob.total);
					printf("\n\t|-----------------------------------------------------------------------------------------------|");
					printf("\n\t|\tPercentage\t\t|\t\t%.2f\t\t|\t40\t|\t100\t|",ob.per);
					printf("\n\t|-----------------------------------------------------------------------------------------------|");
					printf("\n\nYOU ARE PASS");
				}
				else if(ob.fail==3||ob.fail==4)
				{
					printf("\n\nyour failed");
				}
				else
				{
					printf("\n\nsupplymentry");
				}
				FILE *fp;
				fp= fopen("Marksheet for class Math science add Hindi.txt","w");
				fprintf(fp,"\n\t|-----------------------------------------------------------------------------------------------|");
				fprintf(fp,"\n\t|\t\t\t\t\t\t\t\t\t\t\t\t|\n\t|\t\t\t--- NEHRU MONTESSORI SENIOR SECONDARY SCHOOL---\t\t\t\t|");
				fprintf(fp,"\n\t|\t\t\t\t\t\t\t\t\t\t\t\t|\n\t|-----------------------------------------------------------------------------------------------|");
				fprintf(fp,"\n\t|\t\t\t\t\t\t\t\t\t\t\t\t|\n\t|\tStudent name = %s %s\t\t\t\tRoll no = %d\t\t\t|",ob.name,ob.sname,ob.rollno);
				fprintf(fp,"\n\t|\tClass = %d\t\t\t\t\t\tD.O.B = %d/%d/%d\t\t|",ob.clas,ob.day,ob.month,ob.year);
				fprintf(fp,"\n\t|\tSection = %s\t\t\t\t\t\tAcademic year = %d-%d\t|",ob.section,ob.academic,ob.academic1);
				fprintf(fp,"\n\t|\t\t\t\t\t\t\t\t\t\t\t\t|\n\t|-----------------------------------------------------------------------------------------------|");
				fprintf(fp,"\n\t|No.\tSubjects\t\t|\t  Marks obtained\t|    Grade according to marks   |");
				fprintf(fp,"\n\t|-----------------------------------------------------------------------------------------------|");
				fprintf(fp,"\n\t|1.\tEnglish\t\t\t|\t\t%d\t\t|\t   100 - 90 = A+\t|",ob.english);
				fprintf(fp,"\n\t|3.\tMathematic\t\t|\t\t%d\t\t|\t    90 - 80 = A\t\t|",ob.math);
				fprintf(fp,"\n\t|4.\tPhysic\t\t\t|\t\t%d\t\t|\t    80 - 70 = B+\t|",ob.physic);
				fprintf(fp,"\n\t|5.\tChemistry\t\t|\t\t%d\t\t|\t    70 - 60 = B\t\t|",ob.chemistry);
				fprintf(fp,"\n\t|2.\tHindi\t\t\t|\t\t%d\t\t|\t    60 - 50 = C\t\t|",ob.hindi);
				fprintf(fp,"\n\t|-----------------------------------------------------------------------------------------------|");
				if(ob.pass==5)
				{
					fprintf(fp,"\n\t|\tTotal of all subject    |\t\t%d\t\t|\tMin\t|\tMax\t|",ob.total);
					fprintf(fp,"\n\t|-----------------------------------------------------------------------------------------------|");
					fprintf(fp,"\n\t|\tPercentage\t\t|\t\t%.2f\t\t|\t40\t|\t100\t|",ob.per);
					fprintf(fp,"\n\t|-----------------------------------------------------------------------------------------------|");
					fprintf(fp,"\n\nYOU ARE PASS");
				}
				else if(ob.fail==3||ob.fail==4)
				{
					fprintf(fp,"\n\nyour failed");
				}
				else
				{
					fprintf(fp,"\n\nsupplymentry");
				}
			}
		}
		//biology
		else if(ob.stream==3)
		{
			//physical education
			if(ob.stream3==1)
			{
				printf("\n\t|-----------------------------------------------------------------------------------------------|");
				printf("\n\t|\t\t\t\t\t\t\t\t\t\t\t\t|\n\t|\t\t\t--- NEHRU MONTESSORI SENIOR SECONDARY SCHOOL---\t\t\t\t|");
				printf("\n\t|\t\t\t\t\t\t\t\t\t\t\t\t|\n\t|-----------------------------------------------------------------------------------------------|");
				printf("\n\t|\t\t\t\t\t\t\t\t\t\t\t\t|\n\t|\tStudent name = %s %s\t\t\t\tRoll no = %d\t\t\t|",ob.name,ob.sname,ob.rollno);
				printf("\n\t|\tClass = %d\t\t\t\t\t\tD.O.B = %d/%d/%d\t\t|",ob.clas,ob.day,ob.month,ob.year);
				printf("\n\t|\tSection = %s\t\t\t\t\t\tAcademic year = %d-%d\t|",ob.section,ob.academic,ob.academic1);
				printf("\n\t|\t\t\t\t\t\t\t\t\t\t\t\t|\n\t|-----------------------------------------------------------------------------------------------|");
				printf("\n\t|No.\tSubjects\t\t|\t  Marks obtained\t|    Grade according to marks   |");
				printf("\n\t|-----------------------------------------------------------------------------------------------|");
				printf("\n\t|1.\tEnglish\t\t\t|\t\t%d\t\t|\t   100 - 90 = A+\t|",ob.english);
				printf("\n\t|2.\tPhysic\t\t\t|\t\t%d\t\t|\t    90 - 80 = A\t\t|",ob.physic);
				printf("\n\t|3.\tChemistry\t\t|\t\t%d\t\t|\t    80 - 70 = B+\t|",ob.chemistry);
				printf("\n\t|4.\tBiology\t\t\t|\t\t%d\t\t|\t    70 - 60 = B\t\t|",ob.biology);
				printf("\n\t|5.\tPhysical education\t|\t\t%d\t\t|\t    60 - 50 = C\t\t|",ob.physical);
				printf("\n\t|-----------------------------------------------------------------------------------------------|");
				if(ob.pass==5)
				{
					printf("\n\t|\tTotal of all subject    |\t\t%d\t\t|\tMin\t|\tMax\t|",ob.total);
					printf("\n\t|-----------------------------------------------------------------------------------------------|");
					printf("\n\t|\tPercentage\t\t|\t\t%.2f\t\t|\t40\t|\t100\t|",ob.per);
					printf("\n\t|-----------------------------------------------------------------------------------------------|");
					printf("\n\nYOU ARE PASS");
				}
				else if(ob.fail==3||ob.fail==4)
				{
					printf("\n\nyour failed");
				}
				else
				{
					printf("\n\nsupplymentry");
				}
				FILE *fp;
				fp= fopen("Marksheet for class Biology add Physical Education.txt","w");
				fprintf(fp,"\n\t|-----------------------------------------------------------------------------------------------|");
				fprintf(fp,"\n\t|\t\t\t\t\t\t\t\t\t\t\t\t|\n\t|\t\t\t--- NEHRU MONTESSORI SENIOR SECONDARY SCHOOL---\t\t\t\t|");
				fprintf(fp,"\n\t|\t\t\t\t\t\t\t\t\t\t\t\t|\n\t|-----------------------------------------------------------------------------------------------|");
				fprintf(fp,"\n\t|\t\t\t\t\t\t\t\t\t\t\t\t|\n\t|\tStudent name = %s %s\t\t\t\tRoll no = %d\t\t\t|",ob.name,ob.sname,ob.rollno);
				fprintf(fp,"\n\t|\tClass = %d\t\t\t\t\t\tD.O.B = %d/%d/%d\t\t|",ob.clas,ob.day,ob.month,ob.year);
				fprintf(fp,"\n\t|\tSection = %s\t\t\t\t\t\tAcademic year = %d-%d\t|",ob.section,ob.academic,ob.academic1);
				fprintf(fp,"\n\t|\t\t\t\t\t\t\t\t\t\t\t\t|\n\t|-----------------------------------------------------------------------------------------------|");
				fprintf(fp,"\n\t|No.\tSubjects\t\t|\t  Marks obtained\t|    Grade according to marks   |");
				fprintf(fp,"\n\t|-----------------------------------------------------------------------------------------------|");
				fprintf(fp,"\n\t|1.\tEnglish\t\t\t|\t\t%d\t\t|\t   100 - 90 = A+\t|",ob.english);
				fprintf(fp,"\n\t|2.\tPhysic\t\t\t|\t\t%d\t\t|\t    90 - 80 = A\t\t|",ob.physic);
				fprintf(fp,"\n\t|3.\tChemistry\t\t|\t\t%d\t\t|\t    80 - 70 = B+\t|",ob.chemistry);
				fprintf(fp,"\n\t|4.\tBiology\t\t\t|\t\t%d\t\t|\t    70 - 60 = B\t\t|",ob.biology);
				fprintf(fp,"\n\t|5.\tPhysical education\t|\t\t%d\t\t|\t    60 - 50 = C\t\t|",ob.physical);
				fprintf(fp,"\n\t|-----------------------------------------------------------------------------------------------|");
				if(ob.pass==5)
				{
					fprintf(fp,"\n\t|\tTotal of all subject    |\t\t%d\t\t|\tMin\t|\tMax\t|",ob.total);
					fprintf(fp,"\n\t|-----------------------------------------------------------------------------------------------|");
					fprintf(fp,"\n\t|\tPercentage\t\t|\t\t%.2f\t\t|\t40\t|\t100\t|",ob.per);
					fprintf(fp,"\n\t|-----------------------------------------------------------------------------------------------|");
					fprintf(fp,"\n\nYOU ARE PASS");
				}
				else if(ob.fail==3||ob.fail==4)
				{
					fprintf(fp,"\n\nyour failed");
				}
				else
				{
					fprintf(fp,"\n\nsupplymentry");
				}
			}
			//maths
			else if(ob.stream3==2)
			{
				printf("\n\t|-----------------------------------------------------------------------------------------------|");
				printf("\n\t|\t\t\t\t\t\t\t\t\t\t\t\t|\n\t|\t\t\t--- NEHRU MONTESSORI SENIOR SECONDARY SCHOOL---\t\t\t\t|");
				printf("\n\t|\t\t\t\t\t\t\t\t\t\t\t\t|\n\t|-----------------------------------------------------------------------------------------------|");
				printf("\n\t|\t\t\t\t\t\t\t\t\t\t\t\t|\n\t|\tStudent name = %s %s\t\t\t\tRoll no = %d\t\t\t|",ob.name,ob.sname,ob.rollno);
				printf("\n\t|\tClass = %d\t\t\t\t\t\tD.O.B = %d/%d/%d\t\t|",ob.clas,ob.day,ob.month,ob.year);
				printf("\n\t|\tSection = %s\t\t\t\t\t\tAcademic year = %d-%d\t|",ob.section,ob.academic,ob.academic1);
				printf("\n\t|\t\t\t\t\t\t\t\t\t\t\t\t|\n\t|-----------------------------------------------------------------------------------------------|");
				printf("\n\t|No.\tSubjects\t\t|\t  Marks obtained\t|    Grade according to marks   |");
				printf("\n\t|-----------------------------------------------------------------------------------------------|");
				printf("\n\t|1.\tEnglish\t\t\t|\t\t%d\t\t|\t   100 - 90 = A+\t|",ob.english);
				printf("\n\t|2.\tPhysic\t\t\t|\t\t%d\t\t|\t    90 - 80 = A\t\t|",ob.physic);
				printf("\n\t|3.\tChemistry\t\t|\t\t%d\t\t|\t    80 - 70 = B+\t|",ob.chemistry);
				printf("\n\t|4.\tBiology\t\t\t|\t\t%d\t\t|\t    70 - 60 = B\t\t|",ob.biology);
				printf("\n\t|5.\tMathematic\t\t|\t\t%d\t\t|\t    60 - 50 = C\t\t|",ob.math);
				printf("\n\t|-----------------------------------------------------------------------------------------------|");
				if(ob.pass==5)
				{
					printf("\n\t|\tTotal of all subject    |\t\t%d\t\t|\t\t\t\t|",ob.total);
					printf("\n\t|-----------------------------------------------------------------------------------------------|");
					printf("\n\t|\tPercentage\t\t|\t\t%.2f\t\t|\t\t\t\t|",ob.per);
					printf("\n\t|-----------------------------------------------------------------------------------------------|");
					printf("\n\nYOU ARE PASS");
				}
				else if(ob.fail==4||ob.fail==5)
				{
					printf("\n\nyour failed");
				}
				else
				{
					printf("\n\nsupplymentry");
				}
				FILE *fp;
				fp= fopen("Marksheet for class Biology add Maths.txt","w");
				fprintf(fp,"\n\t|-----------------------------------------------------------------------------------------------|");
				fprintf(fp,"\n\t|\t\t\t\t\t\t\t\t\t\t\t\t|\n\t|\t\t\t--- NEHRU MONTESSORI SENIOR SECONDARY SCHOOL---\t\t\t\t|");
				fprintf(fp,"\n\t|\t\t\t\t\t\t\t\t\t\t\t\t|\n\t|-----------------------------------------------------------------------------------------------|");
				fprintf(fp,"\n\t|\t\t\t\t\t\t\t\t\t\t\t\t|\n\t|\tStudent name = %s %s\t\t\t\tRoll no = %d\t\t\t|",ob.name,ob.sname,ob.rollno);
				fprintf(fp,"\n\t|\tClass = %d\t\t\t\t\t\tD.O.B = %d/%d/%d\t\t|",ob.clas,ob.day,ob.month,ob.year);
				fprintf(fp,"\n\t|\tSection = %s\t\t\t\t\t\tAcademic year = %d-%d\t|",ob.section,ob.academic,ob.academic1);
				fprintf(fp,"\n\t|\t\t\t\t\t\t\t\t\t\t\t\t|\n\t|-----------------------------------------------------------------------------------------------|");
				fprintf(fp,"\n\t|No.\tSubjects\t\t|\t  Marks obtained\t|    Grade according to marks   |");
				fprintf(fp,"\n\t|-----------------------------------------------------------------------------------------------|");
				fprintf(fp,"\n\t|1.\tEnglish\t\t\t|\t\t%d\t\t|\t   100 - 90 = A+\t|",ob.english);
				fprintf(fp,"\n\t|2.\tPhysic\t\t\t|\t\t%d\t\t|\t    90 - 80 = A\t\t|",ob.physic);
				fprintf(fp,"\n\t|3.\tChemistry\t\t|\t\t%d\t\t|\t    80 - 70 = B+\t|",ob.chemistry);
				fprintf(fp,"\n\t|4.\tBiology\t\t\t|\t\t%d\t\t|\t    70 - 60 = B\t\t|",ob.biology);
				fprintf(fp,"\n\t|5.\tMathematic\t\t|\t\t%d\t\t|\t    60 - 50 = C\t\t|",ob.math);
				fprintf(fp,"\n\t|-----------------------------------------------------------------------------------------------|");
				if(ob.pass==5)
				{
					fprintf(fp,"\n\t|\tTotal of all subject    |\t\t%d\t\t|\tMin\t|\tMax\t|",ob.total);
					fprintf(fp,"\n\t|-----------------------------------------------------------------------------------------------|");
					fprintf(fp,"\n\t|\tPercentage\t\t|\t\t%.2f\t\t|\t40\t|\t100\t|",ob.per);
					fprintf(fp,"\n\t|-----------------------------------------------------------------------------------------------|");
					fprintf(fp,"\n\nYOU ARE PASS");
				}
				else if(ob.fail==3||ob.fail==4)
				{
					fprintf(fp,"\n\nyour failed");
				}
				else
				{
					fprintf(fp,"\n\nsupplymentry");
				}
			}
			//computer
			else if(ob.stream3==3)
			{
				printf("\n\t|-----------------------------------------------------------------------------------------------|");
				printf("\n\t|\t\t\t\t\t\t\t\t\t\t\t\t|\n\t|\t\t\t--- NEHRU MONTESSORI SENIOR SECONDARY SCHOOL---\t\t\t\t|");
				printf("\n\t|\t\t\t\t\t\t\t\t\t\t\t\t|\n\t|-----------------------------------------------------------------------------------------------|");
				printf("\n\t|\t\t\t\t\t\t\t\t\t\t\t\t|\n\t|\tStudent name = %s %s\t\t\t\tRoll no = %d\t\t\t|",ob.name,ob.sname,ob.rollno);
				printf("\n\t|\tClass = %d\t\t\t\t\t\tD.O.B = %d/%d/%d\t\t|",ob.clas,ob.day,ob.month,ob.year);
				printf("\n\t|\tSection = %s\t\t\t\t\t\tAcademic year = %d-%d\t|",ob.section,ob.academic,ob.academic1);
				printf("\n\t|\t\t\t\t\t\t\t\t\t\t\t\t|\n\t|-----------------------------------------------------------------------------------------------|");
				printf("\n\t|No.\tSubjects\t\t|\t  Marks obtained\t|    Grade according to marks   |");
				printf("\n\t|-----------------------------------------------------------------------------------------------|");
				printf("\n\t|1.\tEnglish\t\t\t|\t\t%d\t\t|\t   100 - 90 = A+\t|",ob.english);
				printf("\n\t|2.\tPhysic\t\t\t|\t\t%d\t\t|\t    90 - 80 = A\t\t|",ob.physic);
				printf("\n\t|3.\tChemistry\t\t|\t\t%d\t\t|\t    80 - 70 = B+\t|",ob.chemistry);
				printf("\n\t|4.\tBiology\t\t\t|\t\t%d\t\t|\t    70 - 60 = B\t\t|",ob.biology);
				printf("\n\t|5.\tComputer\t\t|\t\t%d\t\t|\t    60 - 50 = C\t\t|",ob.computer);
				printf("\n\t|-----------------------------------------------------------------------------------------------|");
				if(ob.pass==5)
				{
					printf("\n\t|\tTotal of all subject    |\t\t%d\t\t|\tMin\t|\tMax\t|",ob.total);
					printf("\n\t|-----------------------------------------------------------------------------------------------|");
					printf("\n\t|\tPercentage\t\t|\t\t%.2f\t\t|\t40\t|\t100\t|",ob.per);
					printf("\n\t|-----------------------------------------------------------------------------------------------|");
					printf("\n\nYOU ARE PASS");
				}
				else if(ob.fail==3||ob.fail==4)
				{
					printf("\n\nyour failed");
				}
				else
				{
					printf("\n\nsupplyme");
				}
				FILE *fp;
				fp= fopen("Marksheet for class Biology add Computer.txt","w");
				fprintf(fp,"\n\t|-----------------------------------------------------------------------------------------------|");
				fprintf(fp,"\n\t|\t\t\t\t\t\t\t\t\t\t\t\t|\n\t|\t\t\t--- NEHRU MONTESSORI SENIOR SECONDARY SCHOOL---\t\t\t\t|");
				fprintf(fp,"\n\t|\t\t\t\t\t\t\t\t\t\t\t\t|\n\t|-----------------------------------------------------------------------------------------------|");
				fprintf(fp,"\n\t|\t\t\t\t\t\t\t\t\t\t\t\t|\n\t|\tStudent name = %s %s\t\t\t\tRoll no = %d\t\t\t|",ob.name,ob.sname,ob.rollno);
				fprintf(fp,"\n\t|\tClass = %d\t\t\t\t\t\tD.O.B = %d/%d/%d\t\t|",ob.clas,ob.day,ob.month,ob.year);
				fprintf(fp,"\n\t|\tSection = %s\t\t\t\t\t\tAcademic year = %d-%d\t|",ob.section,ob.academic,ob.academic1);
				fprintf(fp,"\n\t|\t\t\t\t\t\t\t\t\t\t\t\t|\n\t|-----------------------------------------------------------------------------------------------|");
				fprintf(fp,"\n\t|No.\tSubjects\t\t|\t  Marks obtained\t|    Grade according to marks   |");
				fprintf(fp,"\n\t|-----------------------------------------------------------------------------------------------|");
				fprintf(fp,"\n\t|1.\tEnglish\t\t\t|\t\t%d\t\t|\t   100 - 90 = A+\t|",ob.english);
				fprintf(fp,"\n\t|2.\tPhysic\t\t\t|\t\t%d\t\t|\t    90 - 80 = A\t\t|",ob.physic);
				fprintf(fp,"\n\t|3.\tChemistry\t\t|\t\t%d\t\t|\t    80 - 70 = B+\t|",ob.chemistry);
				fprintf(fp,"\n\t|4.\tBiology\t\t\t|\t\t%d\t\t|\t    70 - 60 = B\t\t|",ob.biology);
				fprintf(fp,"\n\t|5.\tComputer\t\t|\t\t%d\t\t|\t    60 - 50 = C\t\t|",ob.computer);
				fprintf(fp,"\n\t|-----------------------------------------------------------------------------------------------|");
				if(ob.pass==5)
				{
					fprintf(fp,"\n\t|\tTotal of all subject    |\t\t%d\t\t|\tMin\t|\tMax\t|",ob.total);
					fprintf(fp,"\n\t|-----------------------------------------------------------------------------------------------|");
					fprintf(fp,"\n\t|\tPercentage\t\t|\t\t%.2f\t\t|\t40\t|\t100\t|",ob.per);
					fprintf(fp,"\n\t|-----------------------------------------------------------------------------------------------|");
					fprintf(fp,"\n\nYOU ARE PASS");
				}
				else if(ob.fail==3||ob.fail==4)
				{
					fprintf(fp,"\n\nyour failed");
				}
				else
				{
					fprintf(fp,"\n\nsupplymentry");
				}
			}
		}
	}
	getch();
}

