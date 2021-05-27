/*4: Write a program that will read each line in a file and store it  
in another file with the sequence reversed, that is, the first line in file one should be 
the last line in file two and so on.  */
 
#include <bits/stdc++.h>
using namespace std;
void towerOfHanoi(int n, char from_rod,char to_rod, char aux_rod)
{
	if (n == 1)
	{
	cout << "Move disk 1 from rod " << from_rod <<" to rod " << to_rod<<endl;
		return ;
	}
	towerOfHanoi(n - 1, from_rod, aux_rod, to_rod);
	cout << "Move disk " << n << " from rod " << from_rod <<" to rod " << to_rod << endl;
	towerOfHanoi(n - 1, aux_rod, to_rod, from_rod);
}
int main()
{
	int n = 4; 
	towerOfHanoi(n, 'A', 'C', 'B');  
	return 0;
}
