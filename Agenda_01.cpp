#include <io#include <iostream>
#include <string.h>



class Contact
{
private:
	Contact ();
	char* m_name;
	int*  m_number;
	char* m_email;
public:
	  void Contact::SetName( char* name ) { m_name = name };
        void setNumber( int* number) { m_number = number };
        void Setemail ( char* email ) { m_email = email };
        const char* GetName( ){ return m_name };
        const int* GetNumber( ){ return m_number };
        const char* GetEmail( ){ return m_email };
	
void Contact()
{
   cout << "Name: " << m_name << '\n';
   cout << "Number: " << m_number << '\n';
   cout << "Email: " << m_email<< '\n';
}


	~Contact();
	
};





class Phonebook
{
public:
	Phonebook(char *Contact,char listContacts,);

     addContact(Contact);
     listContacts();
      
      void Showphonebook(vector<Person> Phonebook){//moestrar todo el contenido

      for(int i=0;i<phonebook.size();i++){
         cout<<"Nombre: "<<phonebook[i].nombre<<" Apellido: "<<phonebook[i].apellido<<
         " Telefono: "<<phonebook[i].telefono<<" Email: "<<phonebook[i].email<<endl;

  cout<<"Add contact"<<endl;
  cout<<"Modify contact"<<endl;
  cout<<"Search contact"<<endl;
  cout<<"Exit"<<endl;
	
	~Phonebook();
	
};

int main()
{
    Contact* contact = new Contact();
    contact->setName("Luci");
    contact->setNumber("666");
    Phonebook* phonebook = new Phonebook();
    phonebook->addContact(contact);
    phonebook->listContacts();
    delete contact;
    delete phonebook;
    return 0;
}