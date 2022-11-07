#include "src/artist.h"
#include "src/artistList.h"

using namespace std;

int main() {

  ARTIST *a = nullptr;
  ALIST *l = nullptr;
  string genre_a1[AR_LEN] = {"pop", "soul", "funk", "r&b"};
  string genre_a2[AR_LEN] = {"pop", "disco"};
  string genre_a3[AR_LEN] = {"pop", "electronic dance"};
  string genre_a4[AR_LEN] = {"rock"};

  l = newArtistList();
  a = newArtist("1234", "bruno mars", 50000, genre_a1, 23);
  appendArtist(l, a); //bruno mars
  cout << "\n ***************bruno******";
  printArtistList(l);

  a = newArtist("1235", "madonna", 80000, genre_a2, 65);
  appendArtist(l, a); // bruno mars, madonna
  cout << "\n**************bruno & madonna";
  printArtistList(l);

  a = newArtist("1255", "lady gaga", 90000, genre_a3, 15);
  prependArtist(l, a);// lady gag, bruno mars, madonna
  cout << "\n*******************lady gaga, bruno mars, madonna\n";
  printArtistList(l);

  removeFirstArtist(l);// bruno mars, madonna
  cout << "\n**********bruno mars, madonna\n";
  printArtistList(l);

  a = newArtist("2899", "the beatles", 90000000, genre_a4, 3);
  appendArtist(l, a);// bruno mars, madonna,the beatles 
  cout << "\n**********bruno mars, madonna, the beatles\n";
  printArtistList(l);

  removeLastArtist(l);
  cout << "\n********bruno mars, madonna\n";
  printArtistList(l);
  
  a = newArtist("3999", "the who", 400000, genre_a4, 42);
  prependArtist(l, a);
  cout << "\n*******the who, bruno mars, madonna";
  cout << "\nprinting new updated list...\n";
  printArtistList(l);

  deleteArtistList(l);
  l = nullptr;
  a = nullptr;
  return 0;
}
