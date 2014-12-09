#include <iostream>
#include <map>

using namespace std;

int main() 
{
    int n;
    cin >> n;
    map<int, int> cntMap;
    
    int max = -1;
    for(int i = 0; i < n; i ++)
	{
        int tmp;
        int tcnt = 0;
		cin >> tmp;
	/*	if(cntMap.count(tmp) == 0) 
		{
		    tcnt = cntMap[tmp] = 1;	
		}
		else 
		{
			tcnt =  ++cntMap[tmp];
		}	*/
		tcnt = ++cntMap[tmp];
		if(tcnt > max) max = tcnt;
    }
	int res = -1;

	for(map<int,int>::iterator i = cntMap.begin(); i != cntMap.end(); i++)
	{
		if(i->second == max)
		{
			res = i->first;
			break;
		}
		
	}
	cout << res << endl;
	//cout << cntMap.count(10)<<endl;
	//cout << cntMap.count(15)<<endl;
	return 0;
	
}
