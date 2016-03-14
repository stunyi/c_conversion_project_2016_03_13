#include <stdio.h>

// Convert Cups to Pints
float convertCupsToPints(float cups){
	const int noOfCupsInOnePint = 2;
	return cups / (float)noOfCupsInOnePint;
}

// Convert Cups to Ounces
float convertCupsToOunces(float cups){
	const int noOfOuncesInOneCup = 8;
	return cups * (float)noOfOuncesInOneCup;
}

//Convert Ounces to Tablespoons
float convertOuncesToTableSpoons(float ounces){
	const int noOfTableSpoonsInOneOunce = 2;
	return ounces * (float)noOfTableSpoonsInOneOunce;
}

// Convert TableSpoons to TeaSpoons
float convertTableSpoonsToTeaSpoon(float tableSpoons){
	const int noOfTeaSpoonsInOneTableSpoon = 3;
	return tableSpoons * (float)noOfTeaSpoonsInOneTableSpoon;
}

// Display the Convertions
void displayConvertions(float noOfCups){
	printf("Cups = %f\n",noOfCups);
	printf("Pints = %f\n",convertCupsToPints(noOfCups));
	printf("Ounces = %f\n",convertCupsToOunces(noOfCups));
	printf("TableSpoons = %f\n",convertOuncesToTableSpoons(convertCupsToOunces(noOfCups)));
	printf("TeaSpoons = %f\n",convertTableSpoonsToTeaSpoon(convertOuncesToTableSpoons(convertCupsToOunces(noOfCups))));
}

// Main Function
main(){
	
	float n = 0;
	//printf("I work\n");
	
	for(;;){
		printf("Please enter the number of Cups to convert or enter (0) to exit:\n");
		scanf("%f",&n);
		if(n == 0){
			printf("Bye\n");
			break;
		}
		displayConvertions(n);
		n = 0;
	}
	return 0;
}


