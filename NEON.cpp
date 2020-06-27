#include<iostream>
#include<string>
#include<fstream>
using namespace std;
struct si
{
	string sname;
	int sid;
};
struct stm
{
	string name;
	int id;
			float q1,q2,q3,q4,qw,qavg,qt,a1,a2,a3,a4,aw,aavg,at,s1,s1w,sto,s1avg,s2,s2w,s2to,s2avg,p,pw,pt,pavg,f,fw,favg;
};
struct st
{
	string name;
	int id;
	char a,att;
	float q1,q2,q3,q4,q5,a1,a2,a3,a4,a5,s1,s2,p,f,total,sto,s2to,pt;
	float w,aw,aavrg,avrg,s1w,s1avg,s2w,s2avg,pavg,pw,ft,fw,favg;
};
struct tech
{
	string name;
	int id;
	char a;
};
class teacher
{
public:
	void att(ifstream& infile,ofstream& outfile,string fil)
	{
		
		
		string names;
		st ca[50][12];
		int ids;
		
		
		string ss;
		int ii,i=0;
		char l1,l2,l3,l4,l5,l6,l7,l8,l9,l10,l11,l12;
		
		while(infile>>ss>>ii)
		{
			
			
			
			ca[i][0].name=ss;
			ca[i][1].id=ii;
			
			
			i++;
			
	   }
		
		
		infile.close();
		int n;
		char p;
		cout<<"enter lecture number "<<endl;
		cin>>n;
		n=n+2;
		
		for(int i=0;i<50;i++)
		{
			for(int j=0;j<12;j++)
			{
				
				if(j==n-1)
				{
					
					int r=j;
					j=0;
					
				cout<<ca[i][j].name<<" "<<ca[i][j+1].id<<endl;
				
				cin>>p;
				
				ca[i][r].att=p;
				
				
				j=r;
				}
				
			}
		}
		outfile.open(fil);
		for(int i=0;i<50;i++)
		{
			for(int j=0;j<1;j++)
			{
                outfile<<ca[i][0].name<<" "<<ca[i][1].id<<" "<<ca[i][2].att<<" "<<ca[i][3].att<<" "<<ca[i][4].att<<" "<<ca[i][5].att<<" "<<ca[i][6].att<<" "<<ca[i][7].att<<" "<<ca[i][8].att<<" "<<ca[i][9].att<<" "<<ca[i][10].att<<" "<<ca[i][11].att<<" "<<ca[i][12].att<<endl;
			}
		}
	}
	
	void mark(ifstream& innfile,ofstream& outfile,string fil)
	{
		string names;
		st a[50][35];
		int ids;
		 int i=0,j=0;
		
		while(!innfile.eof())
		{
		 innfile>>names>>ids;
				a[i][0].name=names;
				
					a[i][1].id=ids;
			i++;
		}
		innfile.close();
		
		
		string k;
		cout<<"enter q for quiz, enter a for assignment, enter s1 for sessional 1,s2 for sessionals 2"
			<<"enter f for final, enter w for presentation "<<endl;
		cin>>k;
		
		if(k=="q")
		{
			
			int n;
			float weightage,t;
			cout<<"enter quiz number "<<endl;
			cin>>n;
			cout<<"enter weightage"<<endl;
			cin>>weightage;
			cout<<"enter total numbers "<<endl;
			cin>>t;
			float l=0,s=0;
			float avg;
		for(int i=0;i<50;i++)
		{
			for(int j=0;j<1;j++)
			{
				float m;
				j=0;
				cout<<a[i][j].name<<a[i][j+1].id<<endl;
				cin>>m;
				if(n==1)
				{
					a[i][2].q1=m;
					
				}
				if(n==2)
				{
					a[i][3].q2=m;
					
				}
				if(n==3)
				{
					a[i][4].q3=m;
					
				}
				if(n==4)
				{
					a[i][5].q4=m;
					
				}
				float wei;
				wei=m/t*weightage;
				wei=wei+a[i][6].w;
				a[i][6].w=wei;
				
				s=s+m;
				if(m>l)
					l=m;
			}
		}
	avg=s/50;
	for(int i=0;i<50;i++)
	{
	a[i][7].avrg=avg;
	
	a[i][8].total=l;
	
		}	
		}
		if(k=="a")
		{
			
			int n;
			float weightage,t;
			cout<<"enter assignment number "<<endl;
			cin>>n;
			cout<<"enter weightage"<<endl;
			cin>>weightage;
			cout<<"enter total numbers "<<endl;
			cin>>t;
			int l=0,s=0;
			float avg;
		for(int i=1;i<50;i++)
		{
			
				float m;
				j=0;
				cout<<a[i][j].name<<a[i][j+1].id<<endl;
				cin>>m;
				if(n==1)
				{
					a[i][9].a1=m;
				
				}
				if(n==2)
				{
					a[i][10].a2=m;
					
				}
				if(n==3)
				{
					a[i][11].a3=m;
					
				}
				if(n==4)
				{
					a[i][12].a4=m;
					
				}
				float wei;
				wei=m/t*weightage;
				wei=wei+a[i][13].aw;
				a[i][12].aw=wei;
				
				s=s+m;
				if(m>l)
					l=m;
			
		}
	avg=s/50;
	for(int i=0;i<50;i++)
	{
	a[i][14].aavrg=avg;
	
	a[i][15].total=l;
	}
		}
	if(k=="s1")
		{
			
				float weightage,t;
			
			cout<<"enter weightage"<<endl;
			cin>>weightage;
			cout<<"enter total numbers "<<endl;
			cin>>t;
			float l=0,s=0;
			float avg;
		for(int i=0;i<50;i++)
		{
			
				float m;
				j=0;
				cout<<a[i][j].name<<a[i][j+1].id<<endl;
				cin>>m;
				
					a[i][16].s1=m;
					
					s=s+m;
					float wei;
					wei=m/t*weightage;
					a[i][17].s1w=wei;
					
					a[i][18].sto=t;
					
			}
		
		avg=s/50;
		for(int i=1;i<50;i++)
		{
			
				a[i][19].s1avg=avg;
				
			
		}
	}
				if(k=="s2")
		{
			
				float weightage,t;
			
			cout<<"enter weightage"<<endl;
			cin>>weightage;
			cout<<"enter total numbers "<<endl;
			cin>>t;
			float l=0,s=0;
			float avg;
		for(int i=0;i<50;i++)
		{
			
				float m;
				j=0;
				cout<<a[i][j].name<<a[i][j+1].id<<endl;
				cin>>m;
				
					a[i][20].s2=m;
					
					s=s+m;
					float wei;
					wei=m/t*weightage;
					a[i][21].s2w=wei;
					
					a[i][22].s2to=t;
					
			}
		
		avg=s/50;
		for(int i=0;i<50;i++)
		{
			
				a[i][23].s2avg=avg;
				
			
		}
	}
				if(k=="w")
		{
			
				float weightage,t;
			
			cout<<"enter weightage"<<endl;
			cin>>weightage;
			cout<<"enter total numbers "<<endl;
			cin>>t;
			float l=0.0,s=0.0;
			float avg;
		for(int i=0;i<50;i++)
		{
			
				float m;
				j=0;
				cout<<a[i][j].name<<a[i][j+1].id<<endl;
				cin>>m;
				
					a[i][24].p=m;
					
					s=s+m;
					float wei;
					wei=m/t*weightage;
					a[i][25].pw=wei;
					
					a[i][26].pt=t;
					
			}
		
		avg=s/50;
		for(int i=0;i<50;i++)
		{
			
				a[i][27].pavg=avg;
				
			
		}
	}
						if(k=="f")
		{
			
				float weightage,t;
			
			cout<<"enter weightage"<<endl;
			cin>>weightage;
			cout<<"enter total numbers "<<endl;
			cin>>t;
			float l=0,s=0;
			float avg;
		for(int i=0;i<50;i++)
		{
			
				float m;
				j=0;
				cout<<a[i][j].name<<" "<<a[i][j+1].id<<endl;
				cin>>m;
				
					a[i][28].f=m;
					
					s=s+m;
					float wei;
					wei=m/t*weightage;
					a[i][29].fw=wei;
					
					a[i][30].ft=t;
				
			
		}
		avg=s/50;
		for(int i=1;i<50;i++)
		{
			
				a[i][31].favg=avg;
				
			
		}
	}
			for(int i=0;i<50;i++)
			{
									cout<<a[i][0].name<<" "<<a[i][1].id<<" "<<a[i][2].q1<<" "<<a[i][3].q2<<" "<<a[i][4].q3<<" "<<a[i][5].q4<<" "<<a[i][6].w<<" "<<a[i][7].avrg<<" "<<a[i][8].total<<" "	<<a[i][9].a1<<" "<<a[i][10].a2<<" "<<a[i][11].a3<<" "<<a[i][12].a4<<" "<<a[i][13].aw<<" "<<a[i][14].aavrg<<" "<<a[i][15].total<<" "<<a[i][16].s1<<" "<<a[i][17].s1w<<" "<<a[i][18].sto<<" "<<a[i][19].s1avg<< " "<<a[i][20].s2<<" "<<a[i][21].s2w<<" "<<a[i][22].s2to<<" "<<a[i][23].s2avg<<" "<<a[i][24].p<<" "<<a[i][25].pw<<" "<<a[i][26].pt<<" "<<a[i][27].pavg<<" "<<a[i][28].f<<" "<<a[i][29].fw<<" "<<a[i][30].ft<<" "<<a[i][31].favg<<endl;

	
			}								
	outfile.open(fil);
	cout<<"file open "<<endl;
	for(int i=0;i<50;i++)
	{
		

					outfile<<a[i][0].name<<" "<<a[i][1].id<<" "<<a[i][2].q1<<" "<<a[i][3].q2<<" "<<a[i][4].q3<<" "<<a[i][5].q4<<" "<<a[i][6].w<<" "<<a[i][7].avrg<<" "<<a[i][8].total<<" "	<<a[i][9].a1<<" "<<a[i][10].a2<<" "<<a[i][11].a3<<" "<<a[i][12].a4<<" "<<a[i][13].aw<<" "<<a[i][14].aavrg<<" "<<a[i][15].total<<" "<<a[i][16].s1<<" "<<a[i][17].s1w<<" "<<a[i][18].sto<<" "<<a[i][19].s1avg<< " "<<a[i][20].s2<<" "<<a[i][21].s2w<<" "<<a[i][22].s2to<<" "<<a[i][23].s2avg<<" "<<a[i][24].p<<" "<<a[i][25].pw<<" "<<a[i][26].pt<<" "<<a[i][27].pavg<<" "<<a[i][28].f<<" "<<a[i][29].fw<<" "<<a[i][30].ft<<" "<<a[i][31].favg<<endl;;
		
	}
	outfile.close();
}
};
class studentss
{
public:
	void cpatt(ifstream& infile,string hh,int a)
	{
		infile.open(hh);
		st cpa[50][12];
		string ss;
		char l1,l2,l3,l4,l5,l6,l7,l8,l9,l10,l11,l12;
		int ii,i=0;
		cout<<"cp"<<endl;
		while(infile>>ss>>ii>>l1>>l2>>l3>>l4>>l5>>l6>>l7>>l8>>l9>>l10>>l11)
		
		{
			cpa[i][0].name=ss;
			cpa[i][1].id=ii;
			cpa[i][2].att=l1;
			cpa[i][3].att=l2;
			cpa[i][4].att=l3;
			cpa[i][5].att=l4;
			cpa[i][6].att=l5;
			cpa[i][7].att=l6;
			cpa[i][8].att=l7;
			cpa[i][9].att=l8;
			cpa[i][10].att=l9;
			cpa[i][11].att=l10;
			cpa[i][12].att=l11;
			i++;
	   }
		infile.close();
		cout<<"cp attendence"<<endl;
		cout<<"name"<<" "<<"id"<<" "<<"lec1"<<" "<<"lec2"<<" "<<"lec3"<<" "<<"lec4"<<" "<<"lec5"<<" "<<"lec6"<<" "<<"lec7"<<" "<<"lec8"<<" "<<"lec9"<<" "<<"lec10"<<" "<<"lec11"<<endl;
		for(int i=a;i<a+1;i++)
			{
				for(int j=0;j<13;j++)
				{
					if(j==0)
					{
					cout<<cpa[i][j].name<<" ";
					}
					if(j==1)
					{
						cout<<cpa[i][j].id<<" ";
					}
					if(j==2)
					{
						cout<<cpa[i][j].att<<" ";
					}
					if(j==3)
					{
						cout<<cpa[i][j].att<<" ";
					}
					if(j==4)
					{
						cout<<cpa[i][j].att<<" ";
					}
					if(j==5)
					{
						cout<<cpa[i][j].att<<" ";
					}
					if(j==6)
					{
						cout<<cpa[i][j].att<<" ";
					}
					if(j==7)
					{
						cout<<cpa[i][j].att<<" ";
					}
					if(j==8)
					{
						cout<<cpa[i][j].att<<" ";
					}
					if(j==9)
					{
						cout<<cpa[i][j].att<<" ";
					}
					if(j==10)
					{
						cout<<cpa[i][j].att<<" ";
					}
					if(j==11)
					{
						cout<<cpa[i][j].att<<" ";
					}
					if(j==12)
					{
						cout<<cpa[i][j].att<<" ";
					}

				}
		}
	
	cout<<endl;
	cout<<endl;
	}
	void dldatt(ifstream& infile,string hh,int a)
	{
		infile.open(hh);
		st dlda[50][12];
		string ss;
		char l1,l2,l3,l4,l5,l6,l7,l8,l9,l10,l11,l12;
		int ii,i=0;
		while(infile>>ss>>ii>>l1>>l2>>l3>>l4>>l5>>l6>>l7>>l8>>l9>>l10>>l11)
		
		{
			

			dlda[i][0].name=ss;
			dlda[i][1].id=ii;
			dlda[i][2].att=l1;
			dlda[i][3].att=l2;
			dlda[i][4].att=l3;
			dlda[i][5].att=l4;
			dlda[i][6].att=l5;
			dlda[i][7].att=l6;
			dlda[i][8].att=l7;
			dlda[i][9].att=l8;
			dlda[i][10].att=l9;
			dlda[i][11].att=l10;
			dlda[i][12].att=l11;
			i++;
	   }
		infile.close();
		cout<<"dld attendence"<<endl;
				cout<<"name"<<" "<<"id"<<" "<<"lec1"<<" "<<"lec2"<<" "<<"lec3"<<" "<<"lec4"<<" "<<"lec5"<<" "<<"lec6"<<" "<<"lec7"<<" "<<"lec8"<<" "<<"lec9"<<" "<<"lec10"<<" "<<"lec11"<<endl;

		for(int i=a;i<a+1;i++)
			{
				for(int j=0;j<13;j++)
				{
					if(j==0)
					{
					cout<<dlda[i][j].name<<" ";
					}
					if(j==1)
					{
						cout<<dlda[i][j].id<<" ";
					}
					if(j==2)
					{
						cout<<dlda[i][j].att<<" ";
					}
					if(j==3)
					{
						cout<<dlda[i][j].att<<" ";
					}
					if(j==4)
					{
						cout<<dlda[i][j].att<<" ";
					}
					if(j==5)
					{
						cout<<dlda[i][j].att<<" ";
					}
					if(j==6)
					{
						cout<<dlda[i][j].att<<" ";
					}
					if(j==7)
					{
						cout<<dlda[i][j].att<<" ";
					}
					if(j==8)
					{
						cout<<dlda[i][j].att<<" ";
					}
					if(j==9)
					{
						cout<<dlda[i][j].att<<" ";
					}
					if(j==10)
					{
						cout<<dlda[i][j].att<<" ";
					}
					if(j==11)
					{
						cout<<dlda[i][j].att<<" ";
					}
					if(j==12)
					{
						cout<<dlda[i][j].att<<" ";
					}

				}
		}
		cout<<endl;
		cout<<endl;
	}
	void calatt(ifstream& infile,string hh,int a)
	{
		infile.open(hh);
		st cala[50][12];
		string ss;

		char l1,l2,l3,l4,l5,l6,l7,l8,l9,l10,l11,l12;
		int ii,i=0;
		
		while(infile>>ss>>ii>>l1>>l2>>l3>>l4>>l5>>l6>>l7>>l8>>l9>>l10>>l11)
		
		{
			

			cala[i][0].name=ss;
			cala[i][1].id=ii;
			cala[i][2].att=l1;
			cala[i][3].att=l2;
			cala[i][4].att=l3;
			cala[i][5].att=l4;
			cala[i][6].att=l5;
			cala[i][7].att=l6;
			cala[i][8].att=l7;
			cala[i][9].att=l8;
			cala[i][10].att=l9;
			cala[i][11].att=l10;
			cala[i][12].att=l11;
			i++;
	   }
		infile.close();
		cout<<"cal attendence"<<endl;
		cout<<"name"<<" "<<"id"<<" "<<"lec1"<<" "<<"lec2"<<" "<<"lec3"<<" "<<"lec4"<<" "<<"lec5"<<" "<<"lec6"<<" "<<"lec7"<<" "<<"lec8"<<" "<<"lec9"<<" "<<"lec10"<<" "<<"lec11"<<endl;

		for(int i=a;i<a+1;i++)
			{
				for(int j=0;j<13;j++)
				{
					if(j==0)
					{
					cout<<cala[i][j].name<<" ";
					}
					if(j==1)
					{
						cout<<cala[i][j].id<<" ";
					}
					if(j==2)
					{
						cout<<cala[i][j].att<<" ";
					}
					if(j==3)
					{
						cout<<cala[i][j].att<<" ";
					}
					if(j==4)
					{
						cout<<cala[i][j].att<<" ";
					}
					if(j==5)
					{
						cout<<cala[i][j].att<<" ";
					}
					if(j==6)
					{
						cout<<cala[i][j].att<<" ";
					}
					if(j==7)
					{
						cout<<cala[i][j].att<<" ";
					}
					if(j==8)
					{
						cout<<cala[i][j].att<<" ";
					}
					if(j==9)
					{
						cout<<cala[i][j].att<<" ";
					}
					if(j==10)
					{
						cout<<cala[i][j].att<<" ";
					}
					if(j==11)
					{
						cout<<cala[i][j].att<<" ";
					}
					if(j==12)
					{
						cout<<cala[i][j].att<<" ";
					}

				}
		}
		cout<<endl;
		cout<<endl;
	}
	void cpmarks(ifstream& infile,string hh,int a)
	{
		infile.open(hh);
		stm cpm[50][31];
		string ss;
		float q1,q2,q3,q4,qw,qavg,qt,a1,a2,a3,a4,aw,aavg,at,s1,s1w,sto,s1avg,s2,s2w,s2to,s2avg,p,pw,pt,pavg,f,fw,favg;
		int ii,i=0;
		cout<<"cp"<<endl;
		while(infile>>ss>>ii>>q1>>q2>>q3>>q4>>qw>>qavg>>qt>>a1>>a2>>a3>>a4>>aw>>aavg>>at>>s1>>s1w>>sto>>s1avg>>s2>>s2w>>s2to>>s2avg>>p>>pw>>pt>>pavg>>f>>fw>>favg)
		
		{
			cpm[i][0].name=ss;
			cpm[i][1].id=ii;
			cpm[i][2].q1=q1;
			cpm[i][3].q2=q2;
			cpm[i][4].q3=q3;
			cpm[i][5].q4=q4;
			cpm[i][6].qw=qw;
			cpm[i][7].qavg=qavg;
			cpm[i][8].qt=qt;
			cpm[i][9].a1=a1;
			cpm[i][10].a2=a2;
			cpm[i][11].a3=a3;
			cpm[i][12].a4=a4;
			cpm[i][13].aw=aw;
			cpm[i][14].aavg=aavg;
			cpm[i][15].at=at;
			cpm[i][16].s1=s1;
			cpm[i][17].s1w=s1w;
			cpm[i][18].sto=sto;
			cpm[i][19].s1avg=s1avg;
			cpm[i][20].s2=s2;
			cpm[i][21].s2w=s2w;
			cpm[i][22].s2to=s2to;
			cpm[i][23].s2avg=s2avg;
			cpm[i][24].p=p;
			cpm[i][25].pw=pw;
			cpm[i][26].pt=pt;
			cpm[i][27].pavg=pavg;
			cpm[i][28].f=f;
			cpm[i][29].fw=fw;
			cpm[i][30].favg=favg;


			i++;
	   }
		infile.close();
		cout<<"cp marks"<<endl;
		cout<<"name"<<" "<<"id"<<" "<<"q1"<<" "<<"q2"<<" "<<"q3"<<" "<<"q4"<<" "<<"qw"<<" "<<"qavg"<<" "<<"qt"<<" "<<"a1"<<" "<<"a2"<<" "<<"a3"<<" "<<"a4"<< " "<<"aw"<<" "<<"aavg"<<" "<<"at"<<" "<<"s1"<<" "<<"s1w"<<" "<<"s1to"<<" "<<"s1avg"<<" "<<"s2"<<" "<<"s2w"<<" "<<"s2to"<<" "<<"s2avg"<<" "<<"p"<<" "<<"pw"<<" "<<"pt"<<" "<<"pavg"<<" "<<"f"<<" "<<"fw"<<" "<<"favg"<<" "<<endl;
		for(int i=a;i<a+1;i++)
			{
				for(int j=0;j<31;j++)
				{
					if(j==0)
					{
					cout<<cpm[i][j].name<<" ";
					}
					if(j==1)
					{
						cout<<cpm[i][j].id<<" ";
					}
					if(j==2)
					{
						cout<<cpm[i][j].q1<<" ";
					}
					if(j==3)
					{
						cout<<cpm[i][j].q2<<" ";
					}
					if(j==4)
					{
						cout<<cpm[i][j].q3<<" ";
					}
					if(j==5)
					{
						cout<<cpm[i][j].q4<<" ";
					}
					if(j==6)
					{
						cout<<cpm[i][j].qw<<" ";
					}
					if(j==7)
					{
						cout<<cpm[i][j].qavg<<" ";
					}
					if(j==8)
					{
						cout<<cpm[i][j].qt<<" ";
					}
					if(j==9)
					{
						cout<<cpm[i][j].a1<<" ";
					}
					if(j==10)
					{
						cout<<cpm[i][j].a2<<" ";
					}
					if(j==11)
					{
						cout<<cpm[i][j].a3<<" ";
					}
					if(j==12)
					{
						cout<<cpm[i][j].a4<<" ";
					}
					if(j==13)
					{
						cout<<cpm[i][j].aw<<" ";
					}
					if(j==14)
					{
						cout<<cpm[i][j].aavg<<" ";
					}
					if(j==15)
					{
						cout<<cpm[i][j].at<<" ";
					}
					if(j==16)
					{
						cout<<cpm[i][j].s1<<" ";
					}
					if(j==17)
					{
						cout<<cpm[i][j].s1w<<" ";
					}
					if(j==18)
					{
						cout<<cpm[i][j].sto<<" ";
					}
					if(j==19)
					{
						cout<<cpm[i][j].s1avg<<" ";
					}
					if(j==20)
					{
						cout<<cpm[i][j].s2<<" ";
					}
					if(j==21)
					{
						cout<<cpm[i][j].s2w<<" ";
					}
					if(j==22)
					{
						cout<<cpm[i][j].s2to<<" ";
					}
					if(j==23)
					{
						cout<<cpm[i][j].s2avg<<" ";
					}
					if(j==24)
					{
						cout<<cpm[i][j].p<<" ";
					}
					if(j==25)
					{
						cout<<cpm[i][j].pw<<" ";
					}
					if(j==26)
					{
						cout<<cpm[i][j].pt<<" ";
					}
					if(j==27)
					{
						cout<<cpm[i][j].pavg<<" ";
					}
					if(j==28)
					{
						cout<<cpm[i][j].f<<" ";
					}
					if(j==29)
					{
						cout<<cpm[i][j].fw<<" ";
					}
					if(j==30)
					{
						cout<<cpm[i][j].favg<<" ";
					}

				}
		}
	
	cout<<endl;
	cout<<endl;
	}
	void dldmarks(ifstream& infile,string hh,int a)
	{
		infile.open(hh);
		stm dldm[50][31];
		string ss;
		float q1,q2,q3,q4,qw,qavg,qt,a1,a2,a3,a4,aw,aavg,at,s1,s1w,sto,s1avg,s2,s2w,s2to,s2avg,p,pw,pt,pavg,f,fw,favg;
		int ii,i=0;
		cout<<"DLD"<<endl;
		while(infile>>ss>>ii>>q1>>q2>>q3>>q4>>qw>>qavg>>qt>>a1>>a2>>a3>>a4>>aw>>aavg>>at>>s1>>s1w>>sto>>s1avg>>s2>>s2w>>s2to>>s2avg>>p>>pw>>pt>>pavg>>f>>fw>>favg)
		
		{
			dldm[i][0].name=ss;
			dldm[i][1].id=ii;
			dldm[i][2].q1=q1;
			dldm[i][3].q2=q2;
			dldm[i][4].q3=q3;
			dldm[i][5].q4=q4;
			dldm[i][6].qw=qw;
			dldm[i][7].qavg=qavg;
			dldm[i][8].qt=qt;
			dldm[i][9].a1=a1;
			dldm[i][10].a2=a2;
			dldm[i][11].a3=a3;
			dldm[i][12].a4=a4;
			dldm[i][13].aw=aw;
			dldm[i][14].aavg=aavg;
			dldm[i][15].at=at;
			dldm[i][16].s1=s1;
			dldm[i][17].s1w=s1w;
			dldm[i][18].sto=sto;
			dldm[i][19].s1avg=s1avg;
			dldm[i][20].s2=s2;
			dldm[i][21].s2w=s2w;
			dldm[i][22].s2to=s2to;
			dldm[i][23].s2avg=s2avg;
			dldm[i][24].p=p;
			dldm[i][25].pw=pw;
			dldm[i][26].pt=pt;
			dldm[i][27].pavg=pavg;
			dldm[i][28].f=f;
			dldm[i][29].fw=fw;
			dldm[i][30].favg=favg;


			i++;
	   }
		infile.close();
		cout<<"dld marks"<<endl;
		cout<<"name"<<" "<<"id"<<" "<<"q1"<<" "<<"q2"<<" "<<"q3"<<" "<<"q4"<<" "<<"qw"<<" "<<"qavg"<<" "<<"qt"<<" "<<"a1"<<" "<<"a2"<<" "<<"a3"<<" "<<"a4"<< " "<<"aw"<<" "<<"aavg"<<" "<<"at"<<" "<<"s1"<<" "<<"s1w"<<" "<<"s1to"<<" "<<"s1avg"<<" "<<"s2"<<" "<<"s2w"<<" "<<"s2to"<<" "<<"s2avg"<<" "<<"p"<<" "<<"pw"<<" "<<"pt"<<" "<<"pavg"<<" "<<"f"<<" "<<"fw"<<" "<<"favg"<<" "<<endl;
		for(int i=a;i<a+1;i++)
			{
				for(int j=0;j<31;j++)
				{
					if(j==0)
					{
					cout<<dldm[i][j].name<<" ";
					}
					if(j==1)
					{
						cout<<dldm[i][j].id<<" ";
					}
					if(j==2)
					{
						cout<<dldm[i][j].q1<<" ";
					}
					if(j==3)
					{
						cout<<dldm[i][j].q2<<" ";
					}
					if(j==4)
					{
						cout<<dldm[i][j].q3<<" ";
					}
					if(j==5)
					{
						cout<<dldm[i][j].q4<<" ";
					}
					if(j==6)
					{
						cout<<dldm[i][j].qw<<" ";
					}
					if(j==7)
					{
						cout<<dldm[i][j].qavg<<" ";
					}
					if(j==8)
					{
						cout<<dldm[i][j].qt<<" ";
					}
					if(j==9)
					{
						cout<<dldm[i][j].a1<<" ";
					}
					if(j==10)
					{
						cout<<dldm[i][j].a2<<" ";
					}
					if(j==11)
					{
						cout<<dldm[i][j].a3<<" ";
					}
					if(j==12)
					{
						cout<<dldm[i][j].a4<<" ";
					}
					if(j==13)
					{
						cout<<dldm[i][j].aw<<" ";
					}
					if(j==14)
					{
						cout<<dldm[i][j].aavg<<" ";
					}
					if(j==15)
					{
						cout<<dldm[i][j].at<<" ";
					}
					if(j==16)
					{
						cout<<dldm[i][j].s1<<" ";
					}
					if(j==17)
					{
						cout<<dldm[i][j].s1w<<" ";
					}
					if(j==18)
					{
						cout<<dldm[i][j].sto<<" ";
					}
					if(j==19)
					{
						cout<<dldm[i][j].s1avg<<" ";
					}
					if(j==20)
					{
						cout<<dldm[i][j].s2<<" ";
					}
					if(j==21)
					{
						cout<<dldm[i][j].s2w<<" ";
					}
					if(j==22)
					{
						cout<<dldm[i][j].s2to<<" ";
					}
					if(j==23)
					{
						cout<<dldm[i][j].s2avg<<" ";
					}
					if(j==24)
					{
						cout<<dldm[i][j].p<<" ";
					}
					if(j==25)
					{
						cout<<dldm[i][j].pw<<" ";
					}
					if(j==26)
					{
						cout<<dldm[i][j].pt<<" ";
					}
					if(j==27)
					{
						cout<<dldm[i][j].pavg<<" ";
					}
					if(j==28)
					{
						cout<<dldm[i][j].f<<" ";
					}
					if(j==29)
					{
						cout<<dldm[i][j].fw<<" ";
					}
					if(j==30)
					{
						cout<<dldm[i][j].favg<<" ";
					}

				}
		}
	
	cout<<endl;
	cout<<endl;
	}
	void calmarks(ifstream& infile,string hh,int a)
	{
		infile.open(hh);
		stm calm[50][31];
		string ss;
		float q1,q2,q3,q4,qw,qavg,qt,a1,a2,a3,a4,aw,aavg,at,s1,s1w,sto,s1avg,s2,s2w,s2to,s2avg,p,pw,pt,pavg,f,fw,favg;
		int ii,i=0;
		cout<<"calculus"<<endl;
		while(infile>>ss>>ii>>q1>>q2>>q3>>q4>>qw>>qavg>>qt>>a1>>a2>>a3>>a4>>aw>>aavg>>at>>s1>>s1w>>sto>>s1avg>>s2>>s2w>>s2to>>s2avg>>p>>pw>>pt>>pavg>>f>>fw>>favg)
		
		{
			calm[i][0].name=ss;
			calm[i][1].id=ii;
			calm[i][2].q1=q1;
			calm[i][3].q2=q2;
			calm[i][4].q3=q3;
			calm[i][5].q4=q4;
			calm[i][6].qw=qw;
			calm[i][7].qavg=qavg;
			calm[i][8].qt=qt;
			calm[i][9].a1=a1;
			calm[i][10].a2=a2;
			calm[i][11].a3=a3;
			calm[i][12].a4=a4;
			calm[i][13].aw=aw;
			calm[i][14].aavg=aavg;
			calm[i][15].at=at;
			calm[i][16].s1=s1;
			calm[i][17].s1w=s1w;
			calm[i][18].sto=sto;
			calm[i][19].s1avg=s1avg;
			calm[i][20].s2=s2;
			calm[i][21].s2w=s2w;
			calm[i][22].s2to=s2to;
			calm[i][23].s2avg=s2avg;
			calm[i][24].p=p;
			calm[i][25].pw=pw;
			calm[i][26].pt=pt;
			calm[i][27].pavg=pavg;
			calm[i][28].f=f;
			calm[i][29].fw=fw;
			calm[i][30].favg=favg;


			i++;
	   }
		infile.close();
		cout<<"calculus marks"<<endl;
		cout<<"name"<<" "<<"id"<<" "<<"q1"<<" "<<"q2"<<" "<<"q3"<<" "<<"q4"<<" "<<"qw"<<" "<<"qavg"<<" "<<"qt"<<" "<<"a1"<<" "<<"a2"<<" "<<"a3"<<" "<<"a4"<< " "<<"aw"<<" "<<"aavg"<<" "<<"at"<<" "<<"s1"<<" "<<"s1w"<<" "<<"s1to"<<" "<<"s1avg"<<" "<<"s2"<<" "<<"s2w"<<" "<<"s2to"<<" "<<"s2avg"<<" "<<"p"<<" "<<"pw"<<" "<<"pt"<<" "<<"pavg"<<" "<<"f"<<" "<<"fw"<<" "<<"favg"<<" "<<endl;
		for(int i=a;i<a+1;i++)
			{
				for(int j=0;j<31;j++)
				{
					if(j==0)
					{
					cout<<calm[i][j].name<<" ";
					}
					if(j==1)
					{
						cout<<calm[i][j].id<<" ";
					}
					if(j==2)
					{
						cout<<calm[i][j].q1<<" ";
					}
					if(j==3)
					{
						cout<<calm[i][j].q2<<" ";
					}
					if(j==4)
					{
						cout<<calm[i][j].q3<<" ";
					}
					if(j==5)
					{
						cout<<calm[i][j].q4<<" ";
					}
					if(j==6)
					{
						cout<<calm[i][j].qw<<" ";
					}
					if(j==7)
					{
						cout<<calm[i][j].qavg<<" ";
					}
					if(j==8)
					{
						cout<<calm[i][j].qt<<" ";
					}
					if(j==9)
					{
						cout<<calm[i][j].a1<<" ";
					}
					if(j==10)
					{
						cout<<calm[i][j].a2<<" ";
					}
					if(j==11)
					{
						cout<<calm[i][j].a3<<" ";
					}
					if(j==12)
					{
						cout<<calm[i][j].a4<<" ";
					}
					if(j==13)
					{
						cout<<calm[i][j].aw<<" ";
					}
					if(j==14)
					{
						cout<<calm[i][j].aavg<<" ";
					}
					if(j==15)
					{
						cout<<calm[i][j].at<<" ";
					}
					if(j==16)
					{
						cout<<calm[i][j].s1<<" ";
					}
					if(j==17)
					{
						cout<<calm[i][j].s1w<<" ";
					}
					if(j==18)
					{
						cout<<calm[i][j].sto<<" ";
					}
					if(j==19)
					{
						cout<<calm[i][j].s1avg<<" ";
					}
					if(j==20)
					{
						cout<<calm[i][j].s2<<" ";
					}
					if(j==21)
					{
						cout<<calm[i][j].s2w<<" ";
					}
					if(j==22)
					{
						cout<<calm[i][j].s2to<<" ";
					}
					if(j==23)
					{
						cout<<calm[i][j].s2avg<<" ";
					}
					if(j==24)
					{
						cout<<calm[i][j].p<<" ";
					}
					if(j==25)
					{
						cout<<calm[i][j].pw<<" ";
					}
					if(j==26)
					{
						cout<<calm[i][j].pt<<" ";
					}
					if(j==27)
					{
						cout<<calm[i][j].pavg<<" ";
					}
					if(j==28)
					{
						cout<<calm[i][j].f<<" ";
					}
					if(j==29)
					{
						cout<<calm[i][j].fw<<" ";
					}
					if(j==30)
					{
						cout<<calm[i][j].favg<<" ";
					}

				}
		}
	
	cout<<endl;
	cout<<endl;
	}
	};
int main()
{
	char c;
	teacher te;
	cout<<"if tearcher enter t "
		<<"if student enter s"<<endl;
	cin>>c;
		if(c=='t')
		{
			string namet,namett;
			int idt,idtt;
			cout<<"enter your name"<<endl;
			cin>>namet;
			namett=namet;
			cout<<"enter your id"<<endl;
			cin>>idt;
			idtt=idt;
	        ifstream teach;
	        teach.open("teacher.txt");
	        tech tec[3][2];
            int i=0,j=0;
			
	         while(!teach.eof())
		        {
					teach>>namet;
					teach>>idt;
			         
				         j=0;
			
				             tec[i][j].name=namet;
				                j=j+1;
					                tec[i][j].id=idt;
					               i++;
			
		         }
			 teach.close();

			
	          for(int m=0;m<1;m++)
	                {
		                for(int k=0;k<1;k++)
		                {
			            if(tec[m][k].name==namett  && tec[m][k+1].id==idtt || tec[1][0].name==namett && tec[1][1].id==idtt || tec[2][0].name==namett && tec[2][1].id==idtt )
			                {
				
				             if(namett=="shoaib")
				               {
					             char y;
					              cout<<"enter a for attendence"<<"enter m for marks "<<endl;
					              cin>>y;
					                if(y=='a')
				                      	 {
											
											 string s;
										s="ocpatt.txt";
                                           ifstream cpatt;
					                       ofstream ocpatt;
										  
										   
					                       cpatt.open("cpatt.txt");
										  
					                       te.att(cpatt,ocpatt,s);
										   
										  
					                     }
				                	if(y=='m')
					                     {
											 string s;
										s="ocpmarks.txt";
                                           ifstream cpatt;
					                       ofstream marks;
					                       cpatt.open("cpatt.txt");
					                       te.mark(cpatt,marks,s);
					                     }
			                  	}
				           if(namett=="waqas")
				                {
					              char ch;

					                cout<<"enter a for attendence"<<"enter m for marks "<<endl;
									
					                cin>>ch;
					                if(ch=='a')
					                  {
										  string s;
										s="odldatt.txt";
                                       ifstream dldatt;
					                   ofstream odldatt;
										
					                   dldatt.open("dldatt.txt");
									  
					                   te.att(dldatt,odldatt,s);
					                  }
					                if(ch=='m')
					                  {
										  string s;
										s="odldmarks.txt";
                                       ifstream dldatt;
					                   ofstream marks;
					                   dldatt.open("dldatt.txt");
									   
					                   te.mark(dldatt,marks,s);
					                  }
				                } 
	                          if(namett=="nasir")
				                {
				                	char y;

				                 	cout<<"enter a for attendence"<<"enter m for marks "<<endl;
				                	cin>>y;
				                	if(y=='a')
					                {
										string s;
										s="ocalatt.txt";
                                     ifstream calatt;
					                 ofstream ocalatt;
					                 calatt.open("calatt.txt");
					                 te.att(calatt,ocalatt,s);
					                }
				                	if(y=='m')
									{
										string s;
										s="ocalmarks.txt";
                                     ifstream calatt;
					                 ofstream marks;
					                 calatt.open("calatt.txt");
					                 te.mark(calatt,marks,s);
					                }
				             }
			}
			else
				cout<<"login failed"<<endl;
						break;
		         }
	        }
	
		}		
			
		if (c=='s')
		{
			
			
			
			si d[50][2];
			
			int i=0,j=0;
			
			string name;
				int id;
			
			
		
		    ifstream student;
			student.open("student.txt");
			
			while(!student.eof())
			{
				
				
				student>>name;
				student>>id;
				d[i][j].sname=name;
				j=j+1;
				d[i][j].sid=id;
				j=0;
				i++;
				
				
			}
			student.close();
			string studentname;
			int studentidee;
			cout<<"enter your name "<<endl;
			cin>>studentname;
			cout<<"enter your id"<<endl;
			cin>>studentidee;
			
	
		
			for(int i=0;i<50;i++)
			{
				for(int j=0;j<1;j++)
				{
					if(studentname==d[i][j].sname && studentidee==d[i][j+1].sid)
					{
						char k;
						cout<<"login entered "<<endl;
						cout<<"enter a for attendence and m for marks"<<endl;
						cin>>k;
						if(k=='a')
						{
							ifstream ocalatt;
							ifstream odldatt;
							ifstream ocpatt;
							string str1,str2,str3;
							str1="ocalatt.txt";
							str2="ocpatt.txt";
							str3="odldatt.txt";
							studentss sss;
							
							
							sss.dldatt(odldatt,str3,i);
							
							sss.cpatt(ocpatt,str2,i);
							
							sss.calatt(ocalatt,str1,i);
						
						}
						if(k=='m')
						{
							ifstream ocalmarks;
							ifstream odldmarks;
							ifstream ocpmarks;
							string str1,str2,str3;
							str1="ocalmarks.txt";
							str2="ocpmarks.txt";
							str3="odldmarks.txt";
							studentss sss;
							
							
							sss.dldmarks(odldmarks,str3,i);
							
							sss.cpmarks(ocpmarks,str2,i);
							
							sss.calmarks(ocalmarks,str1,i);
						
						}
					}
					
				}
			}
			
			
		}
	
	system ("pause");
	return 0;
}

