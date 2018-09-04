#include <cstddef>
#include "simpleCharManager.h"



simpleCharManager::simpleCharManager(){

}

simpleCharManager::~simpleCharManager(){}
             
char* simpleCharManager::alloc_chars(int n){
	char buffer [BUF_SIZE];
	for(int i=0; i<BUF_SIZE;i++)
	{
		(buffer[0]+*8)
		{
			*p = buffer[i];
			*free_place= buffer[i];

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

void simpleCharManager::free_chars(char* p){
	for (int i = 0; i < count; ++i)
	{
		if(*p==buffer[i])
		{
			for (int j = i; j < BUF_SIZE-i; j++)
			{
				buffer[j]=NULL;
			}
		}
	}

}         
