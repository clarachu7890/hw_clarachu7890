#include "flexCharManager.h"

flexCharManager::flexCharManager(){
 	for (int i = 0; i < BUF_SIZE; i++)
		{
			buffer[i]='\0';
		}
	 free_place=&buffer[0];
}

flexCharManager::~flexCharManager(){
}
             
char* flexCharManager::alloc_chars(int n){
	char buffer [BUF_SIZE];
	char* p=NULL;
	int size=0;
	for (int i=0; i< BUF_SIZE; i++)
	{
		buffer[i]=NULL;
	}
	for(int i=0; i<BUF_SIZE;i++)
	{
		if (buffer[i]==NULL)
		{
			&p = buffer[i];
			&free_place= buffer[i];

			for (int j = 0; j < n ; j++)
			{
				if(buffer[i+j]==NULL)
				{
					free_place++;
					size++;
				}
			}
		}
		return p;
	}


       return NULL;
}

void flexCharManager::free_chars(char* p){

}         
