#include <stdio.h>
#include <string.h>

/*char* fgets= NULL;*/
int s,i,j=0;
char one_letter;
int count=0;
int q_counter=0;
int total_count=0;
/*The largest name, including the quotes, is 13 characters long. Thus we will just simply allocated 15 elements for this array."*/
char all_names [15][5163];
int all_names_int [15][5163];
char all_names_value [15][5163];
char quote='\"';
char one_character;
char temp='\0';
int score[5163];
int final[5163];
int SUM=0;



int main(void){	
/*
	for(i=0;i<5163;i++){
	for(j=0;j<5163;j++){
		all_names[j][i]='\0';
	}}
*/
	for(i=0;i<5163;i++){
		score[i]=0;
		final[i]=0;
}
	for(i=0;i<5163;i++){
	for(j=0;j<15;j++){
		all_names_int[j][i]=0;
	}}

	FILE *name_list = NULL;
	char buff[50000];
	memset(buff,0,sizeof(buff));
	
	name_list = fopen("/Users/denniskeritsis/projecteuler/22/names.txt","r");

	if(NULL== name_list)
	{
		printf("\n fopen() Error!!!\n");
		return 1;
	}
	
	/*printf("Open ftw\n");*/

	fgets(buff , 50000, (FILE*) name_list);
	/*printf("%s\n", buff);*/

 /*This for finding out that the array of characters can be indexed through*/
/*	for(s=0;s<sizeof(buff)-1;s++){
		printf("This is number %i: %c\n", s, buff[s]);
	}
*/

/*This code here just loops until it hits a comma*/
/*
	for(s=0, one_letter=buff[s]; strcmp(&one_letter, ",") !=0  ;s++){
		printf("This is number %i: %c\n", s, buff[s]);
		one_letter=buff[s];
	}
*/

/* Count the number of commas listed and add one thereby giving us the total number of names. 
Also, we need to add +1 to counter to account for last word in list which doesn't have a comma. 
The total number of names in the list is 5163*/

/*
	for(s=0, count=1;s<sizeof(buff)-1;s++){
		one_letter=buff[s];
		if(strcmp(&one_letter, ",")==0)
		{
			count++;
		}

	}
	printf("The number of names is: %i\n", count);
*/
	for(i=0, total_count=0; i<5163;i++)
	{
		/*printf("NEW WORD!!! This is word: %i \n\n\n", i);*/
  		one_character=buff[total_count];
		for(j=0;strcmp(&one_character, ",") !=0;j++,  one_character=buff[total_count])
		{

			all_names[j][i]=buff[total_count];
			printf("%c",all_names[j][i]);

			/*printf("This is buff[total_count] and total count: %c and %i \n",buff[total_count], total_count); *//*Just to note buff is filled*/
			total_count++;
			if(i==5162 && j==14) break;
		}		
			total_count++;
			printf("\n");
	}

	for(i=0; i<5163;i++){
		/*printf("This is word: %i\n",i);*/
		for(j=0;j<15;j++ ){
			/*printf("%d\n",'Z'-'all_names[j][i]'+'all_names[j][i]');*/
			/*printf("%d\n",'Z'-'A');*/
			all_names_int[j][i]=(int)all_names[j][i];
			if(all_names_int[j][i]==34) all_names_int[j][i]=0;/*Need to find the commas value and replace--moreover this is hardcoded*/
			all_names_int[j][i]=all_names_int[j][i]-'A'+1;
			if(all_names_int[j][i]==-64 || all_names_int[j][i]<1 || all_names_int[j][i]>26) all_names_int[j][i]=0;/*Need to find the commas value and replace--moreover this is hardcoded*/
		/*	printf("%i\n",all_names_int[j][i]);*/
		}
	}
	for(i=0; i<5163;i++){
		for(j=0; j<15;j++){
			/*printf("%i\n",all_names_int[j][i]);*/
			score[i]=all_names_int[j][i]+score[i];			
		}
		/*printf("This is the %i score which is: %i\n",i,score[i]);*/
	}
	for(i=0; i<5163;i++){
		final[i]=score[i]*(i+1);
		/*printf("%i\n",final[i]);*/
		SUM=SUM+final[i];
	}
	printf("The SUM is:%i\n",SUM);
	/*printf("final[i] is: %i", final[0]);
	printf("final[i] is: %i", final[1562]);*/

	for(i=0; i<5163;i++){
		/*printf("This is the %i score which is: %i\n",i,score[i]);*/
		printf("This is the multiplier for the final score which is %i TIMES %i : %i\n",i+1,score[i],final[i]);
	}
	printf("Last name is:\n");
	for(i=0; i<15;i++){	
		printf("%c",all_names[i][5162]);
		printf(" %i\n",i);
	}
	printf("\n\n\n");
	for(i=0; i<15;i++){	
		printf("%i\n",all_names_int[i][5162]);
	}
	printf("\n");
	printf("The SUM is:%i\n",SUM);
	
	
	fclose(name_list);
	return 1;
};
