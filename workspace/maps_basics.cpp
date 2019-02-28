#include <iostream>
#include <vector>
#include <map>
using namespace std;
/*
int main(int argc, char *argv[])
{
  vector<int> all_zips;

  all_zips.push_back(91129);
  all_zips.push_back(500038);
  all_zips.push_back(9129);
  all_zips.push_back(12345);
  all_zips.push_back(6789);
  all_zips.push_back(6789);
  all_zips.push_back(23456);

  // Create a map of zipcode and the count of its occurrences
  map<int,int> zips;

  for(vector<int>::iterator it = all_zips.begin(); it != all_zips.end(); ++it)
  {
	  int zip = *it;
	  if(zips.find(zip) == zips.end())
	  {
		  zips.insert(make_pair(zip,1));
	  }
	  else
	  {
		  zips[zip]++; //just increment the value
	  }
  }

  // Note: In the above we could have created the map entries as we
  //       read in the zips from 'cin' but we wanted you to practice
  //       iterating over a vector.

  cout << "Zip code, occurrence table" << endl;

  // Now write the for loop to iterate over the map entries
  for(map<int,int>::iterator it = zips.begin(); it != zips.end(); ++it)
  {
	  cout << it->first  << " occurs " << it->second  << " times" << endl;
  }

  return 0;

}*/
