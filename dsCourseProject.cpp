#include<iostream>
#include<stdio.h>
#include<simplecpp>
#include<process.h>
#include<graphics.h>
#include<conio.h>
#define max 100
void dijkstra(int G[max][max], int n, int startnode, int dest);
int source();
int destination();
void  SecondaryFriendList(int graph[20][20]  );

main_program
{
    //MAP

    initwindow(1500, 800);

	bar(0,0,1499,799);

	setcolor(LIGHTGRAY);
    setfillstyle(SOLID_FILL, LIGHTGRAY);
	rectangle (270,0,320,50);//nescafe
    floodfill(300,30,LIGHTGRAY);

	setcolor(LIGHTGRAY);
    setfillstyle(SOLID_FILL, LIGHTGRAY);
	rectangle (330,60,430,120); //FC
    floodfill(400,100,LIGHTGRAY);

    setcolor(GREEN);
    setfillstyle(SOLID_FILL, GREEN);
	rectangle (200,200,430,470); //lawn
	floodfill(370,370,GREEN);

    setcolor(YELLOW);
    setfillstyle(SOLID_FILL, YELLOW);
	circle (370,430,30);                //BC
	floodfill(370,430,YELLOW);

	setcolor(LIGHTGRAY);
    setfillstyle(SOLID_FILL, LIGHTGRAY);
	rectangle (1150,200,1280,400);    //canteen
    floodfill(1200,300,LIGHTGRAY);

    setcolor(LIGHTGRAY);
    setfillstyle(SOLID_FILL, LIGHTGRAY);
	rectangle (950,450,1020,520); //cc
    floodfill(1000,500,LIGHTGRAY);

	setcolor(LIGHTGRAY);
    setfillstyle(SOLID_FILL, LIGHTGRAY);
	rectangle (1060,450,1130,520);    //npb
    floodfill(1100,500,LIGHTGRAY);

	setcolor(CYAN);
    setfillstyle(SOLID_FILL, CYAN);
	rectangle(10,120,180,630);    //1st bulding
	floodfill(100,200,CYAN);

	setcolor(CYAN);
    setfillstyle(SOLID_FILL, CYAN);
	rectangle(180,120,260,180);   //sharad arena
	floodfill(200,160,CYAN);

	setcolor(CYAN);
    setfillstyle(SOLID_FILL, CYAN);
	rectangle(180,500,450,630);  //1st building admin
    floodfill(200,600,CYAN);

    setcolor(LIGHTGREEN);
    setfillstyle(SOLID_FILL, LIGHTGREEN);
	rectangle (505,280,1100,410); //ground
	floodfill(700,300,LIGHTGREEN);

    setcolor(LIGHTGREEN);
    setfillstyle(SOLID_FILL, LIGHTGREEN);
	rectangle (700,180,1100,280); //groundextra
    floodfill(900,200,LIGHTGREEN);

    setcolor(BLACK);
    setcolor(CYAN);
    setfillstyle(SOLID_FILL, CYAN);
	rectangle (505,0,1100,160); //mech building
	floodfill(700,100,CYAN);

	 setcolor(CYAN);
    setfillstyle(SOLID_FILL, CYAN);
	rectangle (505,160,680,250);//mechextra
	floodfill(600,180,CYAN);

	 setcolor(CYAN);
    setfillstyle(SOLID_FILL, CYAN);
	rectangle (500,450,850,570); //instru building
	floodfill(600,500,CYAN);

	 setcolor(CYAN);
    setfillstyle(SOLID_FILL, CYAN);
	rectangle (750,570,850,640); //instruextra
    floodfill(800,600,CYAN);

	setcolor(CYAN);
	line (180,120,180,180); //sharad arena
	line (180,500,180,630);//1st

	setcolor(LIGHTGREEN);
	line (700,280,1100,280);//ground

	setcolor(CYAN);
	line (505,160,680,160);//mechextra
	line (750,570,850,570);//instru extra



     //to display text

     setcolor(WHITE);
    settextstyle(3,0,1);
    outtextxy(520,650,"IN/OUT");
    //settextstyle(3,0,1);
    //outtextxy(670,650,"OUT");

    //minus 2
    settextstyle(3,0,1);
    outtextxy(10,650,"IN/OUT");

    //settextstyle(3,0,1);
    //outtextxy(55,650,"OUT");

    settextstyle(3,0,1);
    outtextxy(265,25,"Nescafe");
    settextstyle(3,0,1);
    outtextxy(980,470,"CC");
    settextstyle(3,0,1);
    outtextxy(1080,470,"NPB");
    settextstyle(3,0,1);
    outtextxy(1180,270,"Canteen");
    settextstyle(3,0,1);
    outtextxy(340,80,"Fruit Center");
    settextstyle(3,0,1);
    outtextxy(300,310,"Lawn");
    settextstyle(3,0,1);
    outtextxy(800,300,"Ground");
    settextstyle(3,0,1);
    outtextxy(180,140,"Sharad Arena");
	setcolor(WHITE);
    settextstyle(3,0,3);
    outtextxy(75,440,"1");
    settextstyle(3,0,3);
    outtextxy(695,70,"2");
    settextstyle(3,0,3);
    outtextxy(945,70,"3");
    settextstyle(3,0,3);
    outtextxy(645,490,"4");

    settextstyle(3,0,1);
    outtextxy(500,90,"Workshop");
    settextstyle(3,0,1);
    outtextxy(800,130,"Library");
    settextstyle(3,0,1);
    outtextxy(610,200,"Reading");
    settextstyle(3,0,1);
    outtextxy(630,220,"hall");
    settextstyle(3,0,1);
    outtextxy(353,410,"Boat");
    settextstyle(3,0,1);
    outtextxy(355,430,"Club");

    //NODES

    setcolor(BLACK);
    setfillstyle(SOLID_FILL, BLACK);
	circle (480,640,3);                //A
	floodfill(480,640,BLACK);

    setfillstyle(SOLID_FILL, BLACK);
	circle (480,530,3);                //B
	floodfill(480,530,BLACK);

	setfillstyle(SOLID_FILL, BLACK);
	circle (690,585,3);                //C
	floodfill(690,585,BLACK);

    setfillstyle(SOLID_FILL, BLACK);
	circle (480,430,3);                //D
	floodfill(480,430,BLACK);

    setfillstyle(SOLID_FILL, BLACK);
	circle (690,430,3);                //E
	floodfill(690,430,BLACK);

    setfillstyle(SOLID_FILL, BLACK);
	circle (1130,430,3);                //F
	floodfill(1130,430,BLACK);

    setfillstyle(SOLID_FILL, BLACK);
	circle (1130,250,3);                //G
	floodfill(1130,250,BLACK);

    setfillstyle(SOLID_FILL, BLACK);
	circle (1130,170,3);                //H
	floodfill(1130,170,BLACK);

	setfillstyle(SOLID_FILL, BLACK);
	circle (950,170,3);                //I
	floodfill(950,170,BLACK);

	setfillstyle(SOLID_FILL, BLACK);
	circle (690,270,3);                //J
	floodfill(690,270,BLACK);

	setfillstyle(SOLID_FILL, BLACK);
	circle (480,270,3);                //K
	floodfill(480,270,BLACK);

    setfillstyle(SOLID_FILL, BLACK);
	circle (480,100,3);                //L
	floodfill(480,100,BLACK);

	setfillstyle(SOLID_FILL, BLACK);
	circle (300,160,3);                //M
	floodfill(300,160,BLACK);

	setfillstyle(SOLID_FILL, BLACK);
	circle (300,70,3);                //N
	floodfill(300,70,BLACK);

	setfillstyle(SOLID_FILL, BLACK);
	circle (300,340,3);                //O
	floodfill(300,340,BLACK);

    setfillstyle(SOLID_FILL, BLACK);
	circle (200,485,3);                //P
	floodfill(200,485,BLACK);

    setfillstyle(SOLID_FILL, BLACK);
	circle (40,640,3);                //Q
	floodfill(40,640,BLACK);







    //setcolor(BLACK);
	setfillstyle(SOLID_FILL, BLUE);
	circle (20,340,15);
	//floodfill(20,340,RED);


     setcolor(WHITE);
    settextstyle(3,0,1);
    outtextxy(20 - 5,340 -5,"a");

    //setcolor(YELLOW);
	setfillstyle(SOLID_FILL, YELLOW);
	circle (45,345,15);
	floodfill(45,345,WHITE);


     setcolor(WHITE);
    //settextstyle(3,0,1);
    outtextxy(45 - 5,345 -5,"b");


    //setcolor(RED);
	setfillstyle(SOLID_FILL, RED);
	circle (50,355,15);
	floodfill(50,355,WHITE);


     setcolor(WHITE);
    //settextstyle(3,0,1);
    outtextxy(50 - 5,355 -5,"c");




    setcolor(LIGHTMAGENTA);
    setfillstyle(SOLID_FILL, LIGHTMAGENTA);
	rectangle (1000,600,1400,800); //Exit Program
	floodfill(1200,700,LIGHTMAGENTA);

    setcolor(BLACK);
    line (1200,600,1200,800);

    setcolor(WHITE);
    settextstyle(3,0,1);
    outtextxy(1050,650,"RESET MAP");
    settextstyle(3,0,1);
    outtextxy(1250,650,"EXIT");

    //Code for  Points of social Network

                   //0,1,2,3,4,5,6,7,8,9,0,1,2,3,4,5,6,7,8,9
int graph[20][20] ={{0,0,0,1,0,1,0,0,1,0,0,0,0,1,1,0,0,1,0,0},
                    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},//1
                    {0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0},//2
                    {1,0,1,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,0,0},//3
                    {0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0},//4
                    {1,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0},//5
                    {0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},//6
                    {0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0},//7
                    {1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0},//8
                    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},//9
                    {0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0},//0
                    {0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},//1
                    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},//2
                    {1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},//3
                    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},//4
                    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},//5
                    {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},//6
                    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},//7
                    {0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0},//8
                    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},};//9


            //SecondaryFriendList(graph);



    //MAINCODE

    int G[max][max],i,j,n=17,s,d;
for(i=0; i< 18; i++)
{
    for(j=0; j<18; j++)
    {
    G[i][j]==0;
    }
}

G [0][1]= G[1][0]= 1;
G [0][2]= G[2][0]= 2;
G [1][3]= G[3][1]= 1;
G [3][4]= G[4][3]= 2;
G [3][10]= G[10][3]= 3;
G [3][14]= G[14][3]= 3;
G [3][15]= G[15][3]= 4;
G [4][5]= G[5][4]= 4;
G [5][6]= G[6][5]= 3;
G [6][7]= G[7][6]= 1;
G [7][8]= G[8][7]= 1;
G [8][9]= G[9][8]= 1;
G [9][10]= G[10][9]= 3;
G [10][11]= G[11][10]= 1;
G [10][12]= G[12][10]= 2;
G [12][14]= G[14][12]= 2;
G [12][13]= G[13][12]= 1;
G [10][14]= G[14][10]= 2;
G [14][15]= G[15][14]= 2;
G [12][15]= G[15][12]= 4;
G [15][16]= G[16][15]= 2;

    int choice =0;
    int friendNumber;
    char UserList[] ="A-1 B-2 C-3 D-4 E-5 F-6 G-7 H-8 I-9 J-10 K-11 L-12 M-13 N-14 O-15 P-16 Q-17 R-18 S-19  ";
    while(choice !=4){
    printf("\n\n\t\t\t\tTHE SOCIOMAP\t\t\t\t\n\n\n");
    printf("\t1.Find Smallest Path Between Two Points:\n");
    printf("\t2.Send A Friend Request:\n");
    printf("\t3.Show People on MAP:\n");
    printf("\t4.exit:\n");

    printf("\t\t ENTER CHOICE:");

  scanf("%d",&choice);
  //int friend;
  switch(choice){

    case 1:

   // while(true)
    //{
    cout<<"\n\nClick on source"<<endl;
    s= source();
    cout<<"Source is "<<s<<endl;

    if(s==17)
    continue;
    if(s==18)
    break;

    cout<<"Click on destination."<<endl;
    d= destination();
    cout<<"Destination is "<<d<<endl;
    if(s==17)
    continue;
    if(s==18)
    break;

    dijkstra(G,n,s,d);
    //int a=SecondaryFriendList(graph);

    //}
    break;

    case 2:


    printf("\n\t\tUsers Id\n");
    printf("\t");
    printf("%s",UserList);

    printf("\n\n\t\tThe id of friend request to send:");

    scanf("%d",&friendNumber);
    printf("\n\t Friend Request is sent and Accepted\t\n");
    graph[0][friendNumber ] = graph[friendNumber][0] = 1;
    break;

    case 3:

    SecondaryFriendList(graph);
    break;

    default:
    printf("\nInvalid number \n");
    break;

    }

    }
    closegraph();
    getch();

}//main

void dijkstra(int G[max][max], int n, int startnode, int dest)
{
    int x[17]={480,480,690,480,690,1130,1130,1130,950,690,480,480,300,300,300,200,40};
    int y[17]={640,530,585,430,430,430,250,170,170,270,270,100,160,70,340,485,640};

    int cost[max][max],distance[max],prev[max];
    int visited[max], count, mindistance, nextnode, i ,j;
    //prev[] stores the previous of each node
    //count gives the number of nodes seen so far

    //create cost matrix
    for (i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(G[i][j]==0)
            cost[i][j]=100;
            else
            cost[i][j]=G[i][j];
        }
    }
    //initialize prev, distance and visited
    for(i=0; i<n; i++)
    {
        distance[i]= cost[startnode][i];
        prev[i]=startnode;
        visited[i]=0;
    }
    distance[startnode]=0;
    visited[startnode]=1;
    count=1;
    while(count<=n-1)
    {
        mindistance=100;
        //nextnode gives the node at minimum distance
        for(i=0; i<n; i++)
        {
            if(distance[i]< mindistance && !visited[i])
            {
                mindistance=distance[i];
                nextnode=i;
            }
        }
    //chec if a better path exists through nextnode
    visited[nextnode]=1;
    for(i=0; i<n; i++)
    {
        if(!visited[i])
        {
            if(mindistance+cost[nextnode][i] < distance[i])
            {
                distance[i] = mindistance + cost[nextnode][i];
                prev[i] = nextnode;
            }
        }
    }
    count++;

    }

    //print the path and distance of each node

    if(dest!=startnode)
        {
        j=dest;
        cout<<"distance of node "<<j<<" is "<<distance[j]<<endl;
        cout<<"PATH: "<<j;

        do
        {
        setcolor(BLACK);
        setlinestyle(0,0,2);
        line ( x[j], y[j], x[prev[j]], y[prev[j]]);
        j=prev[j];
        cout<<"<-- "<<j;
        }while(j!=startnode);
    }


}//dijkstra


//to get source node
int source()
{
int s;
int w= getClick();
int x= w/65536;
int y= w%65536;

setfillstyle(SOLID_FILL, BLACK);
	circle (x,y,10);

// O LAWN
if (x>=200 && y>=200 && x<=430 && y<=470)
    s=14;
// D boatclub
if (x>=350 && y>=410 && x<=390 && y<=450)
    s=3;
//A ingate
if (x>=500 && y>=630 && x<=540 && y<=670)
    s=0;
//L fruit center workshop
if ( (x>=330 && y>=60 && x<=430 && y<=120) || ( x>=505 && y>=0 && x<=545 && y<=250))
    s=11;
//M Sharad Arena
if (x>=180 && y>=120 && x<=260 && y<=180)
    s=12;
//N nescafe
if (x>=270 && y>=0 && x<=320 && y<=50)
    s=13;
// P first building
if (x>=10 && y>=120 && x<=180 && y<=630)
    s=15;
//B first building admin
if (x>=180 && y>=500 && x<=450 && y<=630)
    s=1;
//J mech building
if ((x>545 && y>=0 && x<=680 && y<=250) || (x>680 && y>=0 && x<=800 && y<=160))
    s=9;
//I indus prod
if (x>800 && y>=0 && x<=1100 && y<=160)
    s=8;
//G canteen
if (x>=1150 && y>=200 && x<=1280 && y<=400)
    s=6;
//F npb cc
if (x>=950 && y>=450 && x<=1130 && y<=520)
    s=5;
//E instru
if (x>=500 && y>=450 && x<=850 && y<=510)
    s=4;
//C instru extra
if ( (x>=500 && y>=510 && x<=850 && y<=570) || (x>=750 && y>=570 && x<=850 && y<=640))
    s=2;
//G ground
if  (x>=700 && y>=180 && x<=1100 && y<=410)
    s=6;
//K ground
if  (x>=505 && y>=280 && x<=600 && y<=410)
    s=10;
//J ground
if  (x>=600 && y>=280 && x<=700 && y<=410)
    s=9;
//Q -2 gate
if  (x>=10 && y>=650 && x<=30 && y<=670)
    s=16;
if  (x>=1000 && y>=600 && x<1200 && y<=800)
    s=17;
if  (x>=1200 && y>=600 && x<1400 && y<=800)
    s=18;
return s;
}//source




int destination()
{
int d;
int w= getClick();
int x= w/65536;
int y= w%65536;

setfillstyle(SOLID_FILL, BLACK);
	circle (x,y,10);

//O LAWN
if (x>=200 && y>=200 && x<=430 && y<=470)
    d=14;
//D boatclub
if (x>=350 && y>=410 && x<=390 && y<=450)
    d=3;
//A ingate
if (x>=500 && y>=630 && x<=540 && y<=670)
    d=0;
//L fruit center workshop
if ( (x>=330 && y>=60 && x<=430 && y<=120) || ( x>=505 && y>=0 && x<=545 && y<=250))
    d=11;
//M Sharad Arena
if (x>=180 && y>=120 && x<=260 && y<=180)
    d=12;
//N nescafe
if (x>=270 && y>=0 && x<=320 && y<=50)
    d=13;
// P first building
if (x>=10 && y>=120 && x<=180 && y<=630)
    d=15;
//B first building admin
if (x>=180 && y>=500 && x<=450 && y<=630)
    d=1;
//J mech building
if ((x>545 && y>=0 && x<=680 && y<=250) || (x>680 && y>=0 && x<=800 && y<=160))
    d=9;
//I indus prod
if (x>=800 && y>=0 && x<=1100 && y<=160)
    d=8;
//G canteen
if (x>=1150 && y>=200 && x<=1280 && y<=400)
    d=6;
//F npb cc
if (x>=950 && y>=450 && x<=1130 && y<=520)
    d=5;
//E instru
if (x>=500 && y>=450 && x<=850 && y<=510)
    d=4;
//C instru extra
if ( (x>=500 && y>=510 && x<=850 && y<=570) || (x>=750 && y>=570 && x<=850 && y<=640))
    d=2;
//G ground
if  (x>=700 && y>=180 && x<=1100 && y<=410)
    d=6;
//K ground
if  (x>=505 && y>=280 && x<=600 && y<=410)
    d=10;
//J ground
if  (x>=600 && y>=280 && x<=700 && y<=410)
    d=9;
//Q -2 gate
if  (x>=10 && y>=650 && x<=30 && y<=670)
    d=16;
if  (x>=1000 && y>=600 && x<1200 && y<=800)
    d=17;
if  (x>=1200 && y>=600 && x<1400 && y<=800)
    d=18;
return d;
}//destination



void SecondaryFriendList(int graph[20][20]  ){

    //ALL People



    int x[21]={250,280,380,1190,1180,810,830,1230,1230,360,350,1100,1170,350,300,1190,1190,900 ,900,930,830};
    int y[21]={350,480,500,385, 380,300,330,500,  270,370,450,220, 370, 460,420,250, 245, 340,  300,245,330};
char z[21] ={'user','A','B', 'C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q', 'R','S','\0'};
    //char z[20] ="ABCDEFGHI";
    //printf("%c",z[5]);
    int a=0,s;
    char temp[2];
    //char *temp;

/*
      setfillstyle(SOLID_FILL, YELLOW);
                circle (x[0],y[0],15);
                floodfill(x[0],y[0],WHITE);


                setcolor(WHITE);
                settextstyle(3,0,1);

                outtextxy(x[0] - 5,y[0] -8,"USer");
*/

    for(s=1;s<20;s++){

    setcolor(BLACK);
	setfillstyle(SOLID_FILL, YELLOW);
	circle (x[s],y[s],15);                //Q
	//floodfill(20,340,WHITE);


    setcolor(WHITE);
    settextstyle(3,0,1);

    //printf("%c",z[s]);
   //*temp =z[s] ;
    //*(temp +1) ='\0';

    char temp[2];
    temp[0] =z[s];
    temp[1] ='\0';
    outtextxy(x[s] - 5,y[s] -8,temp);
   //temp = temp -1;


}










    //friends of user(0)







    int i;
    int checkfriendlist[20];

    for(i=0;i<20 ;i++){
        checkfriendlist[i] = 0;
    }

    checkfriendlist[0] = -1;

    for(i=1; i<20; i++){
        if(graph[0][i] == 1){
            checkfriendlist[i] =1;
           // printf("%d",i);

                //setcolor(RED);
                setfillstyle(SOLID_FILL, RED);
                circle (x[i],y[i],15);                //Q
                floodfill(x[i],y[i],WHITE);


                setcolor(WHITE);
                settextstyle(3,0,1);
                temp[0] = z[i];
                temp[1] ='\0';
                outtextxy(x[i] - 5,y[i] -8,temp);


        }
    }

    int edgev ;
    //int secondlist[19];
   // int count=0;

    for(edgev =1;edgev <20;edgev ++){

        if(graph[0][edgev] == 1  ){

            for(i=1;i<20;i++){
                if(graph[edgev][i] == 1 && checkfriendlist[i] == 0){
                    //secondlist[count] = i;
                    checkfriendlist[i] =1;
                    //count++;


                //setcolor(YELLOW);
                setfillstyle(SOLID_FILL, YELLOW);
                circle (x[i],y[i],15);
                floodfill(x[i],y[i],WHITE);


                setcolor(WHITE);
                settextstyle(3,0,1);
                temp[0] =z[i];
                temp[1] ='\0';
                outtextxy(x[i] - 5,y[i] -8,temp);


                }
            }

        }
    }







}



