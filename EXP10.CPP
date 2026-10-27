#include<iostream>
#include<fstream>
using namespace std;
int main()
{
ofstream fout("example.doc");
fout<<"welcome to file handling in c++\n";
fout<<"word.doc";
fout.close();

ifstream fin("example.doc");
string line;
getline(fin,line);
cout<<line<<endl
;
fin.close();
return 0;
}
