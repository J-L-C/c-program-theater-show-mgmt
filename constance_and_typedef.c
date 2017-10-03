//////////////////CONSTANCE/////////////////////////                                                                                                                       
#define MAXSHOWSWEEK 15
#define MAXSTRING 120

////////////////STRUCTS////////////////////////////          




struct date_start
{
  int day;
  int month;
  int year;
};
struct date_end
{
  int dayEnd;
  int monthEnd;
  int yearEnd;
};
struct weekly_show
{


  float showStart;/*HH.MM, military time  */           
  float showCost;                          
  char shwDay;/*DAY OF SHOW LETTER,ie smtwrfa*/        
  char shwDesignation;
  float adultTicket;
  int seats;
  int show_length;

};
struct show
{
  int shows_per_week;
  int code;//Show Code                                
  int zipCode;
  char nameShow[MAXSTRING];
  char genreLetterCode;//Genre Letter Code             
  struct date_start STdate;
  struct date_end ENdate;
  struct weekly_show WKshow[MAXSHOWSWEEK];
  int tickets_sold;
  int number_adults;
  int number_children;
  int number_infants;
  int show_run;


  struct show *nextshow;
};


//////////////////////STRUCTS/////////////////////         
/////////////////////////////////////////////////            
////////////////////////////////////////////////    
///////////////////////////////////////////////       
