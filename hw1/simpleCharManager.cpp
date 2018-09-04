#include <cstddef>
#include <iostream>
#include "simpleCharManager.h"



using namespace std;
simpleCharManager::simpleCharManager(){
	for (int i = 0; i < BUF_SIZE; i++)
		{
			buffer[i]='\0';
		}
	 free_place=&buffer[0];
}

simpleCharManager::~simpleCharManager(){}
             
char* simpleCharManager::alloc_chars(int n){
	char* p=NULL;

	for(int i=0; i<BUF_SIZE;i++)
	{
		if(free_place==&buffer[i])
		{
			p=free_place;
			free_place=free_place+n;
			return p;
		}
	}
        return NULL;
}

void simpleCharManager::free_chars(char* p){
	free_place=p;
	for (int i = 0; i < BUF_SIZE; i++)
	{
		if(p==&buffer[i])
		{
			for (int j = i; j < BUF_SIZE-i; j++)
			{
				buffer[j]='\0';
				//size--;
			}
		}
	}
}

