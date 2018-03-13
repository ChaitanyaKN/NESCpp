/******************************************************************************
 * AUTHOR          : Joji Thomas
 * STUDENT ID      : 1056113
 * ASSIGNMENT # 3  : Movie List Intro to Linked Lists
 * CLASS           : CS1B
 * SECTION         : MW: 6:30-9:50
 * DUE DATE        : 3/14/17
 *****************************************************************************/
#include "as3.h"
void ReadLL(movie *h);
int main()
{

/******************************************************************************
 *
 * ----------------------------------------------------------------------------
 * 	This Program will read in input from a input file into a linked list
 * 	and then the program will word wrap the synopsis of every movie in the
 * 	file, once the lines are word wrapped then the movie will be output into
 * 	a output file properly formatted.
 * ----------------------------------------------------------------------------
 * INPUT
 * The following information will be input for the program
	movie movieInfo - the sturuct that will be accounting for everything
	that relates to the movie synosis, actors and  more.
******************************************************************************
OUTPUTS
* The following information will be Output for the program

*
*******************************************************************************
CONSTANTS USED:
-------------------------------------------------------------------------------

*******************************************************************************/
	//variables

	string outputFileName;      //IN.  & OUT  - this is the output file name
	string inputFileName;       //IN.  & OUT  - this is the input file name
	string fileName;
	ifstream inFile;                    //INPUT FILE declaration
    ofstream outfile;                     //OUTPUT FILE declarati
	string str;
	string synopsis;
	int maxCount;

	movie *head;
	movie movieInfo;
	head = &movieInfo;


	//Print Header function
	PrintHeaderToConsoleOrFile("Movie List Intro to Linked Lists", 'A',
							   3, "1056113", "Joji", cout);
//
//	inputFileName  = UserPrompt("What input file would you like to use?  ");
//
//	outputFileName = UserPrompt("What output file would you like to use? ");
//	cout << endl << endl;

//	cout << "Reading file.....\n\n";
//	cin.ignore(1000,'\n');
	
 //   outfile.open(outputFileName.c_str());

		 //prints to output file
  PrintHeaderToConsoleOrFile("Movie List Intro to Linked Lists", 'A', 3, "1056113",
				 	 	 	 "Joji", outfile);


   CreateList(head,inputFileName);


   //ReadLL(head);
//	cout << setfill('*') << setw(75);
//	cout << " \nMOVIE # 1 "<< setw(20) << "Title: Antoine Fisher\n";
//	cout << setfill('-')   << setw(75);
//	cout << "\nYear: 2002" << setw(10) << " Rating: 7";
//	cout << setfill('-')   << setw(79)     << endl;
//	cout << "\nLeading Actor: " << setw(15) << "Genre 1: " << "Biography";

    OutputList(head);

//	wordwrap(str,maxCount);





outfile.close();

return 0;
}
void ReadLL(movie *h) {
	movie *v;
	v = h;
	while (v != NULL) {

		cout << v->actor;
		v = v->next;
	}

}