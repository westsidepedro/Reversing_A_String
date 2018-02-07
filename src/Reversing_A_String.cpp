//============================================================================
// Name        : Reversing_A_String.cpp
// Author      : 
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
    {

    char text[] = "Joshua";

    int xChars = sizeof(text) - 1; // b/c we used " " there is a null term, so - 1

    char * pStart = text;		// text[0]
    char * pEnd = text + xChars - 1; // text[xChars-1] the -1 in this case is b/c arrays start at [0]

    cout << text << endl;
        cout << sizeof(text) << endl;
        cout << text[0] << endl;
        cout << text[2] << endl;
        cout << text[4] << endl;
        cout << text[5] << endl;
        cout << "start " << pStart << " " << &pStart << endl;
        cout << "end " << pEnd << " " << &pEnd << endl;

    cout << " " << endl;
    cout << "1-----------------------------------------------1" << endl;
    cout << " " << endl;

    while (pStart < pEnd)
	{

	char save = *pStart;	// what is in pStart is 'saved' in char save
	*pStart = *pEnd;// move what was in pEnd 'bucket' to the pStart 'bucket'
	*pEnd = save;	// put what's in the save 'bucket' to pEnd 'bucket'

	pStart++;			// pStart (text[0]) + 1... so text[1]
	pEnd--;				// pEnd (text[5]) - 1... so text[4]

	}

    cout << text << endl;

    cout << " " << endl;
    cout << "2-----------------------------------------------2" << endl;
    cout << " " << endl;

    cout << text << endl;
    cout << sizeof(text) << endl;
    cout << text[0] << endl;
    cout << text[2] << endl;
    cout << text[4] << endl;
    cout << text[5] << endl;
    cout << "start " << pStart << " " << &pStart << endl;
    cout << "end " << pEnd << " " << &pEnd << endl;

    cout << " " << endl;
    cout << "3-----------------------------------------------3" << endl;
    cout << " " << endl;


    return 0;
    }
