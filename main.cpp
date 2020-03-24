#include "Circle.h"
#include <iostream>


main(){
	double rad;
	std::string col;
	int n = 5;
	char l;

	Circle *circles = new Circle[n];

	for(int i = 0; i<n; ++i){
		do{
		std::cout<<"Do you want to enter the parameters of " << i << " circle yourself? [y/n]\n";
		std::cin>>l;
		}while(l!='n' and l!= 'y');
		if(l=='y'){
			std::cout<<"Radius: ";
			std::cin>>rad;
			circles[i].setRadius(rad);

			std::cout<<"Color: ";
			std::cin>>col;
			circles[i].setColor(col);
		}
	}

	for(int i = 0; i<n; ++i){
		circles[i].Describe();
	}	

	return 0;
}