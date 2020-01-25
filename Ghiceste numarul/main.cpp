#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
  short nrSecret;
  nrSecret = 675;
  short nrPresupus; {

  cout << "Spor la ghicit! Range 1 - 1000" << endl;

  do {

    cin >> nrPresupus;
    if (nrPresupus < nrSecret) {
    cout << "Mai incearca, esti pe aproape, e mic" << endl;
    }
    else if (nrPresupus > nrSecret) {
    cout << "Mai incearca, esti pe aproape, si totusi e prea mare" << endl;

    }
    else if (nrPresupus == nrSecret) {
        cout << "Bravo! Ai ghicit! \nNumarul secret era 675 \nBem o bere?" << endl;
        system ("PAUSE");
    }


}
      while (nrPresupus != nrSecret);

  }


}

