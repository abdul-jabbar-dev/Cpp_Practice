#include <bits/stdc++.h>
using namespace std;

int main()
{

    string myStr = "Hello world";

    /*Capacity*/

    // myStr.max_size()                 // 4611686018427387903 Return maximum size of string
    // myStr.resize(5);                 // "Hello"  Resize string
    // myStr.capacity()                 // 15  Return size of allocated storage
    // myStr.clear();                   // ""  Clear string
    // myStr.empty();                   // false  Test if string is empty


    /*Element access:*/

    // myStr[3]                         // l  Get character of string
    // myStr.at(3)                      // l  Get character of string
    // myStr.back()                     // d  Access last character
    // myStr.front()                    // H  Access first character


    /*Modifiers:*/

    // myStr+" End"                      // "Hello world End"  <Append to string  with string>
    // myStr+'E'                         // "Hello worldE"  <Append to string  with Char>
    // myStr.append(" End")              // "Hello worldE"  <Append to string  with String>
    // myStr.push_back('d')              // "Hello worldd"  <Append character to string>
    // myStr.pop_back()                  // "Hello worl"  Delete last character
    // myStr.assign("this is new value") // "this is new value"  Assign content to string
    // myStr.insert(5," (With insert) ") // "Hello (With insert) world"  Insert into string
    // myStr.erase(2, 3)                 // "He world"  Erase characters from string
    // myStr.replace(0,5,"Hi")           // "Hi world"  Replace portion of string (start,end , replace string)
   

    /*String operations:*/

    // myStr.find('l')                   // 2  Find content in string
    // myStr.find_first_of('l')          // 2  Find character in string
    // myStr.rfind('l')                  // 9  Find last occurrence of content in string
    // myStr.find_last_of("wo")          // 7  Find character in string from the end
    // myStr.find_first_not_of("H")      // 0  Find absence of character in string
    // myStr.compare("Hello world")      // 0  Compare strings    Compare values{ 0 = left == right //  +1== left +> right // -1== left -> right}
    // string newString = myStr.substr(6,10); // "world"  Generate substring

    return 0;
}
