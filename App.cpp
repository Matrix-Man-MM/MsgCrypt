/*
#include "App.h": This line includes the corresponding header file for the "App" class. 
It ensures that the definitions in this implementation file match the declarations in the header file.

wxIMPLEMENT_APP(App);: This line is a macro provided by wxWidgets that generates the necessary code to implement the application object. 
It creates the entry point for the application and sets up the necessary infrastructure for wxWidgets.

App::App(): This is the implementation of the constructor for the "App" class. 
Since the definition is empty, it doesn't perform any specific initialization or configuration.

App::~App(): This is the implementation of the destructor for the "App" class. 
Again, since the definition is empty, it doesn't perform any specific cleanup or deallocation.

bool App::OnInit(): This is the implementation of the OnInit function, which is a virtual member function inherited from the wxApp class. 
It is called when the application is initialized. In this implementation, the function performs the following steps:

a. pgmWin = new Main();: It creates a new instance of the "Main" class using the new keyword and assigns it to the pgmWin pointer variable declared in the "App" class.

b. pgmWin->Show();: It calls the Show function on the pgmWin object, which presumably displays the main window of the application.

c. return true;: It returns true to indicate that the initialization was successful.
*/

#include "App.h"

wxIMPLEMENT_APP(App);

App::App() {

}

App::~App() {

}

bool App::OnInit() {
	pgmWin = new Main();
	pgmWin->Show();

	return true;
}