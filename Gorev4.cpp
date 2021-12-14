#include <iostream>
#include <string>
struct Country;
struct Province{
	std::string name;
	Country *domain;
};
struct Country{
	std::string name;
	Province *capital;
};
int main(){
	Country turkey;
	Province istanbul;
	Province ankara;
	turkey.name="turkey";	
	ankara.name="ankara";
	ankara.domain=&turkey;
	turkey.capital=&ankara;
	istanbul.name="istanbul";
	istanbul.domain=&turkey;
	std::cout <<(*(*(istanbul.domain)).capital).name;
}
