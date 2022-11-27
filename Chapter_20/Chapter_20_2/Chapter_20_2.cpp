#include <map>
#include <iostream>
#include <string>

using namespace std;

// Type define the map and multimap defintion for easy readability

typedef map<int, string>MAP_INT_STRING;
typedef multimap<int, string>MMAP_INT_STRING;

template<typename T>
void DisplayContents(const T& cont){
    
    for (auto element = cont.cbegin(); element != cont.cend(); ++element){
        cout << element->first << " -> " << element->second << endl;
        
    }
        cout << endl;
}

int main(){

    MAP_INT_STRING mapIntToStr;

    // Insert key-value pairs into the map using value_type
    mapIntToStr.insert(MAP_INT_STRING::value_type(3, "Three"));

    // Insert key-value pairs into the map using make_pair
    mapIntToStr.insert(make_pair(-1, "Minus One"));

    // Insert a pair obejct directly
    mapIntToStr.insert(pair<int, string>(1000, "One Thousand"));

    // Use an array like syntax for inserting key-value pairs
    mapIntToStr[1000000] = "One Million";

    cout << "The map contains " << mapIntToStr.size();
    cout << " key-value pairs. They are: " << endl;
    DisplayContents(mapIntToStr);

    // instanciate a multimap that is copy of a map
    MMAP_INT_STRING mmapIntToStr(mapIntToStr.cbegin(), mapIntToStr.cend());

    //The insert function works the same way for multimap too
    // A multimap can store duplaictes - insert a duplicate
    mmapIntToStr.insert(make_pair(1000, "Thousand"));

    cout << "The multimap contains " << mmapIntToStr.size();
    cout << " key-value pairs. They are: " << endl;
    cout << "The elements in th emultimap are: " << endl;
    DisplayContents(mmapIntToStr);

    // The multimap can return number of pairs with same key
    cout << "The number of pairs in th emultimap with 1000 as their key: " << mmapIntToStr.count(1000) << endl;

    return 0;
}