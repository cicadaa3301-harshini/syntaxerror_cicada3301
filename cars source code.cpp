#include<iostream.h>
#include<conio.h>
#include<dos.h>
#include <string.h>
#include<stdio.h>
#include<ctype.h>
#include<graphics.h>
#include<process.h>
#include<fstream.h>
#include<stdlib.h>
int ans1=0,ans2=0;
void car_info();
class second
{
 public:
	char hname[20],car[20],dprice[28],model[20];
	long contact;
 };
class user
{
 public:
	 char name[20],pass[30],email_id[25];
	void fresh()
	{
	 ofstream fout;
	 fout.open("User.txt",ios::app);
	 cout<<"Enter name"<<endl;
	 gets(name);
	 cout<<"Enter email_id"<<endl;
	 gets(email_id);
	 cout<<"Choose a password "<<endl;
	 gets(pass);
	 fout<<name<<"	"<<email_id<<"	"<<pass<<endl;
	 cout<<"Sign in Success"<<endl;
	 fout.close();
	 }
};
void buy_new()
{
 char ans[7],s1[4]="Yes";
 cout<<"Kindly apply filters wrt either price or company to see info"<<endl;
 cout<<"Atleast one of them is mandatory"<<endl;
 cout<<"Want to apply filters wrt to range??(Yes/No)"<<endl;
 cin>>ans;
 if(strcmpi(ans,s1)==0)
 {
  cout<<"What price range do you want??(Yes/No)"<<endl;
  cout<<"Press 1 for price from 3 Lakhs to 24 Lakhs"<<endl;
  cout<<"Press 2 for price from 24 Lakhs to 62 Lakhs"<<endl;
  cout<<"Press 3 for price above 62 lakhs"<<endl;
  cin>>ans1;
  if(!(ans1>=1&&ans1<=3))
  {
   ans1=0;
  }
 }
 cout<<"Want to apply filters according to company(Yes/No)??"<<endl;
 gets(ans);
 if(strcmpi(ans,s1)==0)
 {
  cout<<"Which company do you want??"<<endl;
  cout<<"Press 1 for KIA "<<endl;
  cout<<"Press 2 for Discovery"<<endl;
  cout<<"Press 3 for Ford"<<endl;
  cout<<"Press 4 for Rolls Royce"<<endl;
  cout<<"Press 5 MG Hectar"<<endl;
  cout<<"Press 6 Koeningsen ager"<<endl;
  cout<<"Press 7 Vulcan"<<endl;
  cout<<"Press 8 Range Rover"<<endl;
  cout<<"Press 9 Laferrari"<<endl;
  cin>>ans2;
  if(!(ans2>=1&&ans2<=9))
  {
   ans2=0;
  }
 }
 clrscr();
 textcolor(CYAN);
 cprintf("WE CAN ADD MORE FILTERS BY COLLECTING INFORMATION");cout<<endl;
 cprintf("LIKE ACCORDING TO NO OF SEATS,PREFERENCE FOR FUEL,SUNROOF OPTIONS AND MUCH MORE");
 delay(2000);
}
void car_info()
{
 char p[85];
 ifstream fin;
  switch(ans2)
  {
   case 1: if(ans1==3||ans1==2)
	   {
	    cout<<"We are not having car at present in that range at prersent"<<endl;
	    cout<<"But we assure you that we will collect information about that ASAP :)"<<endl;
	    cout<<"Sorry for inconvenience!!"<<endl;
	    cout<<"You can try these cars of your desired company"<<endl;
	   }
	   fin.open("kia.txt");
	   break;
   case 2: if(ans1==3||ans1==1)
	   {
	    cout<<"Sorry not available at present!!"<<endl;
	    cout<<"But we will see to it and will make it available soon if possible"<<endl;
	    cout<<"You can try these cars of your desired company"<<endl;
	   }
	   fin.open("discover.txt");
	   break;
   case 3: if(ans1==2||ans1==3)
	   {
	    cout<<"Sorry not available at present!!"<<endl;
	    cout<<"But we will see to it and will make it available soon if possible"<<endl;
	    cout<<"You can try these cars of your desired company"<<endl;
	   }
	   fin.open("ford.txt");
	   break;
   case 4: if(ans1==1||ans1==2)
	   {
	    cout<<"Sorry not available at present!!"<<endl;
	    cout<<"But we will see to it and will make it available soon if possible"<<endl;
	    cout<<"You can try these cars of your desired company"<<endl;
	   }
	   fin.open("rolls.txt");
	   break;
   case 5: if(ans1==2||ans1==3)
	   {
	    cout<<"Sorry not available at present!!"<<endl;
	    cout<<"But we will see to it and will make it available soon if possible"<<endl;
	    cout<<"You can try these cars of your desired conmpany"<<endl;
	   }
	   fin.open("MG.txt");
	   break;
   case 6: if(ans1==1||ans1==2)
	   {
	    cout<<"Sorry not available at present!!"<<endl;
	    cout<<"But we will see to it and will make it available soon if possible"<<endl;
	    cout<<"You can try these cars of your desired company"<<endl;
	    }
	   fin.open("koen.txt");
	   break;
   case 7: if(ans1==1||ans1==2)
	   {
	    cout <<"Sorry not available at present!!"<<endl;
	    cout<<"But we will see to it and will make it available soon if possible"<<endl;
	    cout<<"You can try these cars of your desired company"<<endl;
	   }
	   fin.open("vulcan.txt");
	   break;
   case 8: if(ans1==1||ans1==3)
	   {
	    cout<<"Sorry not available this time!!"<<endl;
	    cout<<"But we will see to it and will make it available soon if possible"<<endl;
	    cout<<"You can try thes cars of your desired company"<<endl;
	   }
	   fin.open("Range.txt");
	   break;
   case 9: if(ans1==1||ans1==2)
	   {
	     cout<<"Sorry not available this time!!"<<endl;
	     cout<<"But we will see to it and will make it available soon if possible"<<endl;
	     cout<<"You can try these cars of your desired company"<<endl;
	   }
	    fin.open("Laferr.txt");
  }
	 while(!fin.eof())
	 {
	  fin.getline(p,80);
	  cout<<p;
	  cout<<endl;
	  delay(200);
	 }
	 delay(2000);
	fin.close();
if(ans1==0||ans2==0)
{
 cout<<"Sorry you have not applied the desired filter"<<endl;
 cout<<"Please try again later"<<endl;
 exit(1);
}
 }
void buy_old()
{
 second s;
 ifstream fin;
 fin.open("second.txt");
 while(!fin.eof())
 {
  char a[7],b[7]="yes";
  fin>>s.hname;
  fin>>s.car;
  fin>>s.model;
  fin>>s.dprice;
  fin>>s.contact;
  cout<<"Honor name:            "<<s.hname<<endl;
  cout<<"Name of car:           "<<s.car<<endl;
  cout<<"Year of Manufacturing: "<<s.model<<endl;
  cout<<"Desired Price for sale:"<<s.dprice<<endl;
  cout<<"Are you interested??"<<endl;
  cin>>a;
  if(strcmpi(a,b)==0)
  {
  cout<<"Honor's contact no:"<<s.contact<<endl;
  delay(2000);
  break;
  }
 }
  fin.close();
}
void sell()
{
 ofstream fout;
 second s;
 fout.open("second.txt",ios::app);
 cout<<"Enter your name"<<endl;
 cin>>s.hname;
 cout<<"Enter car's name and company"<<endl;
 cout<<"NOTE:Write like Maruti_Suzuki swift"<<endl;
 cin>>s.car;
 cout<<"Enter Year of manufacturing"<<endl;
 cin>>s.model;
 cout<<"Enter the price you want for it"<<endl;
 cin>>s.dprice;
 cout<<"Enter contact number"<<endl;
 cin>>s.contact;
 fout<<s.hname<<" "<<s.car<<" "<<s.model<<" "<<s.dprice<<" "<<s.contact<<endl;
 cout<<"We have registered your contact with us"<<endl;delay(200);
 cout<<"We will let you know soon if we get a buyer"<<endl;delay(200);
 cout<<"Thanks for trusting us!"<<endl;delay(200);
 fout.close();
}
void main()
{
 char s1[7],s2[7]="new",s3[7]="old";int flag=0,ans;
 user u;second s;
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"c:\\turboc3\\bgi");
 setbkcolor(0);
 cout<<endl;cout<<endl;
int c=12;
	setbkcolor(0);
	int t;
	while(1)
	{
		settextstyle(2,0,5);
		outtextxy(100,10,"Press L,H ,T,P");
		outtextxy(100,30,"Press 1 for Next");
		as:
		setcolor(13);
		ellipse(380,127,20,152,130,35);
		//////////////////////////////rear//////////////////////////
		line(490,109,560,142);
		line(560,142,569,142);
		line(569,142,582,102);
		line(582,102,620,92);
		line(593,132,617,125);
		line(617,124,627,96);
		line(620,92,628,97);
		line(472,86,602,96);
		line(501,113,575,121);
		line(443,77,475,80);
		line(443,77,432,93);
		line(475,80,472,85);
		line(593,132,593,137);
		line(593,137,600,141);
		line(600,141,600,185);
		line(600,185,608,192);
		line(608,192,608,234);
		line(608,234,586,253);
		line(586,253,577,248);

		///     mirror
		line(263,112,363,127);
		line(193,160,263,112);
		line(193,160,220,170);
		line(220,170,280,180);
		line(280,180,320,185);
		line(320,185,363,127);
		
		///////sidemirror
		line(340,194,460,169);
		line(460,169,519,152);
	    ellipse(512,144,300,30,10,10);
		ellipse(467,143,28,100,50,30);
		line(510,128,521,138);
		line(435,116,440,171);

		/////////cont//
		line(339,194,372,144);
		ellipse(454,208,87,123,128,95);
		line(372,144,384,128);
		int b,x,y;
		
		////////////////lower
		line(365,298,524,264);
		line(365,298,330,310);
		line(330,310,323,310);

		/////////////////bumper
		ellipse(162,221,135,190,90,40);
		line(96,193,140,174);
		line(140,174,160,168);
		line(160,168,192,161);

		//////////////////////front
		ellipse(75,246,95,190,18,18);
		line(57,251,57,286);
		ellipse(181,178,232,263,200,137);
		ellipse(195,180,256,286,200,137);
		ellipse(191,171,228,247,200,100);
		ellipse(231,198,234,275,200,80);
		ellipse(196,167,228,246,200,90);
		ellipse(231,184,234,276,200,80);
		ellipse(191,200,228,246,200,90);
		ellipse(228,218,234,276,200,80);
		ellipse(258,268,180,220,200,40);
		ellipse(178,296,244,355,16,10);
		ellipse(238,249,227,250,200,60);

		/////////////wheel1
		ellipse(302,281,320,77,26,45);
		ellipse(290,277,65,162,40,45);
		ellipse(278,288,144,212,31,45);

		/////////////wheel2
		ellipse(302+260,229,328,87,26,45);
		ellipse(290+280-7,277-50+2,90,162,40,45);
		ellipse(278+270,288-50,144,215,27,45);
		 b=0;
		int v=0;

		/////////
		ellipse(302+250+v,227+b,295,90,29,41);
		ellipse(302+234+v,231+b,245,306,50,40);
		ellipse(302+248+v,229+b,0,360,21,30);
		ellipse(302+247+v,229+b,0,360,8,10);
		setfillstyle(6,11);
		line(546+v,201+b,546+v,220+b);
		line(551+v,201+b-2,551+v,220+b);
		line(546+v,238+b,546+v,257+b);
		line(551+v,238+b+2,551+v,257+b+2);
		line(530+v,225+b,541+v,225+b);
		line(530+v,230+b,541+v,230);
		line(557+v,225+b,570+v,225+b);
		line(557+v,230+b,570+v,230+b);
		line(563+v,206+b,552+v,222+b);
		line(534+v,246+b,543+v,232+b);
		line(566+v,210+b,556+v,223+b);
		line(536+v,250+b,544+v,238+b);
		line(536+v,207+b,546+v,222+b);
		line(532+v,213+b,542+v,224+b);
		line(556+v,235+b,566+v,247+b);
		line(551+v,237+b,563+v,253+b);

		////////////////////////
		v=-260;
		b=56;
		ellipse(302+233+v,221+b,260,60,49,51);
		ellipse(302+243+v,224+b,0,360,28,35);
		ellipse(300+245+v,223+b,0,360,10,12);
		ellipse(285+249+v,239+b,210,260,30,33);
		b=45;
		v=v-4;
		line(546+v,201+b,546+v,220+b+2);
		line(551+v,201+b,551+v,220+b+2);
		b=b+8;
		line(546+v,238+b,546+v,257+b+4);
		line(551+v,238+b,551+v,257+b+4);
		v=v-2;
		line(530+v-6,225+b,541+v,225+b);
		line(530+v-6,230+b,541+v,230+b);
		v=v+5;
		line(557+v,225+b,570+v+3,225+b);
		line(557+v-1,230+b,570+v+3,230+b);
		b=b-5;
		v=v-5;
		line(565+v+3,206+b,552+v+4,222+b-2);
		b=b+15;
		line(534+v,246+b,543+v+3,232+b-5);
		b=b-10;
		line(566+v+7,210+b-5,556+v+4,220+b);
		line(536+v-5,250+b,544+v-2,238+b-4);
		line(536+v,207+b-8,545+v,222+b-5);
		line(531+v,212+b-8,542+v,224+b-2);
		line(556+v,235+b,566+v+3,247+b+5);
		line(551+v,237+b,563+v+2,253+b+3);

		///////////////lights
		ellipse(199,250,144,345,18,8);
		line(185,245,206,230);
		ellipse(223,234,340,110,8,5);
		line(230,237,217,252);
		line(206,230,220,229);

		/////////////////////////////
		line(90,223,152,236);
		line(152,236,137,254);
		line(90,223,90,242);

		ellipse(240,270,104,136,100,60);
		ellipse(185,237,120,160,100,60);
		ellipse(80,221,357,134,10,10);

		line(152,236,168,228);
		/////////////////////////////
		line(435,116,440,171);
		///////////////////////////hp
		line(134,185,196,160);
		line(214,212,318,185);
		////////////////light

		ellipse(166,247,99,330,8,8);
		ellipse(171,243,310,129,7,7);
		putpixel(174,250,13);
		putpixel(173,251,13);
		putpixel(164,239,13);
		putpixel(165,238,13);

		////////road/////////////////////
		setcolor(13);
		line(1,430,639,300);
		line(1,445,639,315);

		line(1,210,93,194);
		line(1,195,194,158);

		line(520,90,639,71);
		line(478,86,639,56);

		int c=0;

		line(10,194+c,10,208+c);
		line(40,189+c,40,204+c);
		line(70,183+c,70,198+c);
		line(100,176+c,100,190+c);
		line(130,170+c,130,177+c);
		line(160,166+c,160,168+c);
		line(190,160+c,190,161+c);

		line(190+330,78+c,190+330,89+c);

line(190+360,72+c,190+360,85+c);
line(190+390,67+c,190+390,81+c);
line(190+420,62+c,190+420,76+c);
line(190+449,57+c,190+449,71+c);



   c=236;

line(10,192+c,10,208+c);
line(40,189+c-2,40,204+c-3);
line(70,183+c-3,70,198+c-3);
line(100,176+c-2,100,190+c-2);
line(130,170+c-2,130,177+c+5);
line(160,166+c-3,160,168+c+8);
line(190,160+c-4,190,161+c+9);

line(190+30,156+c-5,190+30,170+c-5);


line(190+30+30,156+c-12,190+30+30,170+c-12);

line(190+90,156+c-18,190+90,170+c-17);

line(190+120,156+c-25,190+120,170+c-25);

line(190+150,156+c-30,190+150,170+c-30);

line(190+180,156+c-37,190+180,170+c-36);


line(190+210,156+c-42,190+210,170+c-42);


line(190+240,156+c-48,190+240,170+c-48);


line(190+270,156+c-55,190+270,170+c-54);


line(190+300,156+c-61,190+300,170+c-61);



 line(190+330,78+c+10,190+330,89+c+13);

line(190+360,72+c+11,190+360,85+c+13);
line(190+390,67+c+10,190+390,81+c+10);
line(190+420,62+c+8,190+420,76+c+10);
line(190+449,57+c+8,190+449,71+c+8);




/////////////////road

setcolor(12);          /////////////////////////////1

line(1,310,25,306);
line(6,318,30,315);
line(1,310,6,318);
line(25,306,30,314);
int k,m;
k=13*45+19;
m=16*(-8);
							//2
setcolor(12);

line(605,310-128,629,306-128);
line(610,318-128,634,315-128);
line(605,310-128,610,318-128);
line(629,306-128,634,314-128);

setcolor(12);    //////////////////////////////////3
k=45;
m=-8;
line(46,302,70,298);
line(51,310,75,307);
line(46,302,51,310);
line(70,298,75,306);


setfillstyle(1,0);
floodfill(64,303,12);

setfillstyle(1,14);
floodfill(14,314,12);
floodfill(617,183,12);

setfillstyle(1,0);
floodfill(14,314,12);
floodfill(617,183,12);

setfillstyle(1,14);
floodfill(64,303,12);

t=getch();
if(t=='1')
break;
if(t=='h')
{
sound(710);
delay(500);
nosound();
//break;
}
if(t=='t')
{
while(!kbhit())  {
setfillstyle(1,0);
floodfill(536,213,13);
floodfill(563,213,13);
floodfill(561,244,13);
floodfill(538,244,13);
floodfill(274,295,13);
floodfill(294,295,13);
floodfill(274,265,13);
floodfill(294,265,13);
floodfill(548,250,13);
floodfill(548,214,13);
floodfill(533,228,13);
floodfill(563,228,13);
floodfill(262,281,13);
floodfill(308,281,13);
floodfill(284,251,13);
floodfill(284,295,13);

setfillstyle(1,random(12));

floodfill(200,250,13);
delay(10);
//setfillstyle(1,11);

 floodfill(170,250,13);
 floodfill(80,230,13);


 }

setfillstyle(1,0);

floodfill(200,250,13);
delay(10);
//setfillstyle(1,11);

 floodfill(170,250,13);
 floodfill(80,230,13);

	}


if(t=='l')
{
while(!kbhit())
{

delay(120);
setfillstyle(6,0);         //////////////////////////ty
floodfill(536,213,13);
floodfill(563,213,13);
floodfill(561,244,13);
floodfill(538,244,13);
floodfill(274,295,13);
floodfill(294,295,13);
floodfill(274,265,13);
floodfill(294,265,13);

setfillstyle(1,0);
floodfill(64,303,12);

/////////////// road

setfillstyle(9,0);       /////////////////////color
floodfill(81-40+5,419+7,13);
floodfill(151-40,409+7,13);
floodfill(211-40,397+7,13);
floodfill(271-40,380+7,13);
floodfill(331-40,368+7,13);
floodfill(396-40,355+7,13);
floodfill(450-40,345+7,13);
floodfill(510-40,335+7,13);
floodfill(570-40,325+7,13);
floodfill(630-40,312+7,13);
//////////////////////
floodfill(50,197,13);
floodfill(110,177,13);
floodfill(166,165,13);
floodfill(527,86,13);
floodfill(587,71,13);
setfillstyle(6,14); //////////////////////////ty
floodfill(548,250,13);
floodfill(548,214,13);
floodfill(533,228,13);
floodfill(563,228,13);
floodfill(262,281,13);
floodfill(308,281,13);
floodfill(284,251,13);
floodfill(284,295,13);
////////////////////////////////////////road

setfillstyle(9,10);///////////////////////////////////color
floodfill(19,429,13);
floodfill(81,419,13);
floodfill(151,409,13);
floodfill(211,397,13);
floodfill(271,380,13);
floodfill(331,368,13);
floodfill(396,355,13);
floodfill(450,345,13);
floodfill(510,335,13);
floodfill(570,325,13);
floodfill(630,312,13);
//////////////////////////////////////
floodfill(20,197,13);
floodfill(80,187,13);
floodfill(133,174,13);
floodfill(517,86,13);
floodfill(557,81,13);
floodfill(627,70,13);

setfillstyle(1,14);
floodfill(14,314,12);
floodfill(617,183,12);

///////////////////////////////////////
setfillstyle(10,4);
floodfill(302+248,230,13);
floodfill(302+248+v,230+b,13);
///light
setfillstyle(6,11);                             ///////////

floodfill(200,250,13);

floodfill(170,250,13);
 floodfill(80,230,13);

delay(120);

setfillstyle(6,0);/////////////////////ty
floodfill(548,250,13);
floodfill(548,214,13);
floodfill(533,228,13);
floodfill(563,228,13);
floodfill(262,281,13);
floodfill(308,281,13);
floodfill(284,251,13);
floodfill(284,295,13);
/////////////////////////////////////road
setfillstyle(9,0);      ///////////////color

floodfill(19,429,13);
floodfill(81,419,13);
floodfill(151,409,13);
floodfill(211,397,13);
floodfill(271,380,13);
floodfill(331,368,13);
floodfill(396,355,13);
floodfill(450,345,13);
floodfill(510,335,13);
floodfill(570,325,13);
floodfill(630,312,13);
///////////////////////////////////////////////////////
floodfill(20,197,13);
floodfill(80,187,13);
floodfill(133,174,13);
floodfill(517,86,13);
floodfill(557,81,13);
floodfill(627,70,13);
/////////////////////////////
setfillstyle(1,0);
floodfill(14,314,12);
floodfill(617,183,12);

setfillstyle(6,10);            /////////////ty

floodfill(536,213,13);
floodfill(563,213,13);
floodfill(561,244,13);
floodfill(538,244,13);
floodfill(274,295,13);
floodfill(294,295,13);
floodfill(274,265,13);
floodfill(294,265,13);
////////////////////////////////////////////////road
setfillstyle(9,14);/////////////////////////////////////////color
floodfill(81-40+5,419+7,13);
floodfill(151-40,409+7,13);
floodfill(211-40,397+7,13);
floodfill(271-40,380+7,13);
floodfill(331-40,368+7,13);
floodfill(396-40,355+7,13);
floodfill(450-40,345+7,13);
floodfill(510-40,335+7,13);
floodfill(570-40,325+7,13);
floodfill(630-40,312+7,13);
/////////////////////////////////////////

floodfill(50,197,13);
floodfill(110,177,13);
floodfill(166,165,13);
floodfill(527,86,13);
floodfill(587,71,13);
setfillstyle(1,14);
floodfill(64,303,12);

setfillstyle(9,4);
floodfill(302+248,230,13);
floodfill(302+248+v,230+b,13);

delay(20);
setfillstyle(1,14);

floodfill(200,250,13);

floodfill(170,250,13);
 floodfill(80,230,13);

 delay(20);
setfillstyle(1,0);

floodfill(200,250,13);

floodfill(170,250,13);
 floodfill(80,230,13);




}          }
if(t=='p')
{
int n=0;
while(!kbhit())
{
if(n<=60)
n++;
setcolor(0);
rectangle(1+1,-10,90-1,-12+n);
delay(14);

setcolor(9);
rectangle(1,-10,90,-10+n);
if(n==60)
{

outtextxy(10,10,"L-LIGHTS");
outtextxy(10,20,"H-HORN");
//outtextxy(10,30,"T-AllOY");
 delay(400);
 }
}
setcolor(0);
rectangle(1,-10,90,-10+n);
rectangle(1,-10,90,-11+n);
outtextxy(10,10,"L-LIGHTS");
outtextxy(10,20,"H-HORN");
//outtextxy(10,30,"T-AllOY");

}

}
 circle(300,100,3);
 cleardevice();
 getbkcolor();
 setcolor(14);
 settextstyle(4,0,3);
 sound(350);delay(400);sound(120);delay(200);nosound();
 outtext("---:WELCOME TO ABC:THE WORLD OF CARS:--");
 cout<<endl;
 cout<<"        YOUR HELP OUR MOTO,YOUR HAPPINESS OUR ACHIEVEMENT:) \n"<<endl;
 delay(1000);cout<<endl;
 cout<<" YOU ARE CURRENTLY USING THE BEST RATED APPLICATION FOR FINDING"<<endl;
 delay(1000);
 cout<<" CARS FOR BUYING NEW OR SECOND HAND CAR AND FOR RESELLING OLD CAR"<<endl;
 delay(1000);cout<<endl;
 cout<<" WANT SOME CHANGE IN LIFE IN TERMS OF THE CAR YOU ARE USING??"<<endl;
 delay(1000);cout<<endl;
 cout<<" WANT TO BUY A NEW CAR THAT FITS YOUR CHOICES??\n";
 delay(1000);cout<<endl;
 cout<<" WANT TO BUY SECOND HAND CAR ACCORDING TO YOUR BUDGET AND YOUR NEEDS??"<<endl;
 delay(1000);cout<<endl;
 cout<<" WANT TO SELL A CAR??"<<endl;
 delay(1000);cout<<endl;
 closegraph();
 clrscr();
 cout<<" ARE YOU NEW TO THIS APPLICATION OR A EXISTING USER"<<endl;
 textcolor(RED);
 do{
 cprintf(" NOTE: TYPE new fOR NEW USER AND old fOR EXISTING USER \n");
 cout<<endl;
 gets(s1);
 if(strcmpi(s1,s2)==0)
 {
  cout<<"OK So lets make your account :)"<<endl;
  flag=1;
  }
 else if(strcmpi(s1,s3)==0)
 {
  cout<<" Welcome back! Good to see you again:)"<<endl;
  flag=2;
 }
 else
 cout<<" Oops Invalid entry!! try again :)"<<endl;
 }while((strcmpi(s1,s2)!=0)&&(strcmpi(s1,s3)!=0));
 if(flag==1)
 {
   u.fresh();
 }
 if(flag==2)
 {
  int flag1=0;
  char nme[20],pwd[30];
  ifstream fin;
  fin.open("User.txt");
  cout<<"Enter name"<<endl;
  cin>>nme;
  cout<<"Enter Password"<<endl;
  cin>>pwd;
  while(!fin.eof())
  {
   fin>>u.name;
   fin>>u.email_id;
   fin>>u.pass;
   if((strcmpi(u.name,nme)==0)&&(strcmpi(u.pass,pwd)==0))
   {
    cout<<"found"<<endl;
    flag1=1;
    break;
   }
  }
  fin.close();
  if(flag1==0)
  {
   cout<<"Not Found"<<endl;
   cout<<"What happened??"<<endl;
   cout<<"Kindly register as new user"<<endl;
   u.fresh();
   }
 clrscr();
 textcolor(MAGENTA);
 do{
 cprintf("Press 1 if you want to buy new car,Press 2 if you want to sell your old car and Press 3 if you want to buy a second hand car");
 cout<<endl;
 cin>>ans;
 switch(ans)
 {
  case 1:buy_new();
	 clrscr();
	 car_info();
	 clrscr();
	 break;
  case 2:sell();break;
  case 3:buy_old();
	 clrscr();
	 break;
  default:cout<<"Invalid Entry"<<endl;
 }
 }while(ans!=1&&ans!=2&&ans!=3);
 cout<<"Your remarks are important for us to improve"<<endl;
 cout<<"Want to give us feedback or points on which we require to work on??"<<endl;
 cout<<"Yes/No"<<endl;
 char k[7];
  cin>>k;
 char n[7]="yes";
 if(strcmpi(k,n)==0)
 {
  ofstream fout;
  char s1[80];
  fout.open("remark.txt",ios::app);
  cout<<"Enter your feedback please:)"<<endl;
  gets(s1);
  fout<<s1;
  fout.close();
 }
 sound(100);
 cout<<"Thankyou so much for being with us!"<<endl;
 delay(400);
 nosound();
 cout<<"Have a nice day:) !!"<<endl;
 getch();
}
}