#include <set>
#include <iostream>
using namespace std;


template<typename T>
void DisplayContents(const T& container){

    for(auto element = container.cbegin(); element != container.cend(); ++element){

        cout << *element << ' ';
    }

    cout << endl;
}

struct ContactItem{

    string name;
    string phoneNum;
    string displayAs = name + ": " + phoneNum;

    ContactItem(const string& nameInit, const string& phone){

        name = nameInit;
        phoneNum = phone;
        displayAs = name + ": " + phoneNum;
    }

    // used by set::find() given contact list item
    bool operator == (const ContactItem& itemToCompare)const{

        return (itemToCompare.name == this->name);
    }

    // used to sort
    bool operator < (const ContactItem& itemToCompare)const{

        return (this->name < itemToCompare.name);

    }

    // Used in DisplayContents via cout 
    operator const char*() const{

        return displayAs.c_str();
    }
};


int main(){

    set <ContactItem> setContacts;
    setContacts.insert(ContactItem("Jack Welsch", "+1 7889879879"));
    setContacts.insert(ContactItem("Bill Gates", "+1 97789787998"));
    setContacts.insert(ContactItem("Angi Merkel", "+49 234565466"));
    setContacts.insert(ContactItem("Vlad Putin", "+7 66454564797"));
    setContacts.insert(ContactItem("Ben Affleck", "+1 745641314"));
    setContacts.insert(ContactItem("John Travolta", "91 234 4564 789"));
    setContacts.insert(ContactItem("Dan Craig", "+44 123641976"));

    cout << "Enter a name ou wish to delete: ";
    string inputName;
    getline (cin, inputName);

    auto contactFound = setContacts.find(ContactItem(inputName, ""));
    if(contactFound != setContacts.end()){

        setContacts.erase(contactFound);
        cout << "Displaying contents after erasing " << inputName << endl;
        DisplayContents(setContacts);
    }
    else

        cout << "Contact not found!" << endl;

    return 0;
}