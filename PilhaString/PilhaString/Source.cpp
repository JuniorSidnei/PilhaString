#include <iostream>
#include <string>

struct pilhas
{
	int top = 0; 
	char frase [50];
};

void desempilha(pilhas *p2)
{
	for (int i = p2->top - 1; i >= 0; i--)
	{

		std::cout << p2->frase[i];
		p2->top--;
	}
	std::cout << " ";

}
void empilha(pilhas *p2, std::string fraseString)
{
	for (int i = 0; i < fraseString.size(); i++)
	{
		p2->frase[p2->top] = fraseString[i];
		p2->top++;

		if (fraseString[i + 1] == ' ' || fraseString[i + 1] == '\0')
		{
			desempilha(p2);
		}
	}
}


int main()
{
	
	pilhas p1;
	std::string fraseString;
	std::cout << "Digite uma frase: " << std::endl;
	std::getline(std::cin, fraseString);

	empilha(&p1, fraseString);
	std::cout << std::endl;
	

	system("pause");
	return 0;
}