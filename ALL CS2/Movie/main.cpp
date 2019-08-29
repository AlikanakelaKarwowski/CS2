#include <iostream>
#include <sstream>
#include <vector>
#include <fstream>
#include <string>
#include <map>
#include <iterator>
#include <algorithm>
using namespace std;

int main ()
{
    //create file stream
    fstream inputFile("movies.txt");
    //The number of movie reviews listed at the top of the file
    string LineCount;
    //String containing the Movie Name
    string MovieName;
    //String Containing the movie Review Rating
    string MovieRating;
    //Create a Multi Map to allow duplicate entries
    //Key is the movie name, and Element is the review score
    multimap<string,int> movieMap;
    //read the first line of the txt file
    getline(inputFile, LineCount);
    //convert the Line Count from a string to an int
    int i=stoi(LineCount);
    //read through the txt file and assign the movie name to key
    //and assign the review rating to the element
    for (int j = 0; j < i; j++)
    {
        getline(inputFile, MovieName);
        getline(inputFile, MovieRating);
        int lineToInt = stoi(MovieRating);
        //insert the pair into the movieMap
        movieMap.insert(pair<string, int> (MovieName, lineToInt));
    }
    
//----------------------Section Break ----------------------//

    //print out the list to make sure it read the file and sorted it correctly
    for (multimap<string,int>::iterator it2 = movieMap.begin(); it2 != movieMap.end(); it2++)
    {
        cout << it2->first <<"  "<< it2->second <<endl;
    }
    cout << "\n\n";
    
//----------------------Section Break ----------------------//
    //create an iterator 
    multimap<string,int>::iterator keyNum = movieMap.begin();
    //Loop through the map adding up
    for(int j = 0; j< i; j++ )
    {
        //Set the string value to search for
        string keyValue = keyNum->first;
        //increase the iterator to look for duplicates
        if(j == (i-1))
        {
            auto findIt = movieMap.equal_range(keyValue);
            cout << "Aggregate review score for \"" <<keyValue << "\" is, ";
            double score = 0;
            int counter=0;
            for (auto itr = findIt.first; itr != findIt.second; ++itr)
            {
                // It returns a pair representing the range of elements with key equal to
                score += itr->second;
                counter ++;
            }
            score /= counter;
            cout << score <<"/5\n";
        }
        else
        {
            keyNum++;
            //set the duplicate key to the next item to determine if we need to print out that key value
            string keyDuplicate = keyNum->first;
            if (keyValue == keyDuplicate)
            {
                //end the loop cause im cool like that :P
            }
            else
            {
                auto findIt = movieMap.equal_range(keyValue);
                cout << "Aggregate review score for \"" <<keyValue << "\" is, ";
                double score = 0;
                int counter=0;
                for (auto itr = findIt.first; itr != findIt.second; ++itr)
                {
                    // It returns a pair representing the range of elements with key equal to
                    score += itr->second;
                    counter ++;
                }
                score /= counter;
                cout << score <<"/5\n";
            }
        }
    }
    return 0;
}
