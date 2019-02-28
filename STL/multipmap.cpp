#include <iostream>
#include <map>

using namespace std;

#define NPRIMES 26

// alphabet in the order of frequency
char freq[] =  {'e','a','r','i','o','t','n','s','l','c',
                'u','d','p','m','h','g','b','f','y','w',
                'k','v','x','z','j','q'};

// sample anagrams
char *dict[] = {"acre", "care", "race", "rade", 
                "sender", "enders", "resend", "pender",
                "veto", "vote", "vet" }; 

void setMap(char **dict, int szDict, int primes[], char freq[], multimap<int, char*>&ana;)
{
    for(int i = 0; i < szDict; i++) {
	cout << "dict[" << i << "]=" << dict[i]<< endl;
        int mult = 1;
        for(int j = 0; j < strlen(dict[i]); j++) {
		for(int k =0; k < NPRIMES; k++) {
            	    if(freq[k]==dict[i][j]) {
          	        mult *= primes[k];
                        break;
		    }
		}	
	}
        ana.insert(pair<int, char*>(mult,dict[i]));
    }
}

void getPrimes(int a[])
{
    int numberOfPrimes = 0;
	for(int i = 2;i < 200;i++) {
    	        int count = 0;
                for(int j = 1;j < i/2+1;j++) {
        	        if(i % j == 0) count++;
                }
		if(count == 1) a[numberOfPrimes++] = i;
                if(numberOfPrimes > NPRIMES) break;
	}
}

void reversePrimes(int a[], int sz)
{
	for(int i = 0, j = sz - 1; i <= j; i++, j--) {
    	        int temp = a[i];
		a[i] = a[j];
                a[j] = temp;
	}
}

int main()
{
    // get 26 prime numbers 
    int *primes = new int[NPRIMES];
    getPrimes(primes);
    cout << NPRIMES << " prime numbers" << endl;
    for(int i = 0; i < NPRIMES; i++) cout << primes[i] << ",";
    cout << endl;

    // reverse the primes
    reversePrimes(primes, NPRIMES);
    cout << NPRIMES << " prime numbers in reverse" << endl;
    for(int i = 0; i < NPRIMES; i++) cout << primes[i] << ",";
    cout << endl;

    int sizeDict = sizeof(dict)/sizeof(dict[0]);
    multimap<int, char*> anagram;
	
    // set mapping
    setMap(dict, sizeDict, primes, freq, anagram);

    multimap<int, char*>::const_iterator it;
    for(it = anagram.begin(); it != anagram.end(); ++it) {
		cout << (*it).first << "=>" << (*it).second << endl;
    }
    return 0;
}