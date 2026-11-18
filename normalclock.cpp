//irorll 181126
#include <iostream>
#include <ctime>
#include <unistd.h>
using namespace std;

int main(){

	time_t t = time(0);
	tm* now = localtime(&t);
	int initialSecond = now->tm_sec;	

	while(1){ //waits for the second to change for the first time
		time_t t = time(0);
		tm* now = localtime(&t);	
		if(initialSecond != now->tm_sec) break;	
	}

	while(1){
		time_t t = time(0);
		tm* now = localtime(&t);
		string hours = to_string(now->tm_hour);
		string minutes = to_string(now->tm_min);
		string seconds = to_string(now->tm_sec);

		if(hours.length() == 1) hours.insert(0, "0");
		if(minutes.length() == 1) minutes.insert(0, "0");
		if(seconds.length() == 1) seconds.insert(0, "0");

		cout<<"\033[1A"<<"\033[K"<<hours<<":"<<minutes<<":"<<seconds<<"\n";

		usleep(1000000);
	}

	return 0;
}
