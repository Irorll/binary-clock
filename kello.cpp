//irorll 0801126
#include <iostream>
#include <ctime>
#include <unistd.h>
using namespace std;

int tens(int a) { //returns the amount of tens
	int x = 0;

	while(a>=10) {
		a-=10;
		x++;
	}
	return x;
}

void print(int h, int min, string zero, string one, string space) {
	int tenhours = tens(h);
	int hours = h - (tenhours * 10);
	int tenminutes = tens(min);
	int minutes = min - (tenminutes * 10);

	string tenhourbits[2];
	string hourbits[4];
	string tenminutebits[3];
	string minutebits[4];
	
	switch (tenhours) {
		case 0: {
			tenhourbits[0] = {zero};
			tenhourbits[1] = {zero};
			break;
		}
		case 1: {
			tenhourbits[0] = {zero};
			tenhourbits[1] = {one};
			break;
		}
		case 2: {
			tenhourbits[0] = {one};
			tenhourbits[1] = {zero};
			break;
		}
		default: {
			tenhourbits[0] = {"F"};
			tenhourbits[1] = {"F"};
			break;	
		}
	}
	if(hours==10) hours=0;
	switch (hours) {
		case 0: {
			hourbits[0] = {zero};
			hourbits[1] = {zero};
			hourbits[2] = {zero};
			hourbits[3] = {zero};
			break;
		}
		case 1: {
			hourbits[0] = {zero};
			hourbits[1] = {zero};
			hourbits[2] = {zero};
			hourbits[3] = {one};
			break;
		}
		case 2: {
			hourbits[0] = {zero};
			hourbits[1] = {zero};
			hourbits[2] = {one};
			hourbits[3] = {zero};
			break;
		}
		case 3: {
			hourbits[0] = {zero};
			hourbits[1] = {zero};
			hourbits[2] = {one};
			hourbits[3] = {one};
			break;
		}
		case 4: {
			hourbits[0] = {zero};
			hourbits[1] = {one};
			hourbits[2] = {zero};
			hourbits[3] = {zero};
			break;
		}
		case 5: {
			hourbits[0] = {zero};
			hourbits[1] = {one};
			hourbits[2] = {zero};
			hourbits[3] = {one};
			break;
		}
		case 6: {
			hourbits[0] = {zero};
			hourbits[1] = {one};
			hourbits[2] = {one};
			hourbits[3] = {zero};
			break;
		}
		case 7: {
			hourbits[0] = {zero};
			hourbits[1] = {one};
			hourbits[2] = {one};
			hourbits[3] = {one};
			break;
		}
		case 8: {
			hourbits[0] = {one};
			hourbits[1] = {zero};
			hourbits[2] = {zero};
			hourbits[3] = {zero};
			break;
		}
		case 9: {
			hourbits[0] = {one};
			hourbits[1] = {zero};
			hourbits[2] = {zero};
			hourbits[3] = {one};
			break;
		}
		default: {
			hourbits[0] = {"F"};
			hourbits[1] = {"F"};
			hourbits[2] = {"F"};
			hourbits[3] = {"F"};
			break;		 
		}
	}
	
	switch (tenminutes) {
		case 0: {
			tenminutebits[0] = {zero};
			tenminutebits[1] = {zero};
			tenminutebits[2] = {zero};			
			break;
		}
		case 1: {
			tenminutebits[0] = {zero};
			tenminutebits[1] = {zero};
			tenminutebits[2] = {one};
			break;
		}
		case 2: {
			tenminutebits[0] = {zero};
			tenminutebits[1] = {one};
			tenminutebits[2] = {zero};
			break;
		}
		case 3: {
			tenminutebits[0] = {zero};
			tenminutebits[1] = {one};
			tenminutebits[2] = {one};
			break;
		}
		case 4: {
			tenminutebits[0] = {one};
			tenminutebits[1] = {zero};
			tenminutebits[2] = {zero};
			break;
		}
		case 5: {
			tenminutebits[0] = {one};
			tenminutebits[1] = {zero};
			tenminutebits[2] = {one};
			break;
		}
		default: {
			tenminutebits[0] = {"F"};
			tenminutebits[1] = {"F"};
			tenminutebits[2] = {"F"};
			break;
		}
	}

	if(minutes==10) minutes=0;
	switch (minutes) {
		case 0: {
			minutebits[0] = {zero};
			minutebits[1] = {zero};
			minutebits[2] = {zero};
			minutebits[3] = {zero};
			break;
		}
		case 1: {
			minutebits[0] = {zero};
			minutebits[1] = {zero};
			minutebits[2] = {zero};
			minutebits[3] = {one};
			break;
		}
		case 2: {
			minutebits[0] = {zero};
			minutebits[1] = {zero};
			minutebits[2] = {one};
			minutebits[3] = {zero};
			break;
		}
		case 3: {
			minutebits[0] = {zero};
			minutebits[1] = {zero};
			minutebits[2] = {one};
			minutebits[3] = {one};
			break;
		}
		case 4: {
			minutebits[0] = {zero};
			minutebits[1] = {one};
			minutebits[2] = {zero};
			minutebits[3] = {zero};
			break;
		}
		case 5: {
			minutebits[0] = {zero};
			minutebits[1] = {one};
			minutebits[2] = {zero};
			minutebits[3] = {one};
			break;
		}
		case 6: {
			minutebits[0] = {zero};
			minutebits[1] = {one};
			minutebits[2] = {one};
			minutebits[3] = {zero};
			break;
		}
		case 7: {
			minutebits[0] = {zero};
			minutebits[1] = {one};
			minutebits[2] = {one};
			minutebits[3] = {one};
			break;
		}
		case 8: {
			minutebits[0] = {one};
			minutebits[1] = {zero};
			minutebits[2] = {zero};
			minutebits[3] = {zero};
			break;
		}
		case 9: {
			minutebits[0] = {one};
			minutebits[1] = {zero};
			minutebits[2] = {zero};
			minutebits[3] = {one};
			break;
		}
		default: {
			minutebits[0] = {"F"};
			minutebits[1] = {"F"};
			minutebits[2] = {"F"};
			minutebits[3] = {"F"};
			break;
		}
	}

	cout<<"\033[4A"<<"\r"<<space<<" "<<hourbits[0]<<" "<<space<<" "<<minutebits[0]<<

			"\n"<<space<<" "<<hourbits[1]<<" "<<tenminutebits[0]<<" "<<minutebits[1]<<
		
			"\n"<<tenhourbits[0]<<" "<<hourbits[2]<<" "<<tenminutebits[1]<<" "<<minutebits[2]<<

			"\n"<<tenhourbits[1]<<" "<<hourbits[3]<<" "<<tenminutebits[2]<<" "<<minutebits[3]
			<<"\n"; //moves the cursor and replaces numbers
}

int main(int argc, char *argv[]){

	string zero = "0";	
	string one = "1";
	
	if(argc==2) {
		zero = argv[1];	
	}
	
	if(argc>2) {
		zero = argv[1];	
		one = argv[2];
	}

	if(zero.length() > one.length()) {	//makes zero and one the same length
		int diff = zero.length()-one.length();
		for(int a=0; a<diff; a++) {
			one.insert(0, " ");
		}
	} else if(zero.length() < one.length()) {
		int diff = one.length()-zero.length();
		for(int a=0; a<diff; a++) {
			zero.insert(0, " ");
		}
	} else {}

	string space = "";
	for(int a=0; a<zero.length(); a++) space += " ";

	int sleeptime=0;

	cout<<"\033[1A"<<"\033[K"; //removes the first line from terminal

	cout<<space<<" "<<zero<<" "<<space<<" "<<zero<<endl<<space<<" "<<zero<<" "<<zero<<" "<<zero<<endl<<zero<<" "<<zero<<" "<<zero<<" "<<zero<<endl<<zero<<" "<<zero<<" "<<zero<<" "<<zero<<"\n";	//prints the initial shape using zero

	while(1) {
		time_t t = time(0);	//grabs time and divides it into h min s
		tm* now = localtime(&t);
		int hours = now->tm_hour;
		int minutes = now->tm_min;
		int seconds = now->tm_sec;
		
		sleeptime = 60 - seconds;

		print(hours, minutes, zero, one, space);
		usleep((sleeptime * 1000000) - 1);
	}

	return 0;
}
/*
- Position the Cursor:
  \033[<L>;<C>H
     Or
  \033[<L>;<C>f
  puts the cursor at line L and column C.
- Move the cursor up N lines:
  \033[<N>A
- Move the cursor down N lines:
  \033[<N>B
- Move the cursor forward N columns:
  \033[<N>C
- Move the cursor backward N columns:
  \033[<N>D

  for example cout<<"\033[5A";
  moves the cursor up 5 spaces

  A up, B down, C right, D left


 \r moves cursor to the beginning of the line
*/
