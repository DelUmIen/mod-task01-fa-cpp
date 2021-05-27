#include <iostream>
#include <math.h>
using namespace std;

unsigned int faStr1(const char *str)
{
  int i = 0;
  int counter = 0;
	bool word_check = false;
	bool temp = false;
	while (str[i] != '\0')
	{
		if (str[i] != ' ' && word_check == false)
			word_check = true;
		if (word_check && str[i] >= 48 && str[i] <= 57)
			temp = true;
		if (str[i] == ' ' && word_check == true)
		{
			if(temp == false)
				counter++;
			word_check = false;
      temp = false;
		}
		i++;
	}
	if (word_check == true && temp == false)
		counter++;
	return counter;
}


unsigned int faStr2(const char *str)
{
  int i = 0; 
  int counter = 0;
	bool word_check = false;
	bool temp = false;
	while (str[i] != '\0')
	{
		if (str[i] != ' ' && word_check == false)
		{
			word_check = true;
			if (str[i] >= 65 && str[i] <= 90)
				temp = true;
		}
		else
		{
			if (temp && !(str[i] >= 97 && str[i] <= 122) && str[i] != ' ')
				temp = false;
		}
		if (str[i] == ' ' && word_check == true)
		{
			if (temp == true)
				counter++;
			word_check = false;
      temp = false;
		}
		i++;
	}
	if (word_check == true && temp == true)
		counter++;
	return counter;
}


unsigned int faStr3(const char *str)
{
	int i = 0;
	bool word_check = false;
	double middle_counter = 0;
	double word_counter = 0;
	double middle_number = 0;
	while (str[i] != '\0')
	{
		if (str[i] != ' ' && word_check == false)
			word_check = true;
		if (str[i] == ' ' && word_check == true)
		{
			word_counter++;
			word_check = false;
		}
		else
			if (word_check == true)
				middle_counter++;
		i++;
	}
	if (word_check == true)
		word_counter++;
	if (word_counter != 0)
	{
		middle_number = round(middle_counter/word_counter);
		return middle_number;
	}
}
