#include <stdio.h>

int main()
{
	//25000
	double dogs = 2.5e4;

	printf("\n %f \n %e \n %g \n", dogs,dogs,dogs);
		// we wrote dogs three times because we need three
			//	arguments one for %f, %e and %g. 


		
	/*  	
	Now lets do it with 6 and
  	this time %g will use scientific notation
        */

	printf("Using a value thats greater than 5 to see what g will do: ");	

	double new_dogs = 2.5e6;
	 printf("\n %f \n %e \n %g \n",new_dogs,new_dogs,new_dogs);
	
	





	/*

	Conversion Characters
	----------------------
	
	%f - Decimal notation
 	%e - Scientific notation
	%g - Computer Decides whats best
	
	How does the computer decide?
		- If the exponent is less than -4 or more than 5
		 it will put in scientific notation "e" to represent.
		
		- Otherwise its just going to use decimal representation.
	*/	



		
	return 0; 



}
