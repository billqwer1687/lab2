#include"lab2.h"
using namespace std;

int main()
{
	char element[100];
	double answer[10];
	ifstream inputFile;
	inputFile.open("file.in",ifstream::in);
	ofstream outFile("file.out",ios::out);

	string line;
	int lineNumber=0;
	double *data=new double[100];
	int i = 0;
	while(getline(inputFile,line))
	{
		lineNumber++;
		istringstream token(line);
		double key;
		while(token>>key)
		{	
			answer[i]=key;
			cout<<answer[i]<<endl;
			i++;			
		}
	}
	double k=answer[0];
	double a=answer[1];
	double b=answer[2];
	double ea=0;
	double eb=0;
	for(int j=3;j<9;j++)
	{
		ea=1/(1+(pow(10,(b-a)/400)));
		eb=1/(1+(pow(10,(a-b)/400)));
		if(answer[j]==0)
		{
			a=a+k*(0-ea);
			b=b+k*(1-eb); 
		}
		if(answer[j]==1)
		{
			a=a+k*(1-ea);
			b=b+k*(0-eb);
		}	
		if(answer[j]==0.5)
		{
			a=a+k*(0.5-ea);
			b=b+k*(0.5-eb);
		}
	cout<<a<<" "<<b<<endl;
	
	
	outFile<<a<<"\t"<<b<<"\n";
	}
	return 0;
}
