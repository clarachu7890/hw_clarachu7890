#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char const *argv[])
{
   int number;
   string word;

   if(argc<1)// no file name
   {
      return 1;
   }
   ifstream wordFile (argv[1]);
   if (!wordFile.is_open()) // file failed to open
   {
      return 1;
   }

   wordFile >> number;
   if (number<1)
   {
      return 0;
   }
   string *words= NULL;
   words=new string [number];

   for (int i=0; i <number; i++)
   {
      wordFile >> word;
      words[i]= word;
   }
   for (int i = number; i >= 0; i--)
   {
      cout << words[i] << endl;
   }
      delete [] words;
   
   words=NULL;
   wordFile.close();

   return 0;
}