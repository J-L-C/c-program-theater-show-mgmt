/*INPUT FUNCTIONS HERE
 *
 *
 *
 *
 *
 *INPUT FUNCTIONS HERE
 */

struct show *inputShowdata ()
{
  
  
    
 
 
  struct show *first,*current,*travel, *trailer, *reader;
  first=current=travel=trailer=reader=NULL;
  char userIn;
  int control = 1;
  int controL2=1;
  int control3=0;
  int i = 0;
  int max=MAXSTRING;
  char *tempstring;
    tempstring=NULL;
  char n_string[256];
  char b_string[120];

  while (control == 1)
    {
       controL2=1;
       
       printf("\nPlease Enter Name The Name of The Show\n");

      current=(struct show*)malloc(sizeof(struct show));
      tempstring=(char*)malloc(max + 1);
      getchar();
      getline(&tempstring, &max, stdin);

       
       if(strlen(tempstring) < 120)
        {

	  strcpy(b_string,tempstring);
	  printf("this is b string %s\n\n",b_string);
	  strcpy(current->nameShow,tempstring);//MUSTARD USE STRING COMPY111!    
	  printf("Current->nameshow!>>>>>%s",current->nameShow);
	}

      else
	{
	  strcpy(n_string,tempstring);
	  printf("\nThis si n_string: %s\n", n_string);
	  n_string[119]='\0';
	  strcpy(b_string,n_string);
	  strcpy(current->nameShow, b_string);
	  printf("\nCurrent->nameshow>>>%s",current->nameShow);
	  printf("\nThis is b string now after null character: %s\n", b_string         );

	  }

      

       //SHOW CODE

  printf("\nPlease Enter Show Code.\nThe code will be a 4-digit number.\nLeft most digit(1000's place) will indicate the city as follows:\n1 FORT WORTH\n2 ARLINGTON\n3 DALLAS\n4 IRVING\n5 PLANO\n6 GARLAND\n7 GRAND PRAIRIE\n8 CARROLLTON\n9 OTHER\n\nThe (100's place) inidicates theater company as listed:\n\n1 THEATER ARLINGTON \n2 CASA MANANA \n3 JUBILEE THEATER \n4 STAGE WEST \n5 DALLAS THEATER CENTER \n6 GARLAND CIVIC THEATER \n7 HIP POCKET THEATER \n8 KITCHEN DOG THEATER\n9 ICT MAINSTAGE\n0 OTHER\n ");
       scanf("%d", &(current->code));

       
       if((current->code)<1000)
	 {printf("please enter a new value between 1000-10000.\n");
	   control3=1;
	   while(control3==1)
	     { 
	       printf("\nNew Value:");
	       scanf("%d", &current->code);
	        if(current->code>=1000)
		 {control3=0;}
	       if(current->code>10000)
	       {control3=1;}
	     }
          }
       if((current->code)>10000)
	 { printf("\nplease enter a new value between 1000-10000\n");

	   control3=1;
           while(control3==1)
             { printf("\nNew Value:");
               scanf("%d", &current->code);
               if(current->code>1000)
                 control3=0;
               if(current->code>10000)
                 control3=1;
             }
	 }

       
       //Theater Zip

       printf("\n\nPlease enter the zip code of the theater(5-digits): ");
       scanf("%d", &current->zipCode);

       if((current->zipCode)<10000)
         {printf("Please enter a valid zip code.\n");
           control3=1;
           while(control3==1)
             {
               printf("\nNew Value:");
               scanf("%d", &current->zipCode);
	       if(current->zipCode>=10000)
                 {control3=0;}
               if(current->zipCode>100000)
		 {control3=1;}
             }
	 }
       if((current->zipCode)>100000)
         { printf("\nplease enter a valid zip code.\n");

           control3=1;
           while(control3==1)
             { printf("\nNew Value:");
               scanf("%d", &current->zipCode);
               if(current->zipCode>10000)
                 control3=0;
               if(current->zipCode>100000)
                 control3=1;
             }
         }

       //GENRE LETTER CODE

printf("Please enter the Genre Letter Code:\n\nD-Drame\nC-Comedy\nS-Suspanse\nF-Fantasy\nM-Musical\nV-Variety\nR-Revue\nI-One Man Show\nO-Other\n");
 getchar();
 current->genreLetterCode=getchar();


  control3=1;

  while(control3==1)
    {

      switch(current->genreLetterCode)
	{
	  scanf("%c",&current->genreLetterCode);
	  
	case 'd':;
	case 'D':control3=0;break;

	case 'c':;
	case 'C':control3=0;break;

	case 's':;
	case 'S':control3=0;break;

	case 'f':;
	case 'F':control3=0;break;

	case 'm':;
	case 'M':control3=0;break;
	
	case 'v':;
	case 'V':control3=0;break;

	case 'r':;
	case 'R':control3=0;break;

	case 'i':;
	case 'I':control3=0;break;

	case 'o':;
	case 'O':control3=0;break;

	default: printf("Please enter in the appropriate genre code:\n"); scanf("%c",&current->genreLetterCode); break;

	}

    }




  //start date.day

printf("Please Enter The Start Day:");                                                                          
scanf("%d", &current->STdate.day);
  control3=1;

  if((current->STdate.day)<=0)
    {
      while(control3==1)
	{ 
	  printf("Please enter an int greater than 0 and less than 32:");
	  scanf("%d",&current->STdate.day);

	  if((current->STdate.day>0)&&(current->STdate.day<=31))
	    { 
	      control3=0;
	    }
	}
    }
   if((current->STdate.day)>31)
	    {
	      while(control3==1)
		{
		  printf("Please enter an int less than 32: ");
		  scanf("%d",&current->STdate.day);
		  
		  if((current->STdate.day<=31)&&(current->STdate.day>=1))
		    {
		      control3=0;
		    }
		}


	     }
    
   //start date.month

 printf("Please Enter The Start Month:");                                                                   \
 scanf("%d", &current->STdate.month);

   control3=1;

   if((current->STdate.month)<=0)
     {
       while(control3==1)
	 {
	   printf("Please enter an int greater than 0 and less than 13:");
	   scanf("%d",&current->STdate.month);

	   if((current->STdate.month>0)&&(current->STdate.month<=12))
	     {
	       control3=0;
	     }
	 }
     }

   if((current->STdate.month)>12)
     {
       while(control3==1)
	 {
	   printf("Please enter an int less than 13 and greater than 0: ");
	   scanf("%d",&current->STdate.month);

	   if((current->STdate.month<=12)&&(current->STdate.month>0))
	     {
	       control3=0;
	     }
	 }


     }



   //start date.year

   printf("Please Enter The Start Year(YYYY) between 2000-2050:");                                           
   scanf("%d", &current->STdate.year);

   control3=1;

   if((current->STdate.year)<=1999)
     {
       while(control3==1)
	 {
	   printf("Please enter an int year greater than 1999 and less than 2050:");
	   scanf("%d",&current->STdate.year);

	   if((current->STdate.year>=2000)&&(current->STdate.year<=2050))
	     {
	       control3=0;
	     }
	 }
     }
   if((current->STdate.year)>2050)
     {
       while(control3==1)
	 {
	   printf("Please enter an int year less than 2050 and greater than 2000: ");
	   scanf("%d",&current->STdate.year);

	   if((current->STdate.year<=2050)&&(current->STdate.year>=2000))
	     {
	       control3=0;
	     }
	 }
      }


   //End date.day                                                                                                                                                                                                                           

   printf("Please Enter The End Date Day:");
   scanf("%d", &current->ENdate.dayEnd);
   control3=1;

   if((current->ENdate.dayEnd)<=0)
     {
       while(control3==1)
	 {
	   printf("Please enter an int greater than 0 and less than 32:");
	   scanf("%d",&current->ENdate.dayEnd);

	   if((current->ENdate.dayEnd>0)&&(current->ENdate.dayEnd<=31))
	     {
	       control3=0;
	     }
	 }
     }
   if((current->ENdate.dayEnd)>31)
     {
       while(control3==1)
	 {
	   printf("Please enter an int less than 32: ");
	   scanf("%d",&current->ENdate.dayEnd);

	   if((current->ENdate.dayEnd<=31)&&(current->ENdate.dayEnd>=1))
	     {
	       control3=0;
	     }
	 }
       
      }

   //End date.month                                                                                                                                                                                                                        

   printf("Please Enter The End Month:");                                                                   \
   scanf("%d", &current->ENdate.monthEnd);

   control3=1;

   if((current->ENdate.monthEnd)<=0)
     {
       while(control3==1)
         {
           printf("Please enter an int greater than 0 and less than 13:");
           scanf("%d",&current->ENdate.monthEnd);

           if((current->ENdate.monthEnd>0)&&(current->ENdate.monthEnd<=12))
             {
               control3=0;
             }
         }
     }

   if((current->ENdate.monthEnd)>12)
     {
       while(control3==1)
         {
           printf("Please enter an int less than 13 and greater than 0: ");
           scanf("%d",&current->ENdate.monthEnd);

           if((current->ENdate.monthEnd<=12)&&(current->ENdate.monthEnd>0))
             {
               control3=0;
             }
         }
     }





   //end date.year                                                                                                                                                                                                                         

   printf("Please Enter The End Year(YYYY) between 2000-2050:");
   scanf("%d", &current->ENdate.yearEnd);

   control3=1;

   if((current->ENdate.yearEnd)<=1999)
     {
       while(control3==1)
         {
           printf("Please enter an int year greater than 1999 and less than 2050:");
           scanf("%d",&current->ENdate.yearEnd);

           if((current->ENdate.yearEnd >= 2000)&&(current->ENdate.yearEnd<=2050))
             {
               control3=0;
             }
         }
     }
   if((current->ENdate.yearEnd)>2050)
     {
       while(control3==1)
         {
           printf("Please enter an int year less than 2050 and greater than 2000: ");
           scanf("%d",&current->ENdate.yearEnd);

           if((current->ENdate.yearEnd<=2050)&&(current->ENdate.yearEnd>=2000))
             {
               control3=0;
             }
         }
     }



   //Number of shows per week

   printf("\nPlease Enter an int for the number of shows per week(15 shows per week max): ");
   scanf("%d",&current->shows_per_week);

   if((current->shows_per_week < 0)||(current->shows_per_week > MAXSHOWSWEEK))
     { control3=1;

       while(control3==1)
	 {

	   printf("Enter a valid integer between 1 and 15 please:");
	   scanf("%d",&current->shows_per_week);
	   if((current->shows_per_week > 0)&&(current->shows_per_week<=15))
	      control3=0;
         }
  }

   //Show Detail Entry


   printf("\n\nWe are now ready to accept detail information about a weekly show performance.");
   i=0;

   while(i<current->shows_per_week)
     {
       printf("Please enter the Day of show as a letter:\nS SUNDAY\nM MONDAY\nT TUESDAY\nW WEDNESDAY\nR THURSDAY\nF FRIDAY\nA SATURDAY\n");
       getchar();
       scanf("%c",&current->WKshow[i].shwDay);

       control3=1;

while(control3==1)
     {

	   switch(current->WKshow[i].shwDay)
	     {
	      
	       scanf("%c",&current->WKshow[i].shwDay);

	     case 's':;
	     case 'S':control3=0;break;

	     case 'm':;
	     case 'M':control3=0;break;

	     case 't':;
	     case 'T':control3=0;break;

	     case 'w':;
	     case 'W':control3=0;break;

	     case 'r':;
	     case 'R':control3=0;break;

	     case 'f':;
	     case 'F':control3=0;break;

	     case 'a':;
	     case 'A':control3=0;break;

	     default: printf("Please enter in the appropriate day letter code:\n"); scanf("%c",&current->WKshow[i].shwDay);\
	       break;

	     }


	 }

         printf("\nPlease enter the start time of the show in military and as a decimal number.(HH.MM): ");
	 scanf("%f",&current->WKshow[i].showStart);
       
       if((current->WKshow[i].showStart<0)||(current->WKshow[i].showStart>24))
	 {
	   control3=1;
	   printf("Please enter a value between 0 and 23.59: ");

	   while(control3==1)
	     {
	       scanf("%f",&current->WKshow[i].showStart);
	       if((current->WKshow[i].showStart>0)&&(current->WKshow[i].showStart<24))
		 control3=0;


	     }
	 }
         
       getchar();
      

	   printf("\nPlease enter the show designation letter:\nR REGULAR\nM MATINEE\nL LATE SHOW\n");
	   scanf("%c",&current->WKshow[i].shwDesignation);

	   control3=1;

	   while(control3==1)
	     {


	       switch(current->WKshow[i].shwDesignation)
		 { 
		   scanf("%c",&current->WKshow[i].shwDesignation);
		   
		    case'r':;
		    case'R':control3=0;break;

	            case'm':;
		    case'M':control3=0;break;
		      
		    case'l':;
		    case'L':control3=0;break;


		    default: printf("Please enter R, M, or L"); scanf("%c",&current->WKshow[i].shwDesignation);break;

                 }
	     }           
   
	   //ADULT TICKET

	   printf("Please enter the cost per adult ticket");
	   scanf("%f",&current->WKshow[i].adultTicket);

	   if(current->WKshow[i].adultTicket < 0);
	   { 
	     control3=1;

	     while(control3==1);
	     { printf("Please input a float value of 0 or greater: ");

	       scanf("%f",&current->WKshow[i].adultTicket);
	       if(current->WKshow[i].adultTicket > 0)
		 {  
		   control3=0;
		 }



	     }

	     
	   }


	   //Available Seats
	   printf("Please input an integer indicating the number of available seats: ");
	   scanf("%d",&current->WKshow[i].seats);

	   if(current->WKshow[i].seats < 0);
           {
             control3=1;

             while(control3==1);
             { printf("Please input an integer value of 0 or greater: ");

               scanf("%f",&current->WKshow[i].seats);
               if(current->WKshow[i].seats > 0)
                 {
                   control3=0;
                 }



             }


           }

	   //Show Length
	   
	   printf("Please input an integer value (between 15-1440 minutes) for length of the show: ");
	   scanf("%d",&current->WKshow[i].show_length);


	   if((current->WKshow[i].show_length < 15)||(current->WKshow[i].show_length > 1440));
           {
             control3=1;

             while(control3==1);
             { printf("Please input an integer between 15 and 1440 (minutes) : ");

               scanf("%f",&current->WKshow[i].show_length);
               if(current->WKshow[i].show_length > 0)
                 {
                   control3=0;
                 }



             }


           }






	   i++;

}//While loop end
    
   //Tickets Sold Initialization

   current->show_run=0;
   current->tickets_sold=0;
   current->number_adults=0;
   current->number_children=0;
   current->number_infants=0;
    
    
      current->nextshow = NULL;

      if(first == NULL)
	{first=current;}
      else if(strcmp(first->nameShow, current->nameShow)>0)
	{ 
	  current->nextshow = first;
	  first=current;
	}
      else
	{
	  travel=first->nextshow;
	  trailer=first;
	  while( (travel !=NULL) && (strcmp(travel->nameShow,current->nameShow) >0))
	    {
	      travel = travel->nextshow;
	      trailer = trailer->nextshow;
	    }
	  current->nextshow = travel;
	  trailer->nextshow=current;
	}

      printf("whould you like to continue?\n");

      while(controL2==1)
	{
	  
	  
	  userIn=getchar();

	  switch(userIn)
	    {
	    case'y':;
	    case'Y':controL2=0;break;

	    case 'n':;
	    case 'N':control = 0; controL2=0;break;

	    default: printf("Please select y or n:"); break;

	    }
        }


      //create print function here base upon

      /*      while(reader->nextshow != NULL)
	{
	  printf("\n%d", reader->code);
	  reader = reader->nextshow;
	  i++;
	  printf("%d", i);
	}

      printf("\n\n\n\n\n%d\n", reader->code);
      printf("%d", i);
      */


    }
    

    
      
  return first;

}






















char* inputShow(struct show *current)
{
  printf("\n\n");
  
  return 0;
}


char inputgenreCodeShow(struct show *current)
{
  printf("\n\nSECTION NOT INITIALIZED: This section deals with input for the genre code for the show.");
  check_inputgenreCodeShow (current);
  return 0;
}
float inputweeklyShowdetail(struct show *current)
{
  printf("\n\nSECTION NOT INITIALIZED: This section takes in values for the show start time and also the show ticket cost.");
  check_show_start (current);
  check_show_cost (current);
  return 0;
}
char inputweeklyShowchar(struct show *current)
{
 
  printf("\n\nSECTION NOT INITIALIZED: This section takes in character values for the day of the show and also the show designation of either matinee, evening, or morning.");
  return 0;
}
int inputFile(struct show *first)
{
  printf("\n\nSECTION NOT INITIALIZED: This section would have been the implementation of a single line entry taking in values for each show parameter seperated by a space and verified for content by the standard check functions.");
  return 0;
}
/*******************************************************************
 *                 FUNCTION TEST SET                               *
 *                                                                 *
 *******************************************************************/
/*******************************************************************
CHECK SHOW DETAILS
******************************************************************/
int check_show_start_day (struct show *current)
{
  printf("");
  return 0;
}
int check_show_code (struct show *current)
{
  printf("     |NOT INIT: CHECK FUNCTION FOR SHOWCCODE \n");
  return 0;
}
   
int check_show_start_month (struct show *current)
{
  printf("     |NOT INIT: CHECK FUNCTION FOR SHSMO \n");
  return 0;
}         
int check_show_start_year (struct show *current)
{
  printf("     |NOT INIT: CHECK FUNCTION FOR SHSYR \n");
  return 0;
}         
int check_show_end_day (struct show *current)
{
  printf("     |NOT INIT: CHECK FUNCTION FOR SHEDAY \n");
  return 0;
}
                                  
int check_show_end_month (struct show *current)
{
  printf("     |NOT INIT: CHECK FUNCTION FOR SHEMO \n");
  return 0;
}               
int check_show_end_year (struct show *current)
{
  printf("     |NOT INIT: CHECK FUNCTION FOR SHEYR \n");
  return 0;
}             
int check_show_per_week (struct show *current)
{
  printf("     |NOT INIT: CHECK FUNCTION FOR SHPERWEEK \n");
  return 0;
}
        
int check_show_seats (struct show *current)
{
  printf("     |NOT INIT: CHECK FUNTION FOR SEATS \n");
  return 0;
}                 
int check_show_length (struct show *current)
{
  printf("     |NOT INIT: CHECK FUNCTION FOR SHOW LENGTH \n");
  return 0;
}             
int check_show_adult (struct show *current)
{
  printf("     |NOT INIT: CHECK FUNTION FOR ADULT \n");
  return 0;
}                


int check_show_child (struct show *current)
{
  printf("     |NOT INIT: CHECK FUNCTION FOR CHILD \n");
  return 0;
}             
int check_show_infant (struct show *current)
{
  printf("     |NOT INIT: CHECK FUNCTION FOR INFANT \n");
  return 0;
}            
int check_show_run (struct show *current)
{
  printf("     |NOT INIT: CHECK FUNTION FOR RUN \n");
  return 0;
}                                 
int check_show_total_shows (struct show *current)
{
  printf("     |NOT INIT: CHECK FUNTION FOR TOTALSHOW \n");
  return 0;
}
/***********************************************************************
CHECK INPUT FOR SHOW DETAIL
***********************************************************************/
/************************************************************************
FLOAT CHECK SHOW DETAIL
************************************************************************/

float check_show_start (struct show *current)
{
  printf("     |NOT INIT: CHECK FUNCTION FOR SHOWSTART \n");
  return 0;
}
float check_show_cost (struct show *current)
{
  printf("     |NOT INIT: CHECK FUNCTION FOR SHOWCOST \n");
  return 0;
}
/**********************************************************
FLOAT CHECK SHOW DETAIL
************************************************************/                                                                             
/******************************************************
GENRE CODE CHECK
*******************************************************/
char check_inputgenreCodeShow (struct show *current)
{
  printf("     |NOT INIT: CHECK FUNCTION FOR INPUT GENRECODE \n");
  return 0;
}
/***********************************************
INPUT WEEKLY
************************************************/                                                                             
char check_day_show (struct show *current)
{
  printf("     |NOT INIT: CHECK FUNCTION FOR DAYSH \n");
  return 0;
}
char check_show_designation (struct show *current)
{
  printf("     |NOT INIT: CHECK FUNCTION FOR SHOWDESIGNATION \n");
  return 0;
}
/*******************************************************
INPUT WEEKLY
*******************************************************/

/********************************************************
USER FUNCTIONS
********************************************************/
int search_by_show_designation (void)
{
  printf("\n\nSECTION NOT INITIALIZED: This section would search for shows by thier designation\n");
  return 0;
}
int search_by_show_date (void)
{
  printf("\n\nSECTION NOT INITIALIZED: This section would search for shows by date specified\n");
  return 0;
}
int search_by_city (void)
{
  printf("\n\nSECTION NOT INITIALIZED: This section would search by city\n");
  return 0;
}
int calculate_ticket_cost (void)
{
  printf("\n\nSECTION NOT INITIALIZED: This section would calculate the total ticket cost for the show\n");
  return 0;
}
int calculate_revenue (void)
{
  printf("\n\nSECTION NOT INITIALIZED: This section would calculate total revenue for any given show");
  return 0;
}
int find_show_same_city (void)
{
  printf("\n\nSECTION NOT INITIALIZED: This section would find all shows in the same city\n");
  return 0;
}
int find_show_length (void)
{
  printf("\n\nSECTION NOT INITIALIZED: This section finds shows less than a user specified length\n");
  return 0;
}
int find_show_price (void)
{
  printf("\n\nSECTION NOT INITIALIZED: This section would located the show price of a given max price\n");
  return 0;
}
int sort_by_show_code (void)
{
  printf("\n\nSECTION NOT INITIALIZED: This section would sort all shows by thier show code\n");
  return 0;
}

int sort_by_start_date (void)
{
  printf("\n\nSECTION NOT INITIALIZED: This section sorts by start date\n");
  return 0;
}
int update_array (void)
{
  printf("\n\nSECTION NOT INITIALIZED: This section would allow the user to manipulate the arrays with new input\n");
 
  return 0;
}


int end_program (void)
{
  int i = 0;
  printf("Thank you for your patience, I  hope you have a pleasant day!\n\n");
  return i;
}
int end_first_sequence (void)
{
  int p = 0;
  printf("Thank you! We will move on to the second part of the program.");
  return p;
}
