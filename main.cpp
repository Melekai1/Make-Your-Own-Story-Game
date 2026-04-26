#include <iomanip>
#include <iostream>
#include <string>
using namespace std;
int main() {

  string once_upon_a_time; // The beginning of the story
  string every_day;        // The second part of the story
  string one_day;          // The third part of the story
  string after_that;       // The fourth part of the story
  string finally;          // The final part of the story
  string title;            // The title of the story
  cout << "This is a program in which you can create your own story.\n\n";
  cout << "There are 5 parts to it:\n\n";
  cout << "1. \"Once upon a time\" in which afterwards you write what happens "
          "in the beginning ";
  cout << "of the story " << endl;
  cout << "2. \"Every Day\" in which you state what the main character does in "
          "their day-to-day ";
  cout << "life " << endl;
  cout << "3. \"Until one day\" in which you describe something different that "
          "happens to ";
  cout << "the main character. " << endl;
  cout << "4. Then you describe everything that happens from that point on. "
       << endl;
  cout << "5. \"Finally\" in which you describe what happens at the end of the "
          "story "
       << endl;
  cout << "6. After your story is complete, it will be printed out.\n\n";
  cout << "Alright, let's get started.\n\n";
  cout << "1. Once upon a time, ";
  getline(cin, once_upon_a_time);
  cout << "2. Every day, ";
  getline(cin, every_day);
  cout << "3. One day, ";
  getline(cin, one_day);
  cout << "4. After that, ";
  getline(cin, after_that);
  cout << "5. Finally, ";
  getline(cin, finally);
  cout << "\nCongratulations, you have written a short story. " << endl;
  cout << "All we need now is a title:\n";
  getline(cin, title);
  cout << "Now let's see the story printed in full:\n\n";
  cout << setw(30) << title << "\n\n";
  cout << "Once upon a time, " << once_upon_a_time << endl;
  cout << "Every day, " << every_day << endl;
  cout << "One day, " << one_day << endl;
  cout << "After that, " << after_that << endl;
  cout << "Finally, " << finally << endl;

  return 0;
} //end of main