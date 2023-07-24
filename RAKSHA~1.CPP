//.......... WELCOME ALL OF YOU ON ROHIT TECH STUDY CHANNEL ...............//
/*___________ C++ PROGRAM TO WISHES HAPPY RAKSHA BANDHAN _________________*/

#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
	int gd=DETECT, gm;
	initgraph(&gd,&gm,"c://tc//bgi");
	{
	for(int i=0;i<30;i++)
	{
	// FRAME
		setcolor(i);
		rectangle(10,55,630,420);
		setcolor(15);
		rectangle(5,50,635,425);
		rectangle(20,65,620,410);

		setcolor(i);
		line(10,55,20,65);
		line(10,420,20,410);
		line(630,55,620,65);
		line(630,420,620,410);
	      // DESIGN
		setcolor(i);
		circle(40,85,15);
		circle(40,85,10);
		circle(40,85,5);
		circle(40,85,1);

		circle(600,85,15);
		circle(600,85,10);
		circle(600,85,5);
		circle(600,85,1);

		circle(40,390,15);
		circle(40,390,10);
		circle(40,390,5);
		circle(40,390,1);

		circle(600,390,15);
		circle(600,390,10);
		circle(600,390,5);
		circle(600,390,1);

	  // RAKHI
		setcolor(14);
		arc(320,325,60,120,195);
		arc(140,7,250,300,170);
		arc(498,7,240,290,170);

		line(81,166,68,200);
		line(81,166,73,200);
		line(81,166,79,200);

		line(556,167,561,200);
		line(556,167,566,200);
		line(556,167,571,200);

		setcolor(13);
		circle(320,130,40);
		circle(320,130,35);
		circle(320,130,24);
		circle(320,130,19);

		setcolor(10);
		circle(290,132,5);
		circle(292,120,5);
		circle(298,110,5);
		circle(308,103,5);
		circle(320,100,5);

		circle(332,103,5);
		circle(340,111,5);
		circle(347,121,5);
		circle(350,132,5);
		circle(293,142,5);

		circle(300,151,5);
		circle(310,157,5);
		circle(320,160,5);
		circle(330,157,5);
		circle(340,152,5);
		circle(346,142,5);

		setcolor(9);
		circle(240,147,7);
		circle(240,147,4);

		setcolor(11);
		circle(256,140,7);
		circle(256,140,4);

		setcolor(13);
		circle(272,135,7);
		circle(272,135,4);

		circle(367,135,7);
		circle(367,135,4);

		setcolor(11);
		circle(383,140,7);
		circle(383,140,4);

		setcolor(9);
		circle(399,147,7);
		circle(399,147,4);

		setcolor(i);
		circle(307,130,5);
		circle(312,121,5);
		circle(320,117,5);
		circle(329,120,5);
		circle(332,130,5);
		circle(312,139,5);
		circle(320,143,5);
		circle(327,140,5);

		setcolor(15);
		circle(320,130,7);
		circle(320,130,4);
		circle(320,130,1);

		// BROTHER
		setcolor(14);
		circle(85,250,18);
		line(85,267,85,320);

		line(85,320,65,370);
		line(85,320,105,370);

		line(85,280,50,330);
		line(85,280,110,300);
		line(110,300,130,295);

		//SISTER
		setcolor(11);
		circle(540,250,18);

		line(540,267,510,320);
		line(540,267,570,320);
		line(510,320,570,320);

		line(535,320,520,370);
		line(545,320,565,370);

		line(540,267,490,310);
		line(540,267,580,310);

		//TEXT
		setcolor(i+1);
		settextstyle(1,0,5);
		outtextxy(255,170,"HAPPY");

		settextstyle(1,0,5);
		outtextxy(245,215,"RAKSHA");

		settextstyle(1,0,5);
		outtextxy(230,255,"BANDHAN");

		setcolor(11);
		settextstyle(1,0,3);
		outtextxy(220,315,"11 AUGUST 2022");

		settextstyle(1,0,1);
		outtextxy(60,385,"ALWAYS BE HAPPY !");

		setcolor(10);
		settextstyle(11,0,1);
		outtextxy(350,400,"WISHES FROM:- ROHIT TECH STUDY");

		setcolor(i);
		settextstyle(5,0,3);
		outtextxy(50,100,"HAPPY RAKHI");
		delay(300);
		}

	}
	getch();
}


//_________________ I HOPE YOU LIKE THIS PROGRAMMING _____________________

//----------- LIKE ----------- SHARE ---------- SUBSCRIBE ----------------


























