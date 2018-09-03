#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char const *argv[])
{
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
   for (int i=0; i<10; i++)
   {
      wordFile >> word;
      cout << word << endl;
   }
   
   wordFile.close();

   return 0;
}