#include <stdio.h>
#include <stdlib.h>

typedef struct block 											// block consist of object name and it's probability
{
	char Name[15];
	float Probability;
}block;

int main(int argc, char *argv[]) 
{
	int CountM,CountB,CountC,CountA,CountF,CountT;	
	float ProbM,ProbB,ProbC,ProbA,ProbF,ProbT;	
	
	block block1;
	block1.Name="milk";
	block1.Probability=ProbM,;
	
	block block2;
	block1.Name="Bread";
	block1.Probability=ProbB;
	
	block block3;
	block1.Name="Coffee";
	block1.Probability=ProbC;
	
	block block4;
	block1.Name="Apple";
	block1.Probability=ProbA;
	
	block block5;
	block1.Name="Flowers";
	block1.Probability=ProbF;
	
	block block6;
	block1.Name="Toor";
	block1.Probability=ProbT;
	
	
	
	return 0;
}
