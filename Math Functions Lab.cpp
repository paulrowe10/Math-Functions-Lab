//Paul Rowe
//12/3/242
//Math Functions Lab
//Extra: N/A

#include <iostream>
using namespace std;
#include <cmath>

int main()
{
    cout << "Binah Ezra is building a ramp that needs to span 6 feet horizontally and 8 feet vertically. What is the length of the diagonal ramp?" << endl;
    int ans1 = hypot(6, 8);
    //finds the hypotenuse of a triangle
    cout << "Answer: " << ans1 << " feet" << endl;
    cout << "-----------------------" << endl;
    cout << "Dale Bendsak is making a square painting.The area of the painting is 144 square inches. What is the length of one side of the painting?" << endl;
    int ans2 = sqrt(144);
    //finds the square root of an inputted integer
    cout << "Answer: " << ans2 << " inches" << endl;
    cout << "-----------------------" << endl;
    cout << "Cat Rogers is observing the growth of a single bacteria. If the bacteria doubles every hour and it starts at 1, how much bacteria will there be after 8 hours?" << endl;
    int ans3 = pow(2, 8);
    //takes an integer to the power of another
    cout << "Answer: " << ans3 << " bacteria" << endl;
    cout << "-----------------------" << endl;
}
