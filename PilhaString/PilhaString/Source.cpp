#include <iostream>
#include <string>

struct pilhas
{
	int top = 0; 
	char frase [50];
};

void empilha(pilhas *p2, std::string fraseString)
{
	for (int i = 0; i < fraseString.size(); i++)
	{
		p2->frase[p2->top] = fraseString[i];
		p2->top++;
	}
}

void desempilha(pilhas *p2)
{
	for (int i = p2->top - 1; i >= 0; i--)
	{
		
		std::cout << p2->frase[i];
		p2->top--;
	}
	std::cout << " ";
	
}
int main()
{
	
	pilhas p1;
	std::string fraseString;
	std::cout << "Digite uma frase: " << std::endl;
	std::getline(std::cin, fraseString);


	for (int i = 0; i < fraseString.size(); i++)
	{
		
		p1.frase[p1.top] = fraseString[i];
		p1.top++;
		//empilha(&p1, fraseString);

		if (fraseString[i+1] == ' ' || fraseString[i+1]== '\0')
		{
			desempilha(&p1);
		}
	}
	std::cout << std::endl;
	

	system("pause");
	return 0;
}