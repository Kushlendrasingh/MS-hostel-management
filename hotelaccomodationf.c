#include <stdio.h>
#include <string.h>

int a,age,medHis,studentType,roomType,reffral,gender,month,roomId,passstatus;
long long int studentCont;
char studentName[20],collageName[20],finalroom[10],finalmed[5],resultgen[10],stutype[15],refstutes[5],passsta[5];
int total=2500;

int main()
{
    /** intoduction **/
	printf("                               Hostel Accommodation MS\n");
	printf("\n");
	printf("\n                       :::::::::::::::::::::::::::::::::::::");
    printf("\n                       ::                                 ::");
    printf("\n                       ::     @@@@@@@@@@@@@@@@@@@@@@@     ::");
    printf("\n                       ::     @                     @     ::");
    printf("\n                       ::     @      WELCOME TO     @     ::");
    printf("\n                       ::     @                     @     ::");
    printf("\n                       ::     @ MS Hostel Ahmdabad  @     ::");
    printf("\n                       ::     @                     @     ::");
    printf("\n                       ::     @@@@@@@@@@@@@@@@@@@@@@@     ::");
    printf("\n                       ::                                 ::");
    printf("\n                       :::::::::::::::::::::::::::::::::::::\n\n");
	printf("Student status:\n");
	printf("1. New \n");
	printf("2. Existing\n");
	printf("hotel@ms:-$ ");
	scanf("%d",&a);
	if (a==1)
	{
		printf("\nEnter the following deteils for knowing your total bill.\n");
		printf("\nStudent name:\n");
		printf("hotel@ms:-$ ");
		scanf("%s",&studentName);
		printf("\nContact no.:\n");
		printf("hotel@ms:-$ ");
		scanf("%llu",&studentCont);
		printf("\nAge:\n");
		printf("hotel@ms:-$ ");
		scanf("%d",&age);
		printf("\nGender:\n");
		printf("1. Male\n");
		printf("2. Female\n");
		printf("hotel@ms:-$ ");
		scanf("%d",&gender);
		printf("\nMedical History:\n");
		printf("1. Yes\n");
		printf("2. No\n");
		printf("hotel@ms:-$ ");
		scanf("%d",&medHis);
		printf("\nCollage name:\n");
		printf("hotel@ms:-$ ");
		scanf("%s",&collageName);
		printf("\nStudent Type:\n");
		printf("1. Engineering\n");
		printf("2. Medical\n");
		printf("\nhotel@ms:-$ ");
		scanf("%d",&studentType);
		printf("\nRoom Type:\n");
		printf("1. Single\n");
		printf("2. Duplex\n");
		printf("\nhotel@ms:-$ ");
		scanf("%d",&roomType);
		printf("\nReffral Staus:\n");
		printf("1. Yes\n");
		printf("2. No\n");
		printf("\nhotel@ms:-$ ");
		scanf("%d",&reffral);
		printf("\nNo. of months to stay:\n");
		printf("hotel@ms:-$ ");
		scanf("%d",&month);
		/** condition **/
        if (roomType==1)
        {
        	strcpy(finalroom, "Single");
        }
        else if(roomType==2)
        {
        	strcpy(finalroom, "Duplex");
        	total=total+400;
        }
        else
        {
        	printf("Not an valid number!\n");
        }
        if (medHis==1)
        {
        	strcpy(finalmed, "Yes");
        }
        else if (medHis==2)
        {
        	strcpy(finalmed, "No");
        }
        else
        {
        	printf("Not an valid number!\n");
        }
        if (gender==1)
        {
        	strcpy(resultgen, "Male");
        }
        else if (gender==2)
        {
        	strcpy(resultgen, "Female");
        	total=(total-total/10);
        }
        else
        {
        	printf("Not an valid number!\n");
        }
        if (studentType==1)
        {
        	strcpy(stutype, "Engineering");
        }
        else if (studentType==2)
        {
        	strcpy(stutype, "Medical");
        	total=(total-total/10);
        }
        else
        {
        	printf("Not an valid number!\n");
        }
        if (reffral==1)
        {
        	strcpy(refstutes, "Yes");
        	total=(total-total/5);
        }
        else if (reffral==2)
        {
        	strcpy(refstutes, "No");
        }
        else
        {
        	printf("Not an valid number!\n");
        }
        total=total-500;
        total=total*month;
        /** final biil print **/
        printf("\n\n\n");
        printf("\n------------------------------------------------------------------");
		printf("\n                       New student");
		printf("\n------------------------------------------------------------------");
		printf("\n Student name:               >>> %s\n",studentName);
		printf("\n Student Contact number:     >>> %llu\n",studentCont);
		printf("\n Age:                        >>> %d\n",age);
		printf("\n Gender:                     >>> %s\n",resultgen);
		printf("\n Medcal History:             >>> %s\n",finalmed);
		printf("\n Collage Name:               >>> %s\n",collageName);
		printf("\n Student Type:               >>> %s\n",stutype);
		printf("\n Room Type:                  >>> %s\n",finalroom);
		printf("\n Reffral status:             >>> %s\n",refstutes);
		printf("\n Room number                 >>> %d\n",roomId);
		printf("\n No. of month                >>> %d\n",month);
        printf("\n Advance                     >>> 750");
        printf("\n------------------------------------------------------------------");
        printf("\n                      FEATURES OF THIS ROOM                       ");
        printf("\n------------------------------------------------------------------");
        printf("\n\n Room Type            >>> %s",finalroom);
        printf("\n\n Room charges         >>> Rs.2500 per month");
        printf("\n\n 1. Bed               >>> 1");
        printf("\n\n 2.Capacity           >>> 4");
        printf("\n\n 3.Balcony available ");
        printf("\n------------------------------------------------------------------");
        printf("\n                     ADDITIONAL FEATURES                        ");
        printf("\n------------------------------------------------------------------");
        printf("\n\n 1.A/C  available ");
        printf("\n\n 2.Geyser available");
        printf("\n\n 3.Study Table available");
        printf("\n------------------------------------------------------------------");
        printf("\n Total cost of leaving as per your deteils:     >>> %d only",total);
        printf("\n------------------------------------------------------------------");
        printf("\n NOTE :- There must be desipline in the hostel.\n ");
        printf("\n NOTE :- No illegal(drugs,alcohol,cigrestes,etc...) things should be come in the hostel.");
        printf("\n------------------------------------------------------------------");
	}

	else if (a==2)
	{
		printf("\nEnter the following deteils for knowing your total bill.\n");
		printf("Student name:\n");
		printf("hotel@ms:-$ ");
		scanf("%s",&studentName);
		printf("Contact no.:\n");
		printf("hotel@ms:-$ ");
		scanf("%d",&studentCont);
		printf("Age:\n");
		printf("hotel@ms:-$ ");
		scanf("%d",&age);
		printf("Gender:\n");
		printf("1. Male\n");
		printf("2. Female\n");
		printf("hotel@ms:-$ ");
		scanf("%d",&gender);
		printf("Medical History:\n");
		printf("1. Yes\n");
		printf("2. No\n");
		printf("hotel@ms:-$ ");
		scanf("%d",&medHis);
		printf("Collage name:\n");
		printf("hotel@ms:-$ ");
		scanf("%s",&collageName);
		printf("Student Type:\n");
		printf("1. Engineering\n");
		printf("2. Medical\n");
		printf("hotel@ms:-$ ");
		scanf("%d",&studentType);
		printf("Room Type:\n");
		printf("1. Single\n");
		printf("2. Duplex\n");
		printf("hotel@ms:-$ ");
		scanf("%d",&roomType);
		printf("Room ID:\n");
		printf("hotel@ms:-$ ");
		scanf("%d",&roomId);
		printf("Pass Status:\n");
		printf("1. Yes\n");
		printf("2. No\n");
		printf("hotel@ms:-$ ");
		scanf("%d",&passstatus);
		printf("No. of months to stay:\n");
		printf("hotel@ms:-$ ");
		scanf("%d",&month);
		/** conditions **/
        if (roomType==1)
        {
        	strcpy(finalroom, "Single");
        }
        else if(roomType==2)
        {
        	strcpy(finalroom, "Duplex");
        	total=total+400;
        }
        else
        {
        	printf("Not an valid number!\n");
        }
        if (medHis==1)
        {
        	strcpy(finalmed, "Yes");
        }
        else if (medHis==2)
        {
        	strcpy(finalmed, "No");
        }
        else
        {
        	printf("Not an valid number!\n");
        }
        if (gender==1)
        {
        	strcpy(resultgen, "Male");
        }
        else if (gender==2)
        {
        	strcpy(resultgen, "Female");
        	total=(total-total/10);
        }
        else
        {
        	printf("Not an valid number!\n");
        }
        if (studentType==1)
        {
        	strcpy(stutype, "Engineering");
        }
        else if (studentType==2)
        {
        	strcpy(stutype, "Medical");
        	total=(total-total/10);
        }
        else
        {
        	printf("Not an valid number!\n");
        }
        if (passstatus==1)
        {
        	strcpy(passsta, "Yes");
        	total=0;
        }
        else if (passstatus==2)
        {
        	strcpy(passsta, "No");
        }
        else
        {
        	printf("Not an valid number!\n");
        }
        total=total*month;
        /** final biil print **/
        printf("\n\n\n");
        printf("\n------------------------------------------------------------------");
		printf("\n						Existing student");
		printf("\n------------------------------------------------------------------");
		printf("\n Student name:               >>> %s\n",studentName);
		printf("\n Student Contact number:     >>> %llu\n",studentCont);
		printf("\n Age:                        >>> %d\n",age);
		printf("\n Gender:                     >>> %s\n",resultgen);
		printf("\n Medcal History:             >>> %s\n",finalmed);
		printf("\n Collage Name:               >>> %s\n",collageName);
		printf("\n Student Type:               >>> %s\n",stutype);
		printf("\n Room Type:                  >>> %s\n",finalroom);
		printf("\n Pass status:                >>> %s\n",passstatus);
		printf("\n Room number                 >>> %d",roomId);
		printf("\n No. of month                >>> %d",month);
        printf("\n Advance                	   >>> 750");
        printf("\n------------------------------------------------------------------");
        printf("\n                      FEATURES OF THIS ROOM                       ");
        printf("\n------------------------------------------------------------------");
        printf("\n\n Room Type            >>> %s",finalroom);
        printf("\n\n Room charges         >>> Rs.2500 per month");
        printf("\n\n 1. Bed               >>> 1");
        printf("\n\n 2.Capacity           >>> 4");
        printf("\n\n 3.Balcony available ");
        printf("\n------------------------------------------------------------------");
        printf("\n                     ADDITIONAL FEATURES                          ");
        printf("\n------------------------------------------------------------------");
        printf("\n\n 1.A/C  available ");
        printf("\n\n 2.Geyser available");
        printf("\n\n 3.Study Table available");
        printf("\n------------------------------------------------------------------");
        printf("\n Total cost of leaving as per your deteils:     >>> %d only",total);
        printf("\n------------------------------------------------------------------");
        printf("\n NOTE :- There must be desipline in the hostel.\n ");
        printf("\n NOTE :- No illegal(drugs,alcohol,cigrestes,etc...) things should be come in the hostel.");
        printf("\n------------------------------------------------------------------");
	}
	else
	{
		printf("not an valid value.\n");
	}
	return 0;
}
