#include "Time.h"
Time c_time;
int main( )
{
	
	cout << "Enter time " << endl;
	cin >> c_time.h;
	cin >> c_time.m;
	cin >> c_time.s;
	t_update();
	printf("%02d : %02d : %02d\n", c_time.h, c_time.m, c_time.s);
	system("pause");
	return 0;
}