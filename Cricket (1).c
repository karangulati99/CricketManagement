#include<stdio.h>
#include<conio.h>
#include<string.h>

struct Information
{
	char Competition[50];
	char Venue[50];
	int Date;
	int Month;
	int Year;
	char Team1[50];
	char Team2[50];
	char Toss[50];
	char Decision[50];
};

struct Information Info;

struct Batsmen
{
	char Name[50];
	int Runs;
	int Balls;
	int Fours;
	int Sixes;
	float SR;
	char Remark[10];
};

struct Batsmen Bat1[11], Bat2[11];

struct Bowler
{
	char Name[50];
	int Overs;
	int Maiden;
	int Wickets;
	int Runs;
	float Economy;		
};

struct Bowler Bowl1[5], Bowl2[5];

void venue();
void Batsmen1();
void Bowler1();
void Batsmen2();
void Bowler2();
main()
{	
	int i;
	
	venue();
	
	printf("\t\t\t\t\t\t\t\t\t\t\t1st Innings\n\n");
	
	Batsmen1();
	Bowler1();

	printf("\t\t\t\t\t\t\t\t\t\t\t2nd Innings\n\n");

	Batsmen2();
	Bowler2();
	
	getch();
	system("cls");
	
	printf("\t\t\t\t\t\t\t\t\t\t\tMatch Information\n\n");
	printf("Competition\t:-\t%s\t\t\tVenue\t\t:-\t%s\n", Info.Competition,Info.Venue);
	printf("Date\t\t:-\t%d/%d/%d\n", Info.Date,Info.Month,Info.Year);
	printf("Team 1\t\t:-\t%s\t\t\tTeam 2\t\t:-\t%s\n", Info.Team1,Info.Team2);
	printf("Toss won by\t:-\t%s\t\t\tDecision\t:-\t%s\n\n", Info.Toss,Info.Decision);
	
	printf("\t\t\t\t\t\t\t\t\t\t\t1st Innings\n\n");
	
	printf("\nBatsmen:-\n\n");
	printf("Name\t\tRuns\t\tBalls\t\tFours\t\tSixes\t\tSR\t\t\tStatus\n");
	for(i=0;i<2;i++)
	{
	printf("%s\t\t%d\t\t%d\t\t%d\t\t%d\t\t%f\t\t%s\n", Bat1[i].Name,Bat1[i].Runs,Bat1[i].Balls,Bat1[i].Fours,Bat1[i].Sixes,Bat1[i].SR,Bat1[i].Remark);
	}
	
	printf("\nBowler:-\n\n");
	printf("Name\t\tOvers\t\tMaiden\t\tWickets\t\tRuns\t\tEconomy\n");
	for(i=0;i<1;i++)
	{
	printf("%s\t\t%d\t\t%d\t\t%d\t\t%d\t\t%f\n", Bowl1[i].Name,Bowl1[i].Overs,Bowl1[i].Maiden,Bowl1[i].Wickets,Bowl1[i].Runs,Bowl1[i].Economy);
	}
	
	printf("\n\n\t\t\t\t\t\t\t\t\t\t\t2nd Innings\n\n");
	
	printf("\nBatsmen:-\n\n");
	printf("Name\t\tRuns\t\tBalls\t\tFours\t\tSixes\t\tSR\t\t\tStatus\n");
	for(i=0;i<2;i++)
	{
	printf("%s\t\t%d\t\t%d\t\t%d\t\t%d\t\t%f\t\t%s\n", Bat2[i].Name,Bat2[i].Runs,Bat2[i].Balls,Bat2[i].Fours,Bat2[i].Sixes,Bat2[i].SR,Bat2[i].Remark);
	}
	
	printf("\nBowler:-\n\n");
	printf("Name\t\tOvers\t\tMaiden\t\tWickets\t\tRuns\t\tEconomy\n");
	for(i=0;i<1;i++)
	{
	printf("%s\t\t%d\t\t%d\t\t%d\t\t%d\t\t%f\n", Bowl2[i].Name,Bowl2[i].Overs,Bowl2[i].Maiden,Bowl2[i].Wickets,Bowl2[i].Runs,Bowl2[i].Economy);
	}
}

void venue()
{

	printf("\t\t\t\t\t\t\t\t\t\t\tMatch Information\n\n");

	printf("Enter the tournament name\n");
	scanf("%s", Info.Competition);
	
	printf("Enter the venue\n");
	scanf("%s", Info.Venue);
	
	printf("Enter the date of the match\n");
	scanf("%d", &Info.Date);
	
	printf("Enter the month of the match\n");
	scanf("%d", &Info.Month);
	
	printf("Enter the year of the match\n");
	scanf("%d", &Info.Year);
	
	printf("Team 1:-\n");
	scanf("%s", Info.Team1);
	
	printf("Team 2:-\n");
	scanf("%s", Info.Team2);
	
	printf("Toss won by:-\n");
	scanf("%s", Info.Toss);
	
	printf("Decision:-\n");
	scanf("%s", Info.Decision);
}

void Batsmen1()
{
	int i;
	printf("Batsmen:-\n\n");
	for(i=0;i<2;i++)
	{	
		printf("Enter the name of the player\n");
		scanf("%s", Bat1[i].Name);
	
		printf("Enter the runs of the player\n");
		scanf("%d", &Bat1[i].Runs);
		
		printf("Enter the balls of the player\n");
		scanf("%d", &Bat1[i].Balls);
		
		if(Bat1[i].Balls==0)
		{
			Bat1[i].Fours=0;
			Bat1[i].Sixes=0;
			Bat1[i].SR=0.0;
		}
		else
		{	
		printf("Enter the fours of the player\n");
		scanf("%d", &Bat1[i].Fours);
	
		printf("Enter the sixes of the player\n");
		scanf("%d", &Bat1[i].Sixes);
	
		Bat1[i].SR = (Bat1[i].Runs*100)*1.0/Bat1[i].Balls;	
		
		printf("Status\n");
		scanf("%s", Bat1[i].Remark);
		}
	}
}
	
void Bowler1()
{
	int i;
	printf("\nBowler:-\n\n");
	for(i=0;i<1;i++)
	{
		printf("Enter the name of the player\n");
		scanf("%s", Bowl1[i].Name);
		
		printf("Enter the overs bowled by the player\n");
		scanf("%d", &Bowl1[i].Overs);
		
		printf("Enter the number of maiden bowled by the player\n");
		scanf("%d", &Bowl1[i].Maiden);
		
		printf("Enter the number of wickets taken by the player\n");
		scanf("%d", &Bowl1[i].Wickets);
		
		printf("Enter the number of runs given by the player\n");
		scanf("%d", &Bowl1[i].Runs);
		
		Bowl1[i].Economy=(Bowl1[i].Runs*1.0)/Bowl1[i].Overs;	
	}
}
		
void Batsmen2()
{
	int i;
	printf("\n\nBatsmen:-\n\n");
	for(i=0;i<2;i++)
	{	
		printf("Enter the name of the player\n");
		scanf("%s", Bat2[i].Name);
	
		printf("Enter the runs of the player\n");
		scanf("%d", &Bat2[i].Runs);
		
		printf("Enter the balls of the player\n");
		scanf("%d", &Bat2[i].Balls);
		
		if(Bat2[i].Balls==0)
		{
			Bat2[i].Fours=0;
			Bat2[i].Sixes=0;
			Bat2[i].SR=0.0;
		}
		else
		{	
		printf("Enter the fours of the player\n");
		scanf("%d", &Bat2[i].Fours);
	
		printf("Enter the sixes of the player\n");
		scanf("%d", &Bat2[i].Sixes);
	
		Bat2[i].SR = (Bat2[i].Runs*100)*1.0/Bat2[i].Balls;	
		
		printf("Status\n");
		scanf("%s", Bat2[i].Remark);
		}
	}
}
	
void Bowler2()
{
	int i;
	printf("\nBowler:-\n\n");
	for(i=0;i<1;i++)
	{
		printf("Enter the name of the player\n");
		scanf("%s", Bowl2[i].Name);
		
		printf("Enter the overs bowled by the player\n");
		scanf("%d", &Bowl2[i].Overs);
		
		printf("Enter the number of maiden bowled by the player\n");
		scanf("%d", &Bowl2[i].Maiden);
		
		printf("Enter the number of wickets taken by the player\n");
		scanf("%d", &Bowl2[i].Wickets);
		
		printf("Enter the number of runs given by the player\n");
		scanf("%d", &Bowl2[i].Runs);
		
		Bowl2[i].Economy=(Bowl2[i].Runs*1.0)/Bowl2[i].Overs;	
	}	
}	
