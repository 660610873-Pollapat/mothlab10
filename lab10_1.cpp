#include<iostream>
using namespace std;

int main(){
    int i = 0 ;
	char grade;
	int count[5] = {0,0,0,0,0}; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	cout << "Please input grade of each student (A-F) or input 0 to exit.\n";
	do{ 
		cout << "Student [" << i+1<< "]: ";
		cin >> grade; //The loop must be terminated when grade = '0'
		if(grade == 'A'){ count[0] +=1 ;
		 // if grade is A
			//Do something
		}else if(grade == 'B') {count[1] +=1 ;// if grade is B
			//Do something
		}else if(grade == 'C') {count[2] +=1 ;
		}else if(grade == 'D') {count[3] +=1 ;
		}else if(grade == 'F') {count[4] +=1 ;
		}else if(grade == '0' ) {break ;
		//and so on ... for grade = C, D, F	
		}else{ cout << "Wrong input. Please input again.\n" ; 
		i--;  // grade is wrong input
			//Do something
		} 
		i++;
	}while( grade != '0');
	cout << "In total " << i << " students.\n";
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";	
	cout << "C = " << count[2] <<", ";
	cout << "D = " << count[3] <<", ";	
	cout << "F = " << count[4] <<" ";	
	//	and so on ... for grade = C, D, F	
	
	//int arr[] = {0,0,0,0,0}
	//arr[0] +=1;
	return 0;
}
