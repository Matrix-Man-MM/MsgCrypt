/*
#pragma once: This is a preprocessor directive that ensures the header file is included only once during compilation. 
It prevents multiple inclusions and potential issues caused by multiple definitions.

#include <wx/wx.h>: This line includes the necessary header file from the wxWidgets library. 
It provides the declarations for the wxWidgets classes and functions that will be used in this application.

#include "Main.h": This line includes a header file named "Main.h". 
It suggests that there is another header file with the declaration of a class named "Main" which will be used in this file.

class App : public wxApp: This line defines a class named "App" which is derived from the wxApp class provided by the wxWidgets library. 
This class will serve as the application object.

public:: This keyword specifies that the following members of the class will have public access.

App();: This is the declaration of the constructor for the "App" class.

~App();: This is the declaration of the destructor for the "App" class.

virtual bool OnInit();: This is the declaration of a virtual member function named "OnInit". 
It is part of the wxWidgets framework and will be overridden in the derived class to perform application initialization.

Main* pgmWin = nullptr;: This line declares a pointer variable named "pgmWin" of type "Main*". 
It is initialized with the value nullptr, indicating that it currently points to no object. 
This variable is likely intended to hold an instance of the "Main" class in the application.
*/

#pragma once

#include <wx/wx.h>

#include "Main.h"

class App : public wxApp {
public:
	App();
	~App();

public:
	virtual bool OnInit();

	Main* pgmWin = nullptr;
};