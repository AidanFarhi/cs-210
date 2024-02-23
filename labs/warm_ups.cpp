#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

/**
 * @brief Represents a node in a linked list for storing contact information.
 */
class ContactNode 
{
public:
    /**
     * @brief Constructor to initialize ContactNode with contactName and contactPhoneNumber.
     * @param contactName The name of the contact.
     * @param contactPhoneNumber The phone number of the contact.
     */
    ContactNode(string contactName, string contactPhoneNumber);

    /**
     * @brief Getter method to retrieve the contact name.
     * @return The contact name as a string.
     */
    string GetName();

    /**
     * @brief Getter method to retrieve the contact phone number.
     * @return The contact phone number as a string.
     */
    string GetPhoneNumber();

    /**
     * @brief Getter method to retrieve the next ContactNode in the linked list.
     * @return A pointer to the next ContactNode.
     */
    ContactNode* GetNext();

    /**
     * @brief Method to insert a new ContactNode after the current node.
     * @param node A pointer to the ContactNode to be inserted after the current node.
     */
    void InsertAfter(ContactNode* node);

    /**
     * @brief Method to print the details of the ContactNode.
     */
    void PrintContactNode();
   
private:
    /**
     * @brief Member variable to store the contact name.
     */
    string contactName;

    /**
     * @brief Member variable to store the contact phone number.
     */
    string contactPhoneNumber;

    /**
     * @brief Pointer to the next ContactNode in the linked list.
     */
    ContactNode* nextNodePtr;
};

// Constructor implementation
ContactNode::ContactNode(string contactName, string contactPhoneNumber)
{
    this->contactName = contactName;
    this->contactPhoneNumber = contactPhoneNumber;
    this->nextNodePtr = nullptr;
}

// Getter method implementation for contact name
string ContactNode::GetName() { return contactName; }

// Getter method implementation for contact phone number
string ContactNode::GetPhoneNumber() { return contactPhoneNumber; }

// Getter method implementation for the next ContactNode
ContactNode* ContactNode::GetNext() { return nextNodePtr; }

// Method implementation to insert a new ContactNode after the current node
void ContactNode::InsertAfter(ContactNode* node) { this->nextNodePtr = node; }

// Method implementation to print the details of the ContactNode
void ContactNode::PrintContactNode()
{
    cout << "Name: " << contactName << endl;
    cout << "Phone number: " << contactPhoneNumber << endl;
}

int main() 
{
    // Initialize 3 ContactNode pointers and strings to obtain inputs.
    ContactNode* contact1;
    ContactNode* contact2;
    ContactNode* contact3;
    string inputContactName;
    string inputContactPhoneNumber;
    
    // Get inputs and create ContactNode objects from inputs.
    getline(cin, inputContactName);
    getline(cin, inputContactPhoneNumber);
    contact1 = new ContactNode(inputContactName, inputContactPhoneNumber);

    getline(cin, inputContactName);
    getline(cin, inputContactPhoneNumber);
    contact2 = new ContactNode(inputContactName, inputContactPhoneNumber);

    getline(cin, inputContactName);
    getline(cin, inputContactPhoneNumber);
    contact3 = new ContactNode(inputContactName, inputContactPhoneNumber);

    contact1->PrintContactNode();
    contact2->PrintContactNode();
    contact3->PrintContactNode();

    return 0;
}
