#include <iostream>
#include <sstream>
#include <vector>
#include <fstream>
#include <string>
#include <map>
using namespace std;

int main ()
{
    fstream inputFile("movies.txt");
    string intialRead;
    string line;
    string line2;
    string line3;
    string h="Harry Potter and the Order of the Phoenix";
    int counter=0;
    getline(inputFile, line);
    int i=stoi(line);
    for (int j = 0; j < i; j++)
    {
    getline(inputFile, line2);
    getline(inputFile, line3);
     map<string,string> arrivalmap;
     arrivalmap[line2]=line3;
      for (map<string,string>::iterator it = arrivalmap.begin(); it != arrivalmap.end(); it++)
	    {
	    /*  map<string,string>::iterator it2 = arrivalmap.begin();
	      it2++;
	     if(it->first==it2->first)
         {

         }

       }
       */
     for (map<string,string>::iterator it = arrivalmap.begin(); it != arrivalmap.end(); it++)
	    {
	     cout << it->first <<"  "<< it->second <<endl;
       }
    }
}

}
/* if(arrivalmap.find(h)!=arrivalmap.end()&&counter>0)
         {
            cout << "element already existed"<<std::endl;
            string num = it->second;
         }
         else
         {
             counter++;
         }
         */
