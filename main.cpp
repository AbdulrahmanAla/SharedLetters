#include <iostream>
#include <string>
using std::cin, std::cout, std::endl, std::string, std::size_t;


string SharedLetters(const string &word1, string word2, const string  * const word3) {
   string result ="";
   
   long unsigned int i = 0;
   while ( (i< word1.size()) || (i <word2.size()) || ( i < (*word3).size()) ) {

      if ( (i >= word2.size()) && (i>= (*word3).size()) && (i >= word1.size())) {
         result = result + "0,";
         break;
      }
      else if ((i >= word2.size())&& (i< word1.size()) && (i< (*word3).size()) ) {
         if ((word1.at(i) == (*word3).at(i)) ) {
            result= result+ "1,";
         }
         
      }
      else if (i >= (*word3).size()&& (i< word1.size()) && (i< (word2).size()) ) {

         if ((word1.at(i) == word2.at(i)) ) {
            result= result+ "1,";
         }
      }
      else if (i >= word1.size() && (i< word2.size()) && (i< (*word3).size())) {
         if ((word2.at(i) == (*word3).at(i)) ) {
            result= result+ "1,";
         }
         else { //made changeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee
            result= result+ "0,";
         }
         
      }
      else if ( (i< word1.size()) && (i <word2.size()) && ( i < (*word3).size()) ){

         if ((word1.at(i) == word2.at(i)) && (word1.at(i) == (*word3).at(i))){
            result = result +"3,";
         }
         else if( (word1.at(i) == word2.at(i)) || ((word1.at(i) == (*word3).at(i))) || ((word2.at(i) == (*word3).at(i)))) {
            result = result +"1,";
         }
         else if( (word1.at(i) != word2.at(i)) && ((word1.at(i) != (*word3).at(i))) && ((word2.at(i) != (*word3).at(i)))) {
            result = result +"0,";
         }

      }
      else{
         result = result +"0,";
      }

      i++;
   }
   return result;
}

int main() {

   string word1;
   string word2;
   string word3;
   cin >>word1;
   cin >>word2;
   cin >>word3;
   cout << SharedLetters(word1,word2, &word3);

}