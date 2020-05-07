#include <iostream>
using namespace std;
#define max 500
typedef class conference{
public:
 int number;
 int start;
 int finish;
}cf;


int main(){
 
 cf con[max];
 int loop;
 int finish = -1;
 int num[500] = { 0, };
 int num_count = 0;


	 cin >> loop;
	 for (int i = 0; i < loop; i++){
	  	cin >> con[i].number >> con[i].start >> con[i].finish;
	 }
	 
	 for (int j = 0; j < loop ; j++){
	  	for (int i = 0; i < loop -1-j; i++){
	  		 if (con[i].finish > con[i + 1].finish){
		    cf temp = con[i];
		    con[i] = con[i+1];
		    con[i+1] = temp;
		   }
		}
	 }
 
	 for (int i = 0; i < loop; i++)
	 {
		  if (con[i].start >= con[finish].finish)
		  {
		   num[num_count++] = con[i].number;
		   finish = i;
		  }
	 }
	
	 printf("%d\n", num_count);
	 
	 for (int i = 0; i <= num_count-1; i++){
	  printf("%d ", num[i]);
	}
}

