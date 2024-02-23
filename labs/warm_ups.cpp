#include <iostream>
using namespace std;

class ContactNode 
{
public:
    ContactNode(string contactName, string contactPhoneNumber);
    string GetName();
    string GetPhoneNumber();
    ContactNode* GetNext();
    void InsertAfter(ContactNode* node);
    void PrintContactNode();
   
private:
    string contactName;
    string contactPhoneNumber;
    ContactNode* nextNodePtr;
};

ContactNode::ContactNode(string contactName, string contactPhoneNumber)
{
    this->contactName = contactName;
    this->contactPhoneNumber = contactPhoneNumber;
    this->nextNodePtr = nullptr;
}

string ContactNode::GetName() { return contactName; }

string ContactNode::GetPhoneNumber() { return contactPhoneNumber; }

ContactNode* ContactNode::GetNext() { return nextNodePtr; }

void ContactNode::InsertAfter(ContactNode* node) 
{
    ContactNode* temp = this->nextNodePtr;
    this->nextNodePtr = node;
    node->nextNodePtr = temp;
}

void ContactNode::PrintContactNode()
{
    cout << "Name: " << contactName << endl;
    cout << "Phone number: " << contactPhoneNumber << endl;
}

int main() 
{
    // Initialize variables.
    ContactNode* headNode;
    ContactNode* currentNode;
    ContactNode* contact1;
    ContactNode* contact2;
    ContactNode* contact3;
    string inputContactName;
    string inputContactPhoneNumber;
    int count;
    
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

    // Build a Linked List.
    headNode = contact1;
    contact1->InsertAfter(contact2);
    contact2->InsertAfter(contact3);

    // Print each person's info.
    currentNode = headNode;
    count = 1;
    while (currentNode != nullptr)
    {
        cout << "Person " << count << ": " << currentNode->GetName() << ", " << currentNode->GetPhoneNumber() << endl;
        currentNode = currentNode->GetNext();
        count++;
    }
    
    cout << endl;

    // Print the contact list.
    cout << "CONTACT LIST" << endl;
    currentNode = headNode;
    while (currentNode != nullptr)
    {
        currentNode->PrintContactNode();
        currentNode = currentNode->GetNext();
        cout << endl;
    }

    // Exit program.
    return 0;
}
