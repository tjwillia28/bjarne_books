//
// Created by Tyler Williams on 2019-07-18.
//

#include <iostream>

using namespace std;

int main()
{
    double d = 0;
            while(cin>>d)
            {
                int i = d;
                char c = i;
                int i2 = c;

                cout << "d==" << d
                     << "\ti==" << i
                     << "\ti2==" << i2
                     << "\tchar(" << c
                     << ")\n";
            }

    return 0;
}
/* Results:
* d==2	i==2	i2==2	char()
* d==3	i==3	i2==3	char()
* d==130	i==130	i2==-126	char(�)
* d==128	i==128	i2==-128	char(�)
* d==10000	i==10000	i2==16	char()
* d==-2	i==-2	i2==-2	char(�)
* d==-3	i==-3	i2==-3	char(�)
* d==-128	i==-128	i2==-128	char(�)
* d==-130	i==-130	i2==126	char(~)
* d==-10000	i==-10000	i2==-16	char(�)
* d==56.9	i==56	i2==56	char(8)
* d==3.14159	i==3	i2==3	char()
* d==128	i==128	i2==-128	char(�)
* d==2	i==2	i2==2	char()
* d==3  i==3	i2==3	char()
* d==130    i==130	i2==-126	char(�)
*/

