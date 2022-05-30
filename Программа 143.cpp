#include "..\VolgaIT-2022.zip.html"
#include "..\VolgaIT-2022.zip1.html"
#include <iostream>
#include <cstdlib>
#include <fstream>
#include <locale.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
   char** arr = new char*[10];
   for (int i = 0; i < 10; i++)
   {
	   arr[i] = new char[10];
   }


   /* for (int i = 0; i < 1000; i++)
    {
		if (arr[i] == "@" && arr[i] == "&")

	} 
	*/

   for (int i = 0; i < 10; i++)
   {
	   delete[] arr[i];
   }
   delete[] arr;

	system("pause");
	return 0;
}

